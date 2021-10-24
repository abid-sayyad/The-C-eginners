#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the no u want the multiplication of = ");
    scanf("%d",&a);
    printf("table of %d",a);
    printf("\n");
    while(b<10){
        b=b+1;
        printf("%d*%d= %d",a,b,a*b);
    printf("\n");
    }
    return 0;
}