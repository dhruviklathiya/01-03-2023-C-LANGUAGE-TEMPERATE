#include<stdio.h>
int main (){
    int a,b;
    printf("Enter value you wanna count number of digits inside it:");
    scanf("%d",&a);
    for (a = a; a >= 0; a--)
    {
        a= a/10;
        b++;
    }
    printf("%d",b);
    return 0;
}