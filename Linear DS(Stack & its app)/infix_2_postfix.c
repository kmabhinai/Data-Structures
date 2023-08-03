#include<stdio.h>
#include<string.h>

int top=-1;
char stack[50];

int priority(char a){
    if(a=='+' || a=='-'){
        return 1;
	}
    else if(a=='*' || a=='/')
        return 2;
    else if(a=='^')
        return 3;
    else
        return -1;
}

int push(char a){
    if(top==50){
        printf("Stack Overflow\n");
    }
    else{
        top++;
        stack[top]=a;
    }
}

char pop(){
    if(top==-1)
        printf("Stack Underflow\n");
    else{
        top--;
        return stack[top+1];
    }
}

char top_val(){
    if(top==-1)
    {
        printf("Stack Underflow\n");
    }
    else{
        return stack[top];
    }
}

int isEmpty()
{
    if(top==-1)
        return 1;
    else if(top>-1)
        return 0;
}

int main(){
    char infix[50];
    printf("Enter the Infix Equation : ");
    scanf("%s",infix);
    char postfix[50]="";
    for(int i=0;i<strlen(infix);i++){
        if(infix[i]=='(')
        {
            push(infix[i]);
        }
        else if(infix[i]>='A' && infix[i]<='Z' || infix[i]>='a' && infix[i]<='z'){
            strncat(postfix,&infix[i],1);
        }
        else if(infix[i]==')')
        {
            while(top_val()!='(')
            {
                strcat(postfix,&stack[top]);
                pop();
            }
            pop();
        }
        else if(infix[i]!=' ')
        {
        	// printf("%c %d %d\n",infix[i],priority(infix[i]),priority(stack[top]));
            while(!isEmpty() && priority(infix[i])<=priority(stack[top]))
            {
                strncat(postfix,&stack[top],1);
                pop();
            }
            	push(infix[i]);
        }
    printf("Postfix : %s\n",postfix);
    }
    while(!isEmpty())
    {
        char c=top_val();
        strncat(postfix,&c,1);
        pop();
    }
    printf("Postfix : %s\n",postfix);
}