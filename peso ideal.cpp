#include <stdio.h>

int main(void){
    char sexo;
    float h;

    printf("Informe o seu sexo, h ou m: ");
    scanf("%c", &sexo);
   
   
    if(sexo == 'h'){
        printf("Informe a sua altura: ");
        scanf("%f", &h);
        printf("Peso ideal: %f", (72.7*h)-58);

    }
    else if(sexo == 'm'){
        printf("Informe a sua altura: ");
        scanf("%f", &h);
        printf("Peso ideal: %f", (62.1*h)-44.7);
         }
    else{
        printf("Sexo nao existente");
    }
    

return(0);
}