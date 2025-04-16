#include <stdio.h>

int main(){
    int opcao;
    float nota1, nota2, media;

    printf("Menu de gerenciamento de estudantes\n");
    printf("1. Calcular media\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Calcular a média\n");
        printf("Digite a primeira Nota:\n");
        scanf("%f", &nota1);
        printf("Digite a segunda Nota:\n");
        scanf("%f", &nota2);

        //testar as condições se a nota é aquivalente de 0 a 10;
        if((nota1 >= 0 && nota1 <= 10 ) &&( nota2 >= 0 && nota2 <= 10 )){
            printf("Entrada correta\n");
            media = (nota1 + nota2) / 2;
            printf("A media é [%.2f]\n", media);
        } else{
            printf("Valor inválido!\n");
        }
        break;

        case 2:
        printf("Determinar Status\n");
        printf("Informe a sua Média:\n");
        scanf("%f", &media);
        //media >= 5 ? printf("Aprovado!\n") : printf("Reprovado!\n");
        if(media >= 7){
            printf("Aprovado!\n");
        } else if(media >= 5){
            printf("Recuperação!\n");
        } else{
            printf("Reprovado!\n");
        }
        break;

        case 3:
        printf("Sair do programa\n");
        break;
        default:
        printf("Opção invãlida!\n");
        break;
    }









}