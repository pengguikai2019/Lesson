#include <stdio.h>
#include "LinkList.h"


int main()
{
	int n;
	int i, key;
	ElemType e;

	Node* p,*node;
	printf("please input the number of Node for LinkList:");		
	scanf("%d",&i);
	printf("the input number is:%d\n",i);

	p = (Node*)CreateFromEnd(i);
	n = PrintList(p);
/*
	printf("please input the nth Node you want to get:");
	scanf("%d",&i);
	node = Get(p,i);
	printf("the data of %d node is %d",i,node->data); 
	
	printf("please input the key of Node you want to get:");
	scanf("%d",&key);
	node = Locate(p,key);		
	printf("the data of node is %d",node->data);
*/
/*	printf("please input the index and value of Node you want to insert:");
	scanf("%d%d",&i,&e);
	p = InsList(p, i, e);		
	n = PrintList(p);
*/
	printf("please input the index  of Node you want to delete:");
	scanf("%d",&i);
	p = DelList(p, i, &e);
//	printf("&p:%p",p);
	printf("p->data=%d\n",p->data);		
	n = PrintList(p);
	printf("e=%d\n",e); 
	
	return 0;
}



