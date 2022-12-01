#include <stdio.h>
#include <string.h>

int main(){
    char s[100],ns[100];
    scanf("%[^\n]",s);
    for(int i;i<strlen(s)-1;i++){
        if(s[i]>=90 && s[i]<=65){
            ns[i]=s[i]+32;
        }else if(s[i]>=97 && s[i]<=122){
            ns[i]-=32;
        }
    }
    printf("%s",s);
}