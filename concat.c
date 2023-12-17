#include<stdio.h>
#include<string.h>

char* concatString(char* s1, char* s2){
    int i = 0;
    int j = strlen(s1);
    for(;s2[i]!='\0';i++,j++){
        s1[j] = s2[i];
    }
    s1[j] = '\0';
    return s1;
}

int main(){
    char s1[100] = "Hello";
    char s2[10] = "World";
    printf("%s", concatString(s1, s2));
}