#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number you want to check =");
    scanf("%d",&num);
    switch(num>0){
        case 1:
        printf("The number is positive");
        break;
        case 0:
        switch(num<0){
            case 1:
            printf("The number is negative");
            break;
            case 0:
            printf("The number is zero");
        }
        
    }
return 0;
}
