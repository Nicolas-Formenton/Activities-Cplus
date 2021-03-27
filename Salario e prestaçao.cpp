#include <stdio.h>

int main(void){
    float salario, valor_prestacao;

    printf("Valor do salario: ");
    scanf("%f", &salario);

    printf("Valor requerido para o emprestimo: ");
    scanf("%f", &valor_prestacao);

  
        

    if(valor_prestacao <= 0.2*salario){
        printf("Emprestimo Concedido!");

    }else if(valor_prestacao > 0.2*salario){
        printf("Emprestimo nao concedido.");
    }


return(0);
}