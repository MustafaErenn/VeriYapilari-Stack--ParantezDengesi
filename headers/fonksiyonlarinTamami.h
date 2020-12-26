#include <stdbool.h>

typedef struct node
{
    char data;
    struct node* next;
} NODE;

typedef struct stack
{
    NODE* top;
    int count;
} STACK;

STACK* createStack();
void pushStack(STACK* stack,char giris);
int popStack(STACK* stack);
bool balanced(char dizi[],size_t uzunluk);
