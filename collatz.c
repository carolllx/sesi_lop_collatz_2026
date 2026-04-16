#include <stdio.h>
void main(){
	
	int n, cont = 0;
	
	printf("Digite um  número inteiro positivo:\n");
	scanf("%d", &n);
	
	do{
	if (n % 2 == 0){
	n = n / 2;
	cont++;
	printf("%d", n);
	
	}else{
		n = n * 3 + 1;
		cont++;
		printf("%d", n);
}
			
	}while(n != 1);
	printf("Foi preciso %d passos para o final", cont);
	
	getch();
	
}