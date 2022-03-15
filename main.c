#include <stdio.h>
#include <conio.h>

int main(void)
{
    printf("*************** TABELA IMC ***************");
    printf("\n");
    printf("****** DESENVOLVIDO POR PEDRO PARRO ******");
    printf("\n");
    printf("\n");

    float imc, alt, peso;

    printf("Digite seu Peso: ");
    scanf("%f",&peso);
    printf("\n");
    
    printf("Digite sua Altura: ");
    scanf("%f",&alt);
    printf("\n");
    
    //formula
    imc = peso / (alt * alt);

    printf("*************** RESULTADO ****************");
    printf("\n");
    printf("\n");
    printf("Seu IMC é: %.2f",imc);
    printf("\n");
    //if
    if(imc <= 18.50){
        printf("Peso muito baixo");
    }if(imc >= 18.51 && imc <= 25){
        printf("Peso normal");
    }if(imc >= 25.01 && imc <= 29.99){
        printf("SobrePeso (cuidado)");
    }if(imc >= 30 && imc <= 34.99){
        printf("Obesidade (Grau 1)");
    }if(imc >= 35 && imc <= 39.99){
        printf("Obesidade (Grau 2)");
    }if(imc >= 40){
        printf("Obesidade (Mórbida)");
    }
    getch();
    return 0;
}
