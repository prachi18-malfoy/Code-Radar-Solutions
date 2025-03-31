#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++){
        int a=1;
        int d=a+64;
        char ch=(char)d;
        for(j=1;j<=i;j++){
            printf("%c ",ch);
        }
        printf("\n");
    }
}