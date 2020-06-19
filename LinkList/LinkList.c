#include <stdio.h>
#include <stdlib.h>
#include "LinkList.h"

/*create LinkList from end */
Node* CreateFromEnd(int n)
{
	int i;
	Node *s,*p,*r; 

	for (i=1;i<=n;i++){
		if (i==1){
			s = (Node*)malloc(sizeof(Node));
			s->data = 10*i;
			//s->next =NULL;
			p = s;
			r = s;
		}else{
			s = (Node*)malloc(sizeof(Node));
			s->data = 10*i;
			r->next = s;
			r = s;
		}

	}	
	
	r->next = NULL;

	return p;

}
/*search by index */
Node* Get(Node* L, int i)
{
	Node* p;
	
	p = L;
	int j = 1;

	while(p && j<i){
		p = p->next;
		j++;
	}
	if(j==i)
		return p;
	else
		return NULL; 

}

/*search by key*/


Node* Locate(Node* L, ElemType key)
{
	Node* p;

	p = L;
	//int flag = 0;

	while(p){
		if (p->data == key){
			//flag = 1;
			break;
		}
		else
			p = p->next;
	}

	return p;

/*	if (flag)
		return p;
	else
		return NULL */

} 
/*insert node*/
Node* InsList(Node* L, int i, ElemType e)
{
	Node *p, *s;
	int k = 1;
	p = L;

	s = (Node*)malloc(sizeof(Node));
	s->data = e;
	s->next = NULL;

	if(i==1){

		s->next = p;
		p = s;
	}else{
		while(k<i-1){
			p = p->next;
			k++;
		}
		s->next = p->next;
		p->next =s;
		p = L;	 //is not good, need to be optimization	
	}	
		
	return p;	

}

Node* DelList(Node* L, int i, ElemType *e)
{
	Node *prev, *curr, *q;
	int k = 1;

	prev = L;
	curr = L;

	if(i==1){
	    curr = curr->next;
	    *e = prev->data;
	    prev = curr;
            free(L);
	    return curr;	
	}
	while(curr!=NULL) {
	    if(k==i-1) {
	        break;
	    }
	
	    k++;
     	    curr = curr->next;
	}
	q = curr->next;
	*e = q->data;
	curr->next = curr->next->next;
	free(q);

	return prev;
/*	while (curr->next && k<i-1){
		//prev = curr;
		curr = curr->next;
		k++;
	}
	if(k==i-1){
		q = curr->next;
		*e = q->data;
		curr->next = q->next;
		free(q);
		return OK;		
	}else if(i==1){
		q = L;
		*e = q->data;
		L = q->next;
		printf("&L:%p",L);
		printf("L->data=%d\n",L->data);
		free(q);
		return OK;		
	}else{
		printf("the location is error");
		return ERROR;
	}
*/
}


int PrintList(Node * head)
{
	Node* p;
	
	p = head;
	while(p){
		printf("%d ",p->data);
		p = p->next;	
	}
	printf("\n");
	
	return 0;
} 


