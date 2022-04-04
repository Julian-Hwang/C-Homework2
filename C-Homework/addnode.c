#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	char name[10];
	char num[15];
	char email[50];
	struct node* next;
};

struct node* head = NULL;

int main()
{
	struct node* p;
	p = (struct node*)malloc(sizeof(struct node));
	strcpy(p->name, "È«±æµ¿");
	strcpy(p->num, "010-1111-1111");
	strcpy(p->email, "gdhong@kku.ac.kr");
	p->next = NULL;
	head = p;

	p = (struct node*)malloc(sizeof(struct node));
	strcpy(p->name, "ÀÓ²©Á¤");
	strcpy(p->num, "010-2222-2222");
	strcpy(p->email, "kkjlim@naver.com");
	p->next = NULL;
	head->next = p;

	p = (struct node*)malloc(sizeof(struct node));
	strcpy(p->name, "ÀÌ¼ø½Å");
	strcpy(p->num, "010-3333-3333");
	strcpy(p->email, "sslee@gmail.com");
	p->next = NULL;
	head->next->next = p;

	p = (struct node*)malloc(sizeof(struct node));
	strcpy(p->name, "±èÀ¯½Å");
	strcpy(p->num, "010-4444-4444");
	strcpy(p->email, "daum.net");
	p->next = NULL;
	head->next->next->next = p;

	return 0;
}