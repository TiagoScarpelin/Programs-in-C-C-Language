#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float preco_escolha, total;
    char combo_escolha;
    int quant, cod, loopa, loope, num;
loopa, loope = 0;

    while (loopa != 5) {

        printf ("\n\n\t\t\t\tBem vindo!\n\tOs lanches que temos a disposição são: \n"
                "\n\tcod: 1 - Cachorro quente R$ 10,60 \n\tcod: 2 - X-Burguer R$ 15,00\n\tPor favor, digite o codigo correspondente: \n");
    scanf("%d", &cod);

     if(cod == 1)
    {
        preco_escolha = 10.60;
        break;
    }
        else if (cod == 2 ) {

            preco_escolha = 15.00;
            break;

        }
         else {
                loopa ++;
                printf("\nNumero inválido! Você tentou %d vezes do máximo de 5.", loopa);
                preco_escolha=0;
            }
    }

     if (loopa == 5) {
        printf("\nVocê atingiu o numero máximo de tentativas");
        loope = 5; }

        else{

     while (loope != 5) {

        printf("\nDeseja pedir um combo? Acompanha refrigerante e batata por mais R$ 4,00!\nDigite \"s\" para sim e \"n\" pra não. \n");
        scanf(" %c", &combo_escolha);

    if(combo_escolha == 's') {

            printf("\nVoce escolheu o combo do lanche selecionado!");
            preco_escolha = preco_escolha + 4.00;
            break;
        }
        else if(combo_escolha == 'n') {
            printf("\nNão para combo!");
            break;
            }
            else {
                loope ++;
                printf("\nLetra inválida! Você tentou %d vezes do máximo de 5.", loope);
            }
     }
     }

  if (loopa != 5 && loope != 5) {

    printf("\nPor favor, digite a quantidade: \n");
        scanf("%d", &quant);


  for (num=1; num <= quant; num++) /*esse "for" só existe pq o trabalho pede o uso do for, sei q há outros meios de fazer isso*/
    {

     total = total + preco_escolha;

    }

    printf("\nO total a pagar é de: %.2f \n", total);

  }

    else {
        printf("\n\tErro de entradas invalidas!");
    }


}



