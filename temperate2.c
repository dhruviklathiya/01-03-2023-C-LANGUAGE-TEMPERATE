#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter number that you wanna create multiplication table:");
    scanf("%d",&a);
    printf("Here is Multiplication Table for the number %d\n",a);
    for ( b = 1; b <= 10; b++)
    {
        printf("%d X %d = %d\n",a,b,a*b);
    }
    return 0;
}