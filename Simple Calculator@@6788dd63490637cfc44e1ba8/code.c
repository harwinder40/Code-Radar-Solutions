#include <stdio.h>


int main() {
    int a,b,result;
    char c;

    scanf("%d" "%d",&a,&b);
    scanf("%c",&c);
    
    if (c=='+'){
        result=a+b;
        printf("%d",result);
    }
    else if (c=='-'){
        result=a-b;
        printf("%d",result);
    }
    else if (c=='*'){
        result=a+b;
        printf("%d",result);
    }
    else if (c=='/'){
        result=a/b;
        printf("%d",result);
    }
    else
    printf("Invaid Operator");
    }
    return 0;
}