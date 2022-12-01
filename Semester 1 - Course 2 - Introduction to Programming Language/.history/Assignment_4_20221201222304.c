// You have given a series, 1+2+3-4-5-6+7+8+9-10-11-12+......N . Your task to print the sum of the Nth element.

#include <stdio.h>

int main(){
    int n,sum=0;
    int flag=0;
    scanf("%ld",&n);
    for(int i=1;i<=n;i++){
        if(flag=0){
            sum += i;
        }else{
            sum -= i;
        }
        if(i%3==0){
            if(flag==1){
                flag=0;
            }else{
                flag=1;
            }
        }
         printf("%lld\n",i);
    }
    printf("%lld",sum);
}