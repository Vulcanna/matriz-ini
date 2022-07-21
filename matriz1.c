#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	system("color A");
	setlocale(LC_ALL,"Portuguese");
	int matriz[3][4];
	int l, c;	
	//Entrada de dados
	printf("*** Digite os valores da matriz ***\n");
	for(l=0; l<3; l++){
		printf("** Linha %i **\n",l);
		for(c=0; c<4; c++){
			printf("matriz[%i][%i]: ",l,c);
			scanf("%i",&matriz[l][c]);
		}
	}
	
	//Saída de dados
	printf("\n*** Exibição dos dados da matriz ***\n");
	for(l=0; l<3; l++){
		printf("** Linha %i **\n",l);
		for(c=0; c<4; c++){
			printf("matriz[%i][%i] = %i\n",l,c,matriz[l][c]);
		}
	}
	
	
	
	system("pause");
	return 0;
}

