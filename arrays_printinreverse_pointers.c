#include<stdio.h>

int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)scanf("%d",a+i);
    for(i=0;i<n;i++){
        printf("%u\t",*(a+n-1-i));
    }
    return 0;
}