#include <stdio.h>
#include <stdlib.h>
//Feito por um cabra manso

int main(int argc, char *argv[]) {
	
	
	float n1;
	printf("Digite o primeiro numero do calculo que deseja fazer: \n");
	scanf("%f", &n1);
	
	char op;
	printf("digite a operacao que deseja realizar no calculo: \n");
	scanf("%s", &op);
	
	float n2;
	printf("Digite o ultimo numero do calculo que deseja fazer: \n ");
	scanf("%f", &n2);
	
	if(op == '+'){
		float n3 = n1 + n2;
		printf("resultado: %.2f ", n3);
	}
	
	else if(op == '-'){
		float n3 = n1 - n2;
		printf("resultado: %.2f ", n3);
	} 
	
	else if(op == '*'){
		float n3 = n1 * n2;
		printf("resultado: %.2f ", n3);
	}
	
	else if(op == '/'){
		float n3 = n1 / n2;
		printf("resultado: %.2f ", n3);
	}
	
	else{
		printf("digite as informacoes corretamente");
	}
	return 0;
}


