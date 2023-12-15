//call by referance//
#include<stdio.h>
#include<stdlib.h>
#define max=5
void main(){
    int A[5];
    int top;
    push(5);
    push(7);
    push(8);
    printf("pop item=%d\n",pop);
}
void push(int A[5],int v, int *t){
    if(*t<4){
        A[++*t]=v;
    }else{
        printf("\nStack overflow");
    }
}
int pop(int A[5], int *t, int v){
    if(*t>=0){
        v=A[*t--];
            return v;
    }else{
        printf("\nstack underflow");
            return -1;
    }
}