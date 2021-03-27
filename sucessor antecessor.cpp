#include <stdio.h>

int main(void)
{
    int num1, antecessor, sucessor;

// Numero
    printf("Informe um numero: ");
    scanf("%d",&num1);


// Antescessor
    printf("antecessor: ");
    
    antecessor = num1 -1;
    printf("%d", antecessor);


// Sucessor
    printf("\nsucessor: "); 
    
    sucessor = num1 + 1;
    printf("%d", sucessor);


return 0;
}