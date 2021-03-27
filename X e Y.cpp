#include <stdio.h>

int main(void){
    int x, y;

    printf("Digite um numero X: ");
    scanf("%d", &x);
    
    printf("Digite outro numero Y: ");
    scanf("%d", &y);

    if(x == y){
        printf("X e igual a Y");
    }
      else if(x < y){
        printf("X e menor que Y");
      }
         else
          printf("X e maior que Y");
    

return(0);
}