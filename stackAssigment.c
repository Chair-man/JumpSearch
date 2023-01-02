
#include <stdio.h>
#include<stdlib.h>

#define MAXOFSTACK 10
int toCount=0;
struct stack{
    int arr[MAXOFSTACK];
    int top;
};


typedef struct stack st;
int fullStack(st *mystack){
    if(mystack->top==MAXOFSTACK-1){
        return 1;
    }else{
        return 0;
    }
}

int stackisEmpty(st *mystack){
    if(mystack->top==-1){
        return 1;
    }else{
        return 0;
    }
}

void emptyStack(st *mystack){
    mystack->top=-1;
}

void putToStack(st *mystack, int key){
    if(fullStack(mystack)){
        printf("Stack is full");
    }else{
        mystack->top++;
        mystack->arr[mystack->top]=key;
    }
    toCount++;
}

void popFromStack(st *mystack){
    if(stackisEmpty(mystack)){
        printf("Stack is Empty");
    }else{
        printf("Pop from Stack %d\n",mystack->arr[mystack->top]);
        mystack->top--;
    }
}

int main()
{
    st *myStack=(st*)malloc(sizeof(st));
    emptyStack(myStack);
    putToStack(myStack,10);
    putToStack(myStack,20);
    putToStack(myStack,30);
    putToStack(myStack,40);
    putToStack(myStack,50);
    putToStack(myStack,60);
    
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    
    printf("Count Number=%d\n",toCount);
    for(int i=toCount;i>0;i--){
        printf("Value from Stack=%d\n",myStack->arr[i-1]);
    }

    return 0;
}
