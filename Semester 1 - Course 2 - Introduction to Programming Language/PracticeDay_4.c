#include <stdio.h>

int main(){
    // Input an array
    int n;
    scanf("%d",&n);
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }

    //Reverse an array
    // for(int i=n-1;i>=0;i--){
    //     printf("%d ",arr[i]);
    // }

    
    //Print the array
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }

    //Update an array
    // int q,i,v;
    // scanf("%d",&q);
    // for(int j=0;j<q;j++){
    //     scanf("%d",&i);
    //     scanf("%d",&v);
    //     arr[i] = arr[i]+v;
    // }

    //Is all the value is same?
    // int flag=1;
    // for(int i=0;i<n-1;i++){
    //     if(arr[i]!=arr[i+1]){
    //         flag=0;
    //         break;
    //     }
    // }
    // if(flag==0){
    //     printf("NO");
    // }else{
    //     printf("YES");
    // }

    //Print array
    // for(int i=0;i<n;i++){
    //     printf("%d- ",arr[i]);
    //     for(int j=0;j<n;j++){
    //         if(i==j){
    //             continue;
    //         }
    //         printf("%d ",arr[j]);
    //     }
    //     printf("\n");
    // }

    //Is k is possible by adding two number
    // int k,flag=0;
    // scanf("%d",&k);
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]+arr[j]==k){
    //             flag=1;
    //             break;
    //         }
    //     }
    // }
    // if(flag==0){
    //     printf("NO");
    // }else{
    //     printf("YES");
    // }

    //Write a C program to take a non-negative integer N and print the pattern as shown below
    // For N=5, the pattern should be
    // *
    // **
    // ***
    // ****
    // *****
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }



}