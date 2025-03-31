#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int a;
    for(i=1;i<=n;i++){
        
        if(n%2!=0) a=1;
            else a==0;
        for(j=1;j<=i;j++){
            if(a==0) a=1;
            else a=0;
            printf("%d ",a);
            
        }
        
        printf("\n");
    }
}