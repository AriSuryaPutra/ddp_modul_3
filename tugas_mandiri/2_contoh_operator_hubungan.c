#include <stdio.h>

int main(){
    int nilai_uts, nilai_uas;
    char grade; 

    printf("Input nilai UTS: \n");
    scanf("%d",&nilai_uts);
    printf("Input nilai UAS: \n");
    scanf("%d",&nilai_uas);
    
    if(nilai_uts>=85 && nilai_uas >=85){
        grade = 'A';
    }else if(nilai_uts>=70 && nilai_uas >=70){
        grade = 'B';
    }else if(nilai_uts>=55 && nilai_uas >=55){
        grade = 'C';
    }else if(nilai_uts>=40 && nilai_uas >=40){
        grade = 'D';
    }else if(nilai_uts<40 && nilai_uas <40){
        grade = 'E';
    }else{
        grade = 'E';
    }

    printf("Hasil Ujian anda adalah %c \n",grade);

    return 0;
}