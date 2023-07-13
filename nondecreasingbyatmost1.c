#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,j,count=0;
    scanf("%d",&n);
    int *a = malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
    for(i=0,j=i+1;i<n,j<n;i++,j++){
        if(a[i]>a[j])count++;
    }
    if(count<=1)printf("true\n");
    else printf("false\n");
    return 0;
}
