#include <stdio.h>

int main(){
        // 1. Write a program in C to display the first 10 natural numbers.
        // Expected Output :
        // 1 2 3 4 5 6 7 8 9 10
        for(int i=1;i<=10;i++){
            printf("%d ",i);
        }

        // 2. Write a C program to find the sum of the first 10 natural numbers.
        // Expected Output :
        // The first 10 natural number is :
        // 1 2 3 4 5 6 7 8 9 10
        // The Sum is : 55
        int sum=0;
        printf("The first 10 natural number is : \n");
        for(int i=0;i<=10;i++){
            printf("%d ",i);
            sum+=i;
        }
        printf("\nThe sum is : %d",sum);


        // 3. Write a program in C to display n terms of natural number and their sum.
        // Test Data : 7
        // Expected Output :
        // The first 7 natural number is :
        // 1 2 3 4 5 6 7
        // The Sum of Natural Number upto 7 terms : 28
        int n,sum=0;
        printf("Test Data : ");
        scanf("%d",&n);
        printf("The first %d natural number is : \n",n);
        for(int i=1;i<=n;i++){
            printf("%d ",i);
            sum+=i;
        }
        printf("\nThe sum of the natural Number upto %d terms : %d",n,sum);

        // 4. Write a program in C to display the Square of the number upto given an integer.
        // Test Data :
        // Input number of terms : 5
        // Expected Output :
        // Number is : 1 and Square of the 1 is :1
        // Number is : 2 and Square of the 2 is :4
        // Number is : 3 and Square of the 3 is :9
        // Number is : 4 and Square of the 4 is :16
        // Number is : 5 and Square of the 5 is :25
        int n;
        printf("Test Data : \nInput number of terms : ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            printf("Number is : %d and square of the %d is : %d\n",i,i,i*i);
        }
}