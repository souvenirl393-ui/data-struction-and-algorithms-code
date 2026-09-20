#include<stdio.h>
int main(){
    int length,i,jinwei=1;
    int digits[100];
    digits[0]=0;
    scanf("%d",&length);
    for(i=1;i<=length;i++){
        scanf("%d",&digits[i]);
    }
    for(i=length;i>=1;i--){
        if(jinwei==0){
            break;
        }
        else if(digits[i]==9){
            digits[i]=0;
            jinwei=1;
        }else{
            digits[i]+=jinwei;
            jinwei=0;
            break;
        }
    }
    if(jinwei==1){
        digits[0]=1;
        printf("%d",digits[0]);
    }
    for(i=1;i<=length;i++){
        printf("%d",digits[i]);
    }
    return 0;
}