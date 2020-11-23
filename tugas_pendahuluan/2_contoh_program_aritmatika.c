#include <stdio.h>

int main(){
    int a,b,c,d,e,f,g;

    a = 5;
    b = 2;
    c = a+b;
    d = a-b;
    e = a*b;
    f = a/b;
    g = a%b;

    printf("Nilai a + b = %d \n",c);
    printf("Nilai a - b = %d \n",d);
    printf("Nilai a * b = %d \n",e);
    printf("Nilai a / b = %d \n",f);
    printf("Nilai a %% b = %d \n",g);
    
    return 0;
}