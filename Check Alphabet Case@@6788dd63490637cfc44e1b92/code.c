// Your code here...
#include <stdio.h>
int main(){
    char al;
    scanf("%c",&al);
    if(al>='A' && al<='Z'){printf("Uppercase");}
    else if (al >= 'a' && al <= 'z') {printf("Lowercase");}
    else{printf("Not an alphabet");}
    return 0;
}