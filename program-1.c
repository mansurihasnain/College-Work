//struck//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push(int v);
int pop();
void display();
int peep(int i);
int A[10];
int top=0;
void main()
    {
    push(7);
    push(5);
    push(9);
    push(8);
    printf("pop value 1=%d\n",pop());
    printf("pop item 2=%d\n",pop());
    printf("pop item 3=%d\n",pop());
    // printf("pop item 4=%d\n",pop());
    }
void push(int v){
    if (top<=9)
    A[top++]=v;
    else
    printf("overflow");
    }
int pop(){
    if(top>0)
    return A[--top];                    
     else
    return -1;
    }
void display(){
    int i=0;
    for(i=0;i<top;i++)
    printf("%d ",A[i]);
    printf("\n");
}
int peep(int i){
    if(i<top)
    return A[i];
    else
    return -1;
}