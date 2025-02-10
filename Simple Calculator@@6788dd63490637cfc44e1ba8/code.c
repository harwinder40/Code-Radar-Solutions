#include<stdio.h>
int main(){
    int a,b,re;
    char c;
    if(scanf("%d" "%d" "%c",&a,&b,&c)!=3){
        printf("error");
        return 1;
    }

    if (c== '+'){
        re=a+b;
        printf("%d",re);
    }
    else if (c== '-'){
        re=a-b;
        printf("%d",re);
    }
    else if (c=='*'){
        re=a*b;
        printf("%d",re);
    }
    else if(c=='/'){
        if (b!=0){
            re=a/b;
            printf("%d",re);
        }
        else{
            printf("Cannot divide by 0");
        }
    }
    else{
        printf("Error");
    }
}