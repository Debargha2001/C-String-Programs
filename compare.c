#include<stdio.h>
#include "length.c"


int compareString(const char* s1, const char* s2) {
    if(lengthOfString(s1) != lengthOfString(s2)){
        return lengthOfString(s1) - lengthOfString(s2);
    }
    int i = 0;
    for(;i<lengthOfString(s1); i++){
        if(s1[i]<s2[i]){
            return s1[i] - s2[i];
        }
        if(s1[i]>s2[i]){
            return s1[i] - s2[i];
        }
    }
    return 0;

}

int main(){
    printf("%d", compareString("abA", "abe"));
}

