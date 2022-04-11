#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	char name[100];
	char phone[30];
	char email[50];
	struct node* next;
};

struct node* head = NULL;

void print_list(struct node* h)
{
	struct node* p;
	p = h;
	while (p != NULL)
	{
		printf("--> %s %s %s", p->name, p->phone, p->email);
		p = p->next;
	}
	printf("\n");
}

void add_head(char* name, char* phone, char* email)
{
	struct node* p = malloc(sizeof(struct node));
	strcpy(p->name, name);
	strcpy(p->phone, phone);
	strcpy(p->email, email);
	p->next = head;
	head = p;
}

int main(void)
{
	add_head("È«±æµ¿", "010-1111-1111", "gdhong@kku.ac.kr");
	print_list(head);

	add_head("ÀÓ²©Á¤", "010-2222-2222", "kkjlim@naver.com");
	print_list(head);

	add_head("ÀÌ¼ø½Å", "010-3333-3333", "sslee@gmail.com");
	print_list(head);

	add_head("±èÀ¯½Å", "010-4444-4444", "yskim@daum.net");
	print_list(head);

	return 0;
}