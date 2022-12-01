// You have given a series, 1+2+3-4-5-6+7+8+9-10-11-12+......N . Your task to print the sum of the Nth element.

// #include <stdio.h>

// int main(){
//     long long int n,sum=0;
//     int flag=0;
//     scanf("%lld",&n);
//     for(long long int i=1;i<=n;i++){
//         if(flag == 0){
//             sum += i;
//         }else{
//             sum -= i;
//         }
//         if(i%3==0){
//             if(flag==1){
//                 flag=0;
//             }else{
//                 flag=1;
//             }
//         }
//     }
//     printf("%lld",sum);
// }


// You have given a string. Now your task is to sort this string in descending order. Implement this using function.

// #include <stdio.h>
// #include <string.h>

// void dessort(char* s){
//     for(int i=0;i<strlen(s)-1;i++){
//         for(int j=i+1;j<strlen(s);j++){
//             if(*(s+i) < *(s+j)){
//                 char temp = *(s+i);
//                 *(s+i) = *(s+j);
//                 *(s+j) = temp;
//             }
//         }
//     }
// }

// int main(){
//     char s[10000];
//     scanf("%[^\n]",s);
//     dessort(s);
//     puts(s);
// }


// Write a c program that asks the user to enter integers as inputs to be stored in the variables 'x' &  'y' respectively. There are also two integer pointers named ptrX &  ptrY. Assign the values of 'x' and 'y' to ptrX and ptrY respectively, and display them.

#include <stdio.h>

int main(){
    long long int x,y;
    long long int* ptrX,ptrY;
    scanf("%d%d",&x,&y);
    ptrX = &x;
    ptrY = &y;
    printf("%p %p",*ptrX,*ptrY);

}