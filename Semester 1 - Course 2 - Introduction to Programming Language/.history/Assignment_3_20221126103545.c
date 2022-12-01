#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    scanf("[^\n]%s",&s);
    for(int i;i<strlen(s);i++){
        if(s[i]>=90 && s[i]<=65){
            s[i]=s[i32;
        }else if(s[i]>=97 && s[i]<=122){
            s[i]-=32;
        }
    }
    printf("%s",s);
}