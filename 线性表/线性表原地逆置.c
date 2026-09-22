#include <stdio.h>
int main(){
    int length,a[100],i;
    scanf("%d",&length);
    for(i=0;i<length;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<length/2;i++){
        int temp=a[i];
        a[i]=a[length-1-i];
        a[length-1-i]=temp;
    }
    for(i=0;i<length;i++){
        printf("%d ",a[i]);
    }
    return 0;
}