#include <stdio.h>

int main(){
   

    //condicao ? verdadeiro : falso;

    //idade >= 18 ? printf("Você é maior de idade!\n") : printf("Você é menor de idade!\n"); 
    
    

    int idade = 10;
    char* resultado;
  
    resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";

    printf("Resultado: %s\n", resultado);
   




    return 0;
}