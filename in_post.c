//TO CONVERT INFIX TO POSTFIX

#include<stdio.h>
#include<ctype.h>
#define max 10
int stack[max];
int top=-1;

// PUSH OPERATION--------------------------------------------------------------

void push(char value)
{
    stack[++top]=value;
}

//POP OPERATION------------------------------------------------------------------

char pop()
{
    if(top==-1)
        return 0;
    else
        return stack[top--];
}

//PRIORITY CHECKING OF OPERATORS-------------------------------------------------------

int precedence(char op)
{
    if(op=='^')
        return 4;
    else if(op=='/'||op=='*')
        return 3;
    else if(op=='+'|| op=='-')
        return 2;
    else if(op=='(')
        return 1;
    else
        return 0;
}

//MAIN FUNCTION-------------------------------------------------------------------------

void main()
{
    char postfix[max],infix[max];
    int i,j=0;
    printf("enter a infix expression:");
    scanf("%s",infix);
    for(i=0;infix[i]!='\0';i++)
    {
        char symbol=infix[i];
        if(isalnum(symbol))
        {
            postfix[j++]=symbol;
        }
        else if(symbol=='(')
        {
            push(symbol);
        }
        else if(symbol==')')
        {
            while(stack[top]!= -1  && stack[top]!='(')
            {
                postfix[j++]=pop();
            }
            pop();
        }
        else
		{
			while(stack[top]!= -1 && (precedence(stack[top])>=precedence(symbol)))
        	{
            	postfix[j++]=pop();
        	}
        	push(symbol);
        }
    
    }

    while(top!=-1)
    {
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    printf("%s",postfix);
}

