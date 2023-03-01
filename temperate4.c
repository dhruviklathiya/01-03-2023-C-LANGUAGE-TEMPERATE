#include<stdio.h>
int main (){
    int a,b,last_digit,e;
    printf("Enter value you wanna count number of digits inside it:");
    scanf("%d",&a);
    last_digit = a % 10; 
    //for printing last digit only || printf("%d\n",last_digit);    
    for (e = a; e > 10;)
    {
        a = a/10;
        b++;
        e = a;
    }
    // for printing first digit only || printf("%d\n",e);
    printf("Sum of first and last digit of value is:%d",e+last_digit);
    return 0;
}