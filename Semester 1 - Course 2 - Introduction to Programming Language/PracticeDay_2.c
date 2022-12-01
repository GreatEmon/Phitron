#include <stdio.h>

int main(){
    // // Problem Number 1: Check which is bigger for 2
    // int A,B;
    // scanf("%d%d",&A,&B);
    // if(A>B){
    //     printf("A in bigger");
    // }else if(B>A){
    //     printf("B is bigger");
    // }else{
    //     printf("A and B are equal");
    // }

    // //Problem number 2: Check which is bigger for 2
    // int A,B,C;
    // scanf("%d%d%d",&A,&B,&C);
    // if(A>B && A>C){
    //     printf("A is bigger");
    // }else if(B>A && B>C){
    //     printf("B is bigger");
    // }else if(A==B && A>C){
    //     printf("A and B both are bigger");
    // }else if(A==C && A>B){
    //     printf("A and C both are bigger");
    // }else if(C==B && B>A){
    //     printf("B and C both are bigger");
    // }else if(A==B && B==C){
    //     printf("A B and C are equal");
    // }else{
    //     printf("C is bigger");
    // }
    
    // //Problem 3: Even or odd
    // int n;
    // scanf("%d",&n);
    // if(n==0){
    //     printf("Nor even or odd");
    // }else if(n%2==0){
    //     printf("Even");
    // }else{
    //     printf("Odd");
    // }

    // //Problem 4: CGPA count
    // int n;
    // scanf("%d",&n);
    // if(n>=0 && n<=100){
    //     if(n<=32){
    //         printf("F");
    //     }else if(n>=33 && n<=39){
    //         printf("D");
    //     }else if(n>=40 && n<=49){
    //         printf("C");
    //     }else if(n>=50 && n<=59){
    //         printf("B");
    //     }else if(n>=60 && n<=69){
    //         printf("A-");
    //     }else if(n>=70 && n<=79){
    //         printf("A");
    //     }else if(n>=80 && n<=100){
    //         printf("A+");
    //     }
    // }else{
    //     printf("Please enter a value between 1 to 100");
    // }

    // //Problem 5: Form a triangle
    // int a,b,c;
    // scanf("%d%d%d",&a,&b,&c);
    // if(a+b>c && a+c>b && b+c>a){
    //     printf("Yes");
    // }else{
    //     printf("No");
    // }

    // //Problem 6: Student Bonus Marks
    // int x,y;
    // scanf("%d%d",&x,&y);
    // if(x+y >= 100){
    //     printf("Yes");
    // }else{
    //     printf("No");
    // }

    //Conceptual Session: Domino
    //M     N       Output 
    //1     1       0
    //1     n       n-1
    //m     1       m-1
    //m     n       (m-1)*n

    // int n,m;
    // scanf("%d%d",&n,&m);
    // if(n==1 && m==1){
    //     printf("0\n");
    // }else if(n==1 && m>1){
    //     printf("%d",m-1);
    // }else if(m==1 && n>1){
    //     printf("%d",n-1);
    // }else{
    //     printf("%d",(m-1)*n);
    // }

    //Conceptual Session: Maximum sum of two number
    // int a,b,c;
    // scanf("%d%d%d",&a,&b,&c);
    // if(a<b && a<c){
    //     printf("%d",b+c);
    // }else if(b<a && b<c){
    //     printf("%d",a+c);
    // }else{
    //     printf("%d",a+b);
    // }

    //Conceptual Session: Team
    //A    B    C   D
    //3    7    9   5 => YES
    //4    5    6   9 => NO
    //5    3    8   1 => YES
    //6    5    3   2 => NO
    int a,b,c,d,max1,max2,min1,min2;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b){
        max1 = a;
        min1 = b;
    }else{
        max1 = b;
        min1 = a;
    }
    if(c>d){
        max2 = c;
        min2 = d;
    }else{
        max2 = d;
        min2 = c;
    }
    
    if(max1>min2 && max2>min1){
        printf("YES");
    }else{
        printf("NO");
    }
}