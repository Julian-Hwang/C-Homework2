#include<stdio.h>
#include <stdlib.h>
#include <time.h>

struct card
{
	int face;
	int suit;
};

typedef struct card CARD;

void init_deck(CARD arr[]);
void shuffle_deck(CARD arr[]);
void print_card(CARD* c);
void print_deck(CARD arr[]);
void sort(CARD arr[]);

int main()
{
	CARD deck[52];

	init_deck(deck);
	
	shuffle_deck(deck);
	print_deck(deck);
	printf("\n");


}