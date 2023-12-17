#include<stdio.h>
#include<string.h>

char* copyString(char* dest, char* src){
    int i = 0;
    for(;i<strlen(src); i++){
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}

int main(){
    char s1[10] = "Hello";
    char s2[10];
    char* s3 = copyString(s2, s1);
    printf("%s", copyString(s2, s1));
}