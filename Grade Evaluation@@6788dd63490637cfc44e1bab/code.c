#include <stdio.h>

int main() {
    char word[1];
    scanf("%c",&word);
    if (word==A){
        printf("Excellent");
    }
    else if(word==B){
        printf("Good");
    }
    else if(word==C){
        printf("Average");
    }
    else if(word==D){
        printf("Below Average");
    }
    else if(word==F){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
}
    return 0;
}