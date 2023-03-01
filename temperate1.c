#include<stdio.h>
int main(){
    char g;
    g = 'a';
    do
    {
        printf("%c\n",g);
        g++;
    } while (g <='z');
    
    return 0;
}