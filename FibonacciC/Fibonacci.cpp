#include<stdio.h>
#include<time.h>

void main(void){
	long numero, resultado;
	clock_t start = clock();
	printf("Indiqueme una posicion para calcular el resultado: \n");
	scanf_s("%d", &numero);
	resultado = fibonacci(numero);
	//printf("El resultado para %d es %d\n", numero, resultado);
	printf("El resultado para %d es %d, y el tiempo transcurrido es de %f milisegundos\n", numero, resultado, ((double)clock() - start) / CLOCKS_PER_SEC);
	scanf_s("%d", &numero); //esta linea esta puesta para que no se cierre la consola
}

long fibonacci(long n){
	long res = 0;
	if (n < 0){
		printf("El numero indicado no es valido\n");
	}
	else if (n == 0 || n == 1){
		res = 1;
	}
	else{
		res = fibonacci(n - 1) + fibonacci(n - 2);
	}
	return res;
}

/*int main(int argc, char *argv[])
{
	clock_t start = clock();
	/* Aquí el Código */
	/*printf("Tiempo transcurrido: %f", ((double)clock() - start) / CLOCKS_PER_SEC);

		return 0;
}*/