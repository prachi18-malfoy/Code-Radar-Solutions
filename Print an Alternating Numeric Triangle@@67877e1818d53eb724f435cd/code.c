#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        int a;
        if(i%2==0) a=0;
            else a=1;
        for(j=1;j<=i;j++){
            if(a==0) a=0;
            else a=1;
            printf("%d ",a);
            
        }
        
        printf("\n");
    }
}