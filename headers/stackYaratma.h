STACK* createStack()
{
    STACK* stack = (STACK*)malloc(sizeof(STACK));
    if(stack)
    {
        stack->count = 0;
        stack->top = NULL;
        return stack;
    }
}
