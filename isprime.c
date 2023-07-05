//To check whether a number is prime 
#include<stdio.h>

void isprime(int);

int main(){
    int n;
    scanf("%d",&n);
    isprime(n);
    return 0;
}

void isprime(int a){
    int count=0;
    if(a==1)printf("Neither a prime nor a composite number\n");
    else if (a==2)printf("Prime Number\n");
    else{
        for(int i=2;i<a;i++){
            if(a%i==0){
                printf("Composite Number\n");
                break;}
            else count++;}
        if(count==a-2)printf("Prime Number\n");}
    return ; 
            
    }
