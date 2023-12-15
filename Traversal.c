#include<stdio.h>
void main(){
    int a[10],size,i,num,pos,n;
    printf("\nEnter the size of an array=");
    scanf("%d",&size);
        if(size<10){
    printf("\nEnter the Elements of an array=\n");
        for(i=0;i<size;i++)
    scanf("%d",&a[i]);
       printf("\nDo you want to insert the number in array[0/1]=\n");
       scanf("%d",&n);
        if(n==0)//traversal//
        {
        for(i=0;i<size;i++)
    printf("The elements of an array are=%d\n", a[i]);
        }
        else//insertion//
        {
            printf("\nEnter the Nummber You want to Enter=");
            scanf("%d",&num);
            printf("\nEnter the Position You want to enter the number=");
            scanf("%d",&pos);
                if(pos>0&&pos<size+1){
                    for(i=size-1;i<=pos-1;i--)
                    {
                    a[i+1]=a[i];
                    }
                    a[pos-1]=num;
                    size=size+1;
                for(i=0;i<size;i++)
                {
                    printf("The elements of an array are=%d\n", a[i]);
                }
                }
                else
                {
                    printf("\nInvalid Position");
                }
        }
        }
        else{
            printf("\nArray size Overflow\n");
        }
}