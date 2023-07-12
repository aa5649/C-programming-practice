#include<stdio.h>

int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    void largest(int a[],int n);
    largest(a,n);
    return 0;
}

void largest(int a[],int n){
    int max=a[0],i;
    for(i=1;i<n;i++){
        if(a[i]>max)max=a[i];
    }
    
    printf("%d\n",max);
    return ;
}
  
