#include <stdio.h>
int main(){
	//matriz1
	int matriz1n1; int matriz1n2; int matriz1n3; int matriz1n4;
	printf("digite os numeros da matriz 1 a cada numero de enter:\n");
	printf("Ela esta desse jeito:\n");
	printf("x,x\nx,x\n");
	scanf("%d", &matriz1n1); scanf("%d", &matriz1n2); scanf("%d", &matriz1n3); scanf("%d", &matriz1n4);
	printf("%d", matriz1n1); printf("%d\n", matriz1n2); printf("%d", matriz1n3); printf("%d\n", matriz1n4);
	//matriz2
	int matriz2n1; int matriz2n2; int matriz2n3; int matriz2n4;
	printf("digite os numeros da matriz 2 a cada numero de enter:\n");
	printf("Ela esta desse jeito:\n");
	printf("x,x\nx,x\n");
	scanf("%d", &matriz2n1); scanf("%d", &matriz2n2); scanf("%d", &matriz2n3); scanf("%d", &matriz2n4);
	printf("%d", matriz2n1); printf("%d\n", matriz2n2); printf("%d", matriz2n3); printf("%d\n", matriz2n4);
	//calculos das matrizes
	int conta;
	printf("o que voce deseja fazer com as duas matrizes 1-somar");
	scanf("%d", &conta);
	if (conta = 1){
		int contan1 = matriz1n1 + matriz2n1;
		int contan2 = matriz1n2 + matriz2n2;
		int contan3 = matriz1n3 + matriz2n3;
		int contan4 = matriz1n4 + matriz2n4;
		printf("%d", contan1); printf("%d\n", contan2); printf("%d", contan3); printf("%d\n", contan4);
		printf("a conta feita foi o primeiro numero da matriz 1 + primeiro numero da matriz 2 etc:");
		
	} else{
		printf("ERRO:");
	}
}#include <stdio.h>
int main(){
	//matriz1
	int matriz1n1; int matriz1n2; int matriz1n3; int matriz1n4;
	printf("digite os numeros da matriz 1 a cada numero de enter:\n");
	printf("Ela esta desse jeito:\n");
	printf("x,x\nx,x\n");
	scanf("%d", &matriz1n1); scanf("%d", &matriz1n2); scanf("%d", &matriz1n3); scanf("%d", &matriz1n4);
	printf("%d", matriz1n1); printf("%d\n", matriz1n2); printf("%d", matriz1n3); printf("%d\n", matriz1n4);
	//matriz2
	int matriz2n1; int matriz2n2; int matriz2n3; int matriz2n4;
	printf("digite os numeros da matriz 2 a cada numero de enter:\n");
	printf("Ela esta desse jeito:\n");
	printf("x,x\nx,x\n");
	scanf("%d", &matriz2n1); scanf("%d", &matriz2n2); scanf("%d", &matriz2n3); scanf("%d", &matriz2n4);
	printf("%d", matriz2n1); printf("%d\n", matriz2n2); printf("%d", matriz2n3); printf("%d\n", matriz2n4);
	//calculos das matrizes
	int conta;
	printf("o que voce deseja fazer com as duas matrizes 1-somar");
	scanf("%d", &conta);
	if (conta = 1){
		int contan1 = matriz1n1 + matriz2n1;
		int contan2 = matriz1n2 + matriz2n2;
		int contan3 = matriz1n3 + matriz2n3;
		int contan4 = matriz1n4 + matriz2n4;
		printf("%d", contan1); printf("%d\n", contan2); printf("%d", contan3); printf("%d\n", contan4);
		printf("a conta feita foi o primeiro numero da matriz 1 + primeiro numero da matriz 2 etc:");
		
	} else{
		printf("ERRO:");
	}
}