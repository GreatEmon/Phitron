#include <stdio.h>
#include <math.h>

int main()
{
    // Problem No 1 : Swap
    // int a = 5, b = 13;
    // // Write code here
    // int temp = a;
    // a = b;
    // b = temp;
    // // End of code
    // printf("%d and %d", a, b);

    //Problem No 2 :Largest Number
    // int n1,n2,n3,n4;
    // scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    // int large = n1;
    // int small = n1;

    // if(n2>large)
    //     large=n2;
    // if(n3>large)
    //     large=n3;
    // if(n4>large)
    //     large = n4;

    // if(n2<small)
    //     small = n2;
    // if(n3<small)
    //     small = n3;
    // if(n4<small)
    //     small = n4;
    
    // printf("Largest = %d\nSmallest = %d",large,small);

    //Problem No 3: Total Digit in a number
    // long long int n;
    // int digit=0;
    // scanf("%d",&n);
    // while(n!=0){
    //     digit++;
    //     n=n/10;
    // }
    // printf("%d digits",digit);

    // //Problem No 4 : Sum of the digit
    // long long int n;
    // int sum=0;
    // scanf("%d",&n);
    // while(n!=0){
    //     sum += (n%10);
    //     n=n/10;
    // }
    // printf("%d",sum);

    //Problem No 5: Weird Algorithm
    // int n;
    // scanf("%d",&n);
    // while(n!=1){
    //     printf("%d, ",n);
    //     if(n%2 ==  0){
    //         n = n/2;
    //     }else{
    //         n = n-1;
    //     }
    // }
    // printf("%d",1);

    //Problem No 6: If Divisible or not
    // int a,b;
    // printf("Enter the first Number: ");
    // scanf("%d",&a);
    // printf("Enter the second Number: ");
    // scanf("%d",&b);
    // if(a%b == 0){
    //     printf("The first number is divisible by the second number.");
    // }else if(b%a == 0){
    //     printf("The second number is divisible by the first number.");
    // }else{
    //     printf("None of them are divisible by the other.");
    // }

    //Problem No 7 : Find GCD of two number
    // int a,b;
    // scanf("%d%d",&a,&b);
    // int a1=a,b1=b;
    // while(a%b != 0){
    //     int temp = a%b;
    //     a = b;
    //     b = temp;
    // }
    // printf("The GCD of %d and %d is %d",a1,b1,b);

    //Problem No 8 : Find LCM of two Number:
    // int a,b;
    // scanf("%d%d",&a,&b);
    // int a1=a,b1=b;
    // while(a%b != 0){
    //     int temp = a%b;
    //     a = b;
    //     b = temp;
    // }
    // int lcm = (a1*b1)/b;
    // printf("The LCM of %d and %d is %d",a1,b1,lcm);

    //Problem No 9 : Factor of a number
    // int n;
    // scanf("%d",&n);
    // printf("The factor of %d are : %d, ",n,1);
    // for(int i = 2;i<n;i++){
    //     if(n%i==0)
    //         printf("%d, ",i);
    // }
    // printf("%d",n);

    //Problem No 10 : Prime or Composite
    int n,flag=1;
    scanf("%d",&n);
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i == 0){
            flag = 0;
            break;
        }
    }
    if(flag == 1 && n != 1){
        printf("Prime");
    }else if(n==1){
        printf("Neither composite nor Prime");
    }else{
        printf("Composite");
    }


}