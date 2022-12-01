#include <iostream>
#include <math.h>
using namespace std;

// void Isprime(int n){
    
// }

void factor(int n){
    //Naive Approach
    // for(int i=1;i<=n;i++){
    //     if(n%i == 0){
    //         cout<<i<<endl;
    //     }
    // }
    //Better Approch
    cout<<1<<endl;
    for(int i=2;i<n;i++){
        if(n%i == 0){
            cout<<i<<endl;
        }
    }
    cout<<n<<endl<<endl;

    //Best Approach
    cout<<1<<endl;
    for(int i=2;i<=floor(n/2);i++){
        if(n%i == 0){
             cout<<i<<endl;
         }
    }
    cout<<n<<endl;
}

int main(){
    int a;
    cin>>a;
    factor(a);
}
