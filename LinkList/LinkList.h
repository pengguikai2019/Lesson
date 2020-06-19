#define OK 0
#define ERROR 1

typedef int ElemType;

typedef struct node{
	ElemType data;
	struct node *next;
}Node;


Node* CreateFromEnd(int n);
Node* Get(Node* L, int i);
Node* Locate(Node* L, ElemType key);
Node* InsList(Node* L, int i, ElemType e);
Node* DelList(Node* L, int i, ElemType *e);
int PrintList(Node * head);
