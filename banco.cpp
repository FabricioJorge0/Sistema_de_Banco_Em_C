#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 /* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int opcao;
	float valor;
	float saldo = 0;
	
	do {
	
		printf("Digite o servico desejado: \n\n");
		
		printf("Deposito press 1 \n");
		printf("Saque press 2 \n");
		printf("Saldo press 3 \n");
		printf("Sair press 4 \n");
		scanf("%d",&opcao);
		
		switch(opcao){
			case 1:
				printf("\n Digite o valor para Deposito: \n");
				scanf("%f",&valor);
				saldo = saldo + valor;
				printf("Deposito efetuado com sucesso!!!\n\n");
				break;
			case 2:
				printf("Digite o valor para saque: \n");
				scanf("%f",&valor);
				if(saldo >= valor){
					printf("Saque efetuado com sucesso! \n");
					saldo = saldo - valor;
					
				}else{
					printf("Saldo insuficiente!! \n");
				};
				break;
			case 3:
				printf("O seu saldo e: %.2f \n\n", saldo);
				break;
			case 4:
				printf("Saindo... \n");
				break;
			defaut:
				printf("opcao invalida \n ");
		};
		
    }while (opcao);
	
	

	return 0;

}
