#include <stdio.h>
#include <stdlib.h>

#include<math.h>
#include<ctype.h>
#include<string.h>
#define max 100
#define TRUE 1
#define FALSE 0

struct stack
{
     int top;
     char items[max];
};

struct stack s;
char infix[max],postfix[max];
int pos=0;
void convert();
void push(char);
char pop();
int precedence(char);
int f=0;
int empty();
int stackfull();

int main()
{
     s.top=-1;
     printf("Enter the infix expression\n");
     gets(infix);
     convert();
     if(f==0)
     {
         printf("The postfix expression is\n");
         puts(postfix);
     }
     return 0;
}

void convert()
{
     if(infix[0]=='\0') { f=1; printf("Invalid input\n"); return; }
     int i;
     char symbol,temp;
     for(i=0; infix[i]!='\0';i++)
     {
         symbol=infix[i];
         switch(symbol)
        {
             case '(': push(symbol);
             break;
             case ')': while((temp=pop())!='(')
             postfix[pos++]=temp;
             break;
             case '+':
             case '-':
             case '*':
             case '/':
             case '$':
                        while(!empty()&&precedence(s.items[s.top])>=precedence(symbol)&&precedence(symbol)!=-1)
                         {
                             temp=pop();
                             postfix[pos++]=temp;
                         }
                         push(symbol);
                         break;
            default: if(!isalpha(symbol))
                     {
                         printf("Invalid input\n");
                         f=1;
                         return;
                     }
                     else
                     {
                         postfix[pos++]=symbol;
                         break;
                     }
         }
     }
     while(!empty())
     {
         temp=pop();
         postfix[pos++]=temp;
     }
}

void push(char ele)
{
     if(stackfull())
        printf("Stack is full\n");
     else
        s.items[++s.top]=ele;
}

char pop()
{
     if(empty())
     {
         printf("Stack is empty\n");
         exit(0);
     }
     else
        return(s.items[s.top--]);
}

int stackfull()
{
     if(s.top==max-1)
        return TRUE;
     else
        return FALSE;
}

int empty()
{
     if(s.top==-1)
        return TRUE;
     else
        return FALSE;
}

int precedence(char symbol)
{
     switch(symbol)
     {
         case '$':return 3;
         case '*':
         case '/':return 2;
         case '+':
         case '-':return 1;
         case '(':
         case ')':return(0);
         default: printf("Invalid input\n");
         return -1;
     }
}
