//
// Created by msi on 1/9/2023.
//
#include "stdio.h"
#include "stdlib.h"

#define MAXOFSTACK 10

int toCount =0 ;


struct stack{

    int data[MAXOFSTACK];
    int top;
};

typedef struct stack st;


int ifStackIsFull(st *myStack){

    if (myStack->top==MAXOFSTACK-1){

        return 1;
    } else{

        return 0;
    }
}

int isStackIsEmpty(st *myStack){

    if(myStack->top== -1 ){

        return 1;
    } else{
        return 0;
    }

}
void creat_emptyStack(st *myStack){

    myStack -> top = -1;
}

void pushToStack(st *myStack , int value){
    if(ifStackIsFull(myStack)){

        printf("stack is full!");
    }else{

        myStack->top++;
        myStack->data[myStack->top]=value;
        toCount++;

    }


}

void popFromStack(st *myStack) {

    if (isStackIsEmpty(myStack)) {

        printf("Stack is empty!");
    } else {

        printf("Pop from stack data is : %d\n", myStack->data[myStack->top]);
        myStack->top--;
    }
}

int main(){

    st *myStack =(st*)malloc(sizeof (st));

    creat_emptyStack(myStack);

    pushToStack(myStack,10);
    pushToStack(myStack,11);
    pushToStack(myStack,12);
    pushToStack(myStack,13);
    pushToStack(myStack,14);

    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);

    for(int i=0 ; i <toCount; i++){
        printf("my stack data is : %d\n",myStack->data[i]);
    }

    return 0;
}