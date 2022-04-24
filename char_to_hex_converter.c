#include <stdio.h>
#include <conio.h>

int main() {
char c; //defines a variable named 'c'
printf("Enter any character"); //print statement for giving the instruction to user
scanf("%c",&c); //taking input from user into variable 'c'
printf("The Given character in Hexadecimal Value is : %x",c); //printing the value of 'c' using '%x' specifiers, for printing its hexadecimal value
return 0;
}
