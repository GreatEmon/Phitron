#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    scanf("%[^\n]",s);
    for(int i=0;i<strlen(s)-1;i++){
        if(s[i]>=90 && s[i]<=65){
            s[i]=s[i]+32;
        }else if(s[i]>=97 && s[i]<=122){
            s[i]=s[i32;
        }
    }
    printf("%s",s);
}