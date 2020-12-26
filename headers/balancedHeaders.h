bool balanced(char dizi[],size_t uzunluk)
{
    STACK* stack = createStack();

    if(uzunluk%2==0)
    {
        for(int i=0; i<uzunluk; i++)
        {
            if(dizi[0]=='}' || dizi[0] == ')')
            {
                printf("PARANTEZLER DENGESIZ");
                return false;
            }
            else
            {
                if(dizi[i]=='{' || dizi[i] == '(')
                {

                    pushStack(stack,dizi[i]);

                }
                else if((dizi[i]=='}' || dizi[i] == ')'))
                {

                    if(stack->count != 0 && (stack->top->data == '{' && dizi[i]=='}' ))
                    {

                         popStack(stack);
                    }
                    else if(stack->count != 0 &&(stack->top->data == '(' && dizi[i]==')' ))
                    {

                        popStack(stack);
                    }
                    else
                    {
                        printf("PARANTEZLER DENGESIZ");
                        return false;
                    }
                }





            }
        }

        printf("PARANTEZLER DENGELI");
        return true;
    }
    else
    {
        printf("PARANTEZLER DENGESIZ");
        return false;
    }


}
