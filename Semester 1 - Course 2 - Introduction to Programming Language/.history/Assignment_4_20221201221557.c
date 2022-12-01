// You have given a series, 1+2+3-4-5-6+7+8+9-10-11-12+......N . Your task to print the sum of the Nth element.

#include <stdio.h>

int main(){
    long long int n,sum=0;
    int flag=0;
    scanf("%lld",&n);
    for(long long int i=1;i<=n;i++){
        if(i%3==0){
            if(flag==1){
                flag=0;
            }else{
                flag=1;
            }
        }
        if(flag=0){
            sum += i;
        }else{
            sum -= i;
        }
    }
    printf("")
}