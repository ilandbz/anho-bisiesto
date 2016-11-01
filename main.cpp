#include <iostream>
//maximo comun divisor
int main() {
	int n,m, r;
	printf("INGRESE DOS NUMEROS \n");
	printf("N : ");
	scanf("%i", &n);
	printf("M : ");
	scanf("%i", &m);
	r=n%m;
	if(r ==0){
		printf("EL MAXIMO COMUN DIVISOR ES : %i \n", m);
	}else{
		while(r>0){
			n=m;
			m=r;
			r=n%m;
		}
		printf("EL MAXIMO COMUN DIVISOR ES : %i \n", m);
	}
	int opcion;
	printf("DESEA CONTINUAR SI(0) NO(1) : ");
	scanf("%i", &opcion);
	if(opcion==0){
		main();
	}
	return 0;
}
