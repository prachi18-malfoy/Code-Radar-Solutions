#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=1;
        for(j=1;j<=i;j++){
            if(n%2==0) a==1;
            else a==0;
            printf("%d ",a);
            
        }
        a++;
        printf("\n");
    }
}