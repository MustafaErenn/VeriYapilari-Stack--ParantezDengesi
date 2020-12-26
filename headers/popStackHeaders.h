int popStack(STACK* stack)
{
    char returnChar;
    NODE* temp;
    if((stack->count)==0)
    {
        return 2;
    }
    else
    {
        temp = stack->top;
        returnChar = temp->data;
        stack->top = temp->next;
        free(temp);
        stack->count--;
        return 1;
    }

}
