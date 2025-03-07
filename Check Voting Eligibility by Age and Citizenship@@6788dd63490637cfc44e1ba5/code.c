#include <stdio.h>
int main(){
    int age,status;
    scanf("%d %d",&age,&status);
    if(age>=18){printf("Eligible");}
    else{printf("Not Eligible");}
    return 0;
}