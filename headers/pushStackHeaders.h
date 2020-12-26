void pushStack(STACK* stack,char giris)
{
    NODE* node1 = (NODE*)malloc(sizeof(NODE));
    node1->data = giris;
    node1->next = stack->top;
    stack->top = node1;
    stack->count++;
}
