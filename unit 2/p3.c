#include <stdio.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push();
void pop();

int main()
{
    push();
    pop();
}


void push()
{
    char str[MAX];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(top == MAX - 1)
        {
            printf("Stack Overflow");

        }
        stack[++top] = str[i];
    }
}


void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow");

    }

    printf("Reversed string: ");

    while(top != -1)
    {
        printf("%c", stack[top--]);
    }

    printf("\n");
}