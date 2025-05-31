#include<stdio.h>
#define MAX 100

int Stack[MAX];
int top = -1;


int push(int value){
    if(top == MAX-1){
        printf("Stack Overflow!!");
    }else{
        top++;
        Stack[top] = value;
        printf("%d pushed into the stack. \n", value);
    }
}

int pop(){
    if (top == -1)
    {
        printf("Stack Underflow!!!");
        return -1;
    }else{
        int value = Stack[top];
        top--;
        printf("%d popped from the stack.\n", value);
        return value;

    }
    
}

void display(){
    if (top == -1)
    {
        printf("Stack is Empty!!!");
    }
    else{
        printf("Stack Elements are :\n");
        for (int i = top; i > -1; i--)
        {
            printf("%d\n", Stack[i]);
        }
        
    }
    
}
int main()
{
    int choice, value;

    while(1){
        printf("\n---Stack Menu---\n");
        printf("1. Push\n2. POP\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting Program.\n");
            break;
        
        default:
            printf("Invalid Input....... Try Again!!!");
        }
    }
    return 0;
}