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

// #include <stdio.h>

// int main(){
//     long long int x,y;
//     long long int *ptrX , *ptrY;
//     scanf("%lld %lld",&x,&y);
//     ptrX = &x;
//     ptrY = &y;
//     printf("%lld %lld",*ptrX,*ptrY);
// }

// Make a simple program that reads one variable named N which is the summation of 4 consecutive even numbers. Print the 4 consecutive even numbers whose summation is N.
// 12 + 14 + 16 + 18 = 60

// #include <stdio.h>
// #include <math.h>

// void even_cons(int n){
//     for(int i=1;i<=(floor(n/4)-3);i++){
//         if((4*i + 12) == n){
//             printf("%d %d %d %d\n",i,i+2,i+4,i+6);
//             return;
//         }
//     }
// }

// int main(){
//     int t,n;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++){
//         scanf("%d",&n);
//         even_cons(n);
//     }
// }



// #include <stdio.h>

// int tot(int a[],int n){
//     int sum = 0;

//     for(int i=1;i<=n;i++){
//        if(i%2 == 0 && a[i-1]%2 == 0){
//           sum = sum + i + a[i-1]; 
//        }else if(i%2 == 1 && a[i-1]%2 == 1){
//           sum = sum + i + a[i-1];
//        }
//     }
//     return sum;
// }



// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     int sum = tot(arr, n);
//     printf("%d",sum);
// }




// #include <stdio.h>
// int is_div_by3(int n){
//     if(n%3 == 0){
//         return 1;
//     }
//     return 0;
// }

// int is_div_by5(int n){
//     if(n%5 == 0){
//         return 1;
//     }
//     return 0;
// }

// int main(){
//     int n,count=0;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n;i++){
//         if(is_div_by3(a[i]) || is_div_by5(a[i])){
//             count++;
//         }
//     }
//     if(count == 0){
//         printf("-1");
//     }else{
//         printf("%d",count);
//     }
// }



// #include <stdio.h>

// void swap(int* a,int l,int r){
//     int temp = *(a+l-1);
//     *(a+l-1) = *(a+r-1);
//     *(a+r-1) = temp;
// }


// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int q;
//     scanf("%d",&q);
//     for(int i=0;i<q;i++){
//         int l,r;
//         scanf("%d %d",&l,&r);
//         swap(a,l,r);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
// }


// #include <stdio.h>
// #include <string.h>

// int pos_even(int n){
//     if(n%2 == 0){
//         return 1;
//     }else{
//         return 0;
//     }
// }


// int main(){
//     char s[1000];
//     scanf("%[^\n]",s);
//     for(int i=1;i<=strlen(s);i++){
//         if(pos_even(i)){
//             printf("%c%c",s[i-1],s[i-1]);
//         }else{
//             printf("%c",s[i-1]);
//         }
//     }
// }


#include <stdio.h>
#include <math.h>

int prm(int x){
    for(int i=2;i<x;i++){
        if(x%i == 0){
            return 0;
        }
    }
    return 1;
}

int tot_prm(int* a,int n){
    int prim=0;
    for(int i=0;i<n;i++){
        if(prm(*(a+i))){
            prim++;
        }
    }
    return prim;
}

double avg(int* a,int n){
    int sum=0,count=0;
    float avg;
    for(int i=0;i<n;i++){
        if((*(a+i))/2 == 0){
            sum += *(a+i);
            count++;
        }
    }
    avg =() sum/count;
    return avg;
}

int main(){
    int n,prime=0,e;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Prime numbers: %d\n",tot_prm(a,n));
    printf("Average of all even integers: %0.2lf",avg(a,n));
}
