#include<stdio.h>

int lengthOfString(const char* str){
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    return length;
}

// int main(){
//     char* s = "Hello World";
//     printf("%d", lengthOfString(s));
// }