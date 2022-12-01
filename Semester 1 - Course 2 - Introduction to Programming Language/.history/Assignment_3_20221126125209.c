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


// #include <stdio.h>

// int main(){
//     int n,k,counter=0;
//     scanf("%d %d",&n,&k);
//     int arr[n];
//     for(int i = 2;i<=n;i+=2){
//         arr[counter++] = i;
//     }
//     for(int i=1;i<=n;i+=2){
//         arr[counter++] = i;
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\nThe %dth element in this sequence is %d",k,arr[k-1]);
// }


// #include <stdio.h>

// int add_three_nums(int a, int b, int c)
// {
// 	return a+b+c;
// }

// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     printf("%d",add_three_nums(a,b,0));
// }


// #include <stdio.h>

// int fact(int n){
//     if(n<=1){
//         return 1;
//     }
//     int factorial = n*fact(n-1);
//     return factorial;
// }

// int ratio(int a ,int b){
//     int fact_a = fact(a);
//     int fact_b = fact(b);
//     if(fact_a > fact_b){
//         return (fact_a/fact_b);
//     }else{
//         return (fact_b/fact_a);
//     }
// }

// int main(){
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     printf("Factorial of %d is %d",a,fact(a));
//     printf("\nRatio is %d",ratio(b,c));
// }

// #include <stdio.h>

// float median(int arr[], int size){
//     if(size%2 != 0){
//         return arr[((size+1)/2)-1];
//     }else{
//         int ind = (size/2);
//         float val = (arr[ind]+arr[ind-1])/2.0;
//         return val;
//     }
// }

// int main(){
//     printf("Enter the size of Array : ");
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }  
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if ((a[i]>a[j]))
//             {
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp; 
//             }
            
//         }
//     }

//     printf("The Median is %0.2f" ,median(a,n));
// }



// #include <stdio.h>
// #include <string.h>

// int main(){
//     char s[100];
//     short int n;
//     scanf("%[^\n]",s);
//     scanf("%hu",&n);
//     for(int i=0;i<strlen(s);i++){
//      if(s[i]>=97 && s[i]<=122){
//         if(n+s[i] >122 ){
//             s[i] = ((n+s[i])%122) + 96;
//         }else{
//             s[i] += n;
//         }
//       }
//     }
//     printf("%s",s);
// }

// #include <stdio.h>

// int main(){
//     int a[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",a[j][i]);
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>

char grade(int n){
    if(n<=100 && n>=80){
        return "A";
    }else if(n<=79 && n>=60){
        return "B";
    }else if(n<=59 && n>=40){
        return "C";
    }else{
        return "F";
    }
}

int main(){
    int n;
    scanf("5d",&n)
}
