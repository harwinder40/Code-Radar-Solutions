#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a <='9' && a>='0'){
        printf("Digit");
    }
    else if(a=='a' || a=='e'|| a=='i'|| a=='o' || a=='u' ||a=='A' || a=='E'|| a=='I'|| a=='O' || a=='U'){
        printf("Vowel");
    }
    else if((a>='A' && a<='Z')|| (a>='a' && a<='z')){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
    return 0;
}