#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);  //consider two numbers as 4 and 5
    a = a + b;  //a = 4 + 5 = 9
    b = a - b;  //b = 9 - 5 = 4
    a = a - b;  //a = 9 - 4 = 5
    printf("Numbers after swapping: %d %d", a, b);
}