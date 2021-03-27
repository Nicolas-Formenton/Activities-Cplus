#include <stdio.h>
int main (void){
    int a, b , c;
    printf("Digite os valores para a, b e c: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

if(a>b)
    if(b>c)
        printf("%d %d %d\n", a, b, c);
        else
            if(a>c)
                printf("%d %d %d\n", a, c, b);
                else
                    printf("%d %d %d", c, a, b);
             
else
    if(b>c)
        if(a>c)
            printf("%d %d %d\n", b, a, c);
            else
                printf("%d %d %d\n", b, c, a);
                else
                    printf("%d %d %d\n", c, b , a);
                
return(0);
}