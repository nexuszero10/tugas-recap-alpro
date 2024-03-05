#include <stdio.h>

char fullname[30];

int main (){
    printf("Masukkan nam lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);    
    return 0 ;
}