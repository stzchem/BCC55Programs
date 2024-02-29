#include <stdio.h>
#include <malloc.h>

typedef char ElemType;
typedef struct LNode{
	ElemType data;
	struct LNode * next;
} LinkList;

extern void InitList(LinkList * &L);
extern void DestroyList(LinkList * &L);
extern int ListIsEmpty(LinkList * L);
extern int ListLength(LinkList * L);
extern void DispList(LinkList * L);
extern int GetElem(LinkList * L,int i,ElemType &e);
extern int LocateElem(LinkList * L,ElemType e);
extern int ListInsert(LinkList * &L,int i,ElemType e);
extern int ListDelete(LinkList * &L,int i,ElemType e);

int main(){
	LinkList * h;
	ElemType e;
	printf("(1)Initialize the LinkList:\n");
	InitList(h);
	printf("(2)Insert the letters:a,b,c,d,e\n");
	if(ListInsert(h,1,'a')) printf("Insert the letter 'a' successfully\n");
	if(ListInsert(h,2,'b')) printf("Insert the letter 'b' successfully\n");
	if(ListInsert(h,3,'c')) printf("Insert the letter 'c' successfully\n");
	if(ListInsert(h,4,'d')) printf("Insert the letter 'd' successfully\n");
	if(ListInsert(h,5,'e')) printf("Insert the letter 'e' successfully\n");
	printf("(3)Output the LinkList:\n");
	DispList(h);
	return 0;
}