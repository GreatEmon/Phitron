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


#include <stdio.h>
#include <string.h>

int P_Value(char strin[],int n){
    char nc = n - 48;
    for(int i=0;i<strlen(strin);i++){
        if(strin[i]==){
            return 1;
        }
    }
    return 0;
}

int main(){
    char s[100];
    scanf("%[^\n]",s);
    if(P_Value(s,1)){
        printf("Yes");
    }else{
        printf("No");
    }
}


