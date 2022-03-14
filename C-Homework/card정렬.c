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

	sort(deck);
	print_deck(deck);
	printf("\n");

	return 0;
}

void init_deck(CARD arr[])
{
	int i, face, suit;
	
	i = 0;
	for ( suit = 0; suit < 4; suit++)
	{
		for ( face = 1; face <= 13; face++)
		{
			arr[i].suit = suit;
			arr[i].face = face;
			i++;
		}
	}
}

void shuffle_deck(CARD arr[])
{
	int first, second;
	CARD s;

	srand(time(NULL));
	for ( first = 0; first < 52; first++)
	{
		second = rand() % 52;
		s = arr[first];
		arr[first] = arr[second];
		arr[second] = s;
	}
}

void print_card(CARD* c)
{
	char* faces[] = { "","A","2","3","4","5","6","7","8","9","10","J","Q","K" };
	char* suits[] = { "Hearts","Diamond","Clubs","Spades" };
	printf("%s-%s \t", faces[c->face], suits[c->suit]);
}

void print_deck(CARD arr[])
{
	int i;
	for ( i = 0; i < 52; i++)
	{
		print_card(&arr[i]);
		if (i % 4 == 3) {
			printf("\n");
		}
	}
}

void sort(CARD arr[])
{
	int i, j, index = 0;

	for ( i = 1; i <= 13; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			arr[index].face = i;
			arr[index].suit = j;
			index++;
		}
	}
}