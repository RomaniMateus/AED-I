#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int menu() 
{
  int resposta;

  resposta = 0;

  //while loop que printa na tela o menu inicial sempre que as funções forem finalizadas
  while (resposta != 5) 
  {
    printf("***MENU***\n\nEscolha uma opção:\n\n");
    printf("(1) Inserir novos polinomios\n");
    printf("(2) Somar polinomios\n");
    printf("(3) Subtrair polinomios\n");
    printf("(4) Derivar um polinomio\n");
    printf("(5) Sair\n");
    scanf("%d", & resposta);

    //switch usado para que cada opção digitada pelo usuário acesse uma determinada função:
    switch (resposta) 
    {
        case 1:
            cadastroVeiculo();
            break;

        case 2:
            alterar();
            break;

        case 3:
            mostrar();
            break;

        case 4:
            apagar();
            break;

        case 5:
            printf("Programa finalizado!");
            break;

        default:
            printf("Opção inválida, tente novamente\n\n");
    }
  }

  return 0;
}