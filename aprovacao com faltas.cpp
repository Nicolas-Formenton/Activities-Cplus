#include <stdio.h>

int main(void){
    float media, x, y, z;
    int faltas;

    printf("Informe sua primeira nota: ");
    scanf("%f", &x);

    printf("Informe sua segunda nota: ");
    scanf("%f", &y);

    printf("Informe sua terceira nota: ");
    scanf("%f", &z);

    printf("Informe sua quantidade de faltas: ");
    scanf("%d", &faltas);

//Calculo
media = (x + y + z) / 3; 

//A
if(media >= 8.0 && media <= 10.0){
    printf("Nota: %.2f \nConceito: A", media);    
}
//B
if(media >= 7.0 && media < 8.0){
    printf("Nota: %.2f \nConceito: B", media);    
}
//C
if(media >= 6.0 && media < 7.0){
    printf("Nota: %.2f \nConceito: C", media);   
}
//D
if(media >= 5.0 && media < 6.0){
    printf("Nota: %.2f \nConceito: D", media);    
}
//E
if(media >= 0.0 && media < 5.0){
    printf("Nota: %.2f \nConceito: E", media);    
}

//Calculo das Faltas
if(faltas < 64 * 0.75 && media >= 6.0){
    printf("\nAprovado.");
}
    else if(media < 6.0){
        printf("\nReprovado por nota.");    
    }
    else if(faltas >= 64 * 0.75){
        printf("\nReprovado por falta.");
    }
    else{
        printf("Reprovado");
    }

return(0);
}