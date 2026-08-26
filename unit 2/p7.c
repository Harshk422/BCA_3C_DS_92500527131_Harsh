#include <stdio.h>
#define MAX 100

int stack [MAX],top=-1;
void push (int value);
int pop();

int main()
{
    int num,i,div;

    printf("Enter a number : ");
    scanf("%d", &num);


     for (i = 2; i< num; i++) {
        if (num % i == 0) {

            push ();
        }
    }
    for (i=2;i<=num;i++)

        if (num % 1 == 0)
    {
        div = pop();
    }

    printf("\nThe Lowest Common Divisor of %d is: %d", number, smallestdivisor);
}
void push(int value)
{
    if(top==MAX-1)
    {
        printf("\n Stack is Overflow");
        return;
    }
    else
    {
        top++;
        stack[top]=value;
    }
}
int pop()
{
    int val;
    if(top==-1)
    {
        printf("\n Stack is Underflow");
        return -1;
    }
    else
    {
        val=stack[top];
        top--;
        return val;
    }
}


