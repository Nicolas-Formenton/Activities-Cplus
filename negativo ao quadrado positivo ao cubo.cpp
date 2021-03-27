#include <stdio.h>
#include <math.h>

int main(void){
    int num, x, y;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num > 0){  
        x = pow(num, 3);
        printf("O numero ao cubo e: %d", x);
        
        }else if(num < 0) {
            y = pow(num, 2);
            printf("O numero ao quadrado e: %d", y);
            }
            
      
return(0);
}