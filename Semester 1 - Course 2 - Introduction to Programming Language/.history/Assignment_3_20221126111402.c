// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     // char s[100];
//     // scanf("%[^\n]",s);
//     // for(int i=0;i<strlen(s);i++){
//     //     if(s[i]<=90 && s[i]>=65){
//     //         s[i]+=32;
//     //     }else if(s[i]>=97 && s[i]<=122){
//     //         s[i]-=32;
//     //     }
//     // }
//     // printf("%s",s);
//     int i = 0;
//     while (i < 10)
//     {
//         printf("I am inside the loop");
//         i++;
//     }
// }


// #include <stdio.h>
// #include <string.h>

// int P_Value(char strin[],int n){
//     for(int i=0;i<strlen(strin);i++){
//         if((int)strin[i]==(n+48)){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     char s[100];
//     scanf("%[^\n]",s);
//     if(P_Value(s,1) && P_Value(s,7) && P_Value(s,9)){
//         printf("Yes");
//     }else{
//         printf("No");
//     }
// }


#include <stdio.h>

int main(){
    int n,k,counter=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i = 2;i<=n;i+=2){
        arr[counter++] = i;
    }
    for(int i=1;i<=n;i+=2){
        arr[counter++] = i;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nThe %dth element is %d",k,arr[k-1]);
}

