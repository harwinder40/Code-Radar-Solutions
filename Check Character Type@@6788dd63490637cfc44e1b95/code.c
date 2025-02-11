#include<stdio.h>
int main(){
    char a;
    scanf("%d",&a);
    if(a <='9' && a>='0'){
        printf("Digit");
    }
    else if(a=='a' || a=='e'|| a=='i'|| a=='o' || a=='u' ||a=='A' || a=='E'|| a=='I'|| a=='O' || a=='U'){
        printf("Vowels");
    }
    else if(a>='a' && a<='z'|| a>='A' && a<='Z'){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
    return 0;
}