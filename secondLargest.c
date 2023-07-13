//second largest element
#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int *a,int n);
void secondLargest(int *a,int n);

int main(){
    int n,i;
    scanf("%d",&n);
    int *a = malloc(sizeof(int)*n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    bubbleSort(a,n);
    secondLargest(a,n);
    return 0;
}

void bubbleSort(int *a,int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp = a[j];
                a[j]=a[i];
                a[i]=temp;
            }}}
    
}

void secondLargest(int *a,int n){
    printf("%d\n",a[1]);
}
