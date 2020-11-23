#include <stdio.h>

int main(){
    int x,pangkat3,pangkat2,hasil,hasil2,hasil3;

    printf("Masukan nilai x \n");
    scanf("%d",&x);
    
    hasil = (2*x*x*x)+x*x-6;
    hasil2 = x+x/x-x;
    hasil3 = x%2;

    printf("Hasil Soal no 1.A adalah %d \n",hasil);
    printf("Hasil Soal no 1.B adalah %d \n",hasil2);
    printf("Hasil Soal no 1.C adalah %d \n",hasil3);

    return 0;
}