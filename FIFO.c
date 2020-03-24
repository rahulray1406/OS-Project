#include <stdio.h>
#include <stdlib.h>


#define ReferenceLength 100

typedef struct
{
    int *PG_Number1;
    int CountforElem;	
}Framing;

int ForReference, SecondFrame;

MF;

int *StringPointer;
void reference();

void frameinit();

void reference2();

void frameinit2();

int FIFO();

int LRU();
void reference()
{
   int i;
   srand(time(0));
   StringPointer = (int *)malloc( sizeof(int) * ReferenceLength );
   printf("The randomized Reference String: ");
   for(i=0; i< ReferenceLength; i++)
   {
	StringPointer[i] = rand() % ref2;
        printf("%d ", StringPointer[i]);       
   }
   printf("\n");
}
