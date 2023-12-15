#include<stdio.h>
#include<limits.h>
int main(){     
                        // sizeof() and limits of datatype
    int c;
    short s;
    printf("Size of Character= %d byte(s)\n",sizeof(s));
    printf("Size of shoat datatype= %d byte(s)\n",sizeof(s));
    printf("Size of float= %d byte(s)\n",sizeof(float));
    printf("Signed short minimum value= %d\n",SHRT_MIN);
    printf("signed int maximum value= %d\n",INT_MAX);
    printf("unsignrd short maximum value= %u\n",USHRT_MAX);
}