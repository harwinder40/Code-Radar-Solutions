#include <stdio.h>


int main() {
    int a,b,c;
    scanf("%d" "%d" "%d",&a,&b,&c);
    c='+-*/';
    d=a+b;
    e=a-b;
    f=a*b;
    g=a/b;
    if (c==+){
        printf("%d",d);
    }
    else if (c==-){
        printf("%d",e);
    }
    else if (c==*){
        printf("%d",f);
    }
    else if (c==/){
        printf("%d",g);
    }
    else
    printf("none");
    }
    return 0;
}