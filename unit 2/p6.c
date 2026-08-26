#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    int gcd = findGCD(a, b);

    printf("\n The GCD of %d and %d is: %d", a, b, gcd);
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
int findGCD(int a, int b) {
    push(a);
    push(b);

    while (top >= 1) {
        int num2 = pop();
        int num1 = pop();

        if (num2 == 0) {
            return num1;
        }

       int remainder = num1 % num2;

        push(num2);
        push(remainder);
    }
     return pop();
}
