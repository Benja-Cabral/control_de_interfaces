#include <stdio.h>
#include "pico/stdlib.h"

/**
 * @brief Programa principal
*/
int main(void) {
	short numerouno, numerodos;
	char operaciones;
	float resultado; 
	// Inicializo el USB
    stdio_init_all();
	// Demora para esperar la conexion
	sleep_ms(4000);
	// Cuanto ocupa cada tipo de dato
	printf("Un char ocupa %d byte\n", sizeof(char));
	printf("Un short ocupa %d bytes\n", sizeof(short));
	printf("Un int ocupa %d bytes\n", sizeof(int));
	printf("Un long int ocupa %d bytes\n", sizeof(long int));
	printf("Un float ocupa %d bytes\n", sizeof(float));
	printf("Un double ocupa %d bytes\n", sizeof(double));

    while (true) {
	puts("el primer digito es");
	scanf ("%hd", &numerouno);
	fflush (stdin);
	puts("el segundo digito es");
	scanf ("%hd", &numerodos);
	fflush (stdin);
	puts("la operacion es");
	scanf ("%c", &operaciones);
	fflush (stdin);
	if (operaciones=='+'){
		resultado=numerouno+numerodos;
	}
	else if (operaciones=='-'){
		resultado=numerouno-numerodos;
	}
	else if (operaciones=='*'){
		resultado=numerouno*numerodos;

	}
	else if (operaciones=='/'){
		resultado=numerouno/numerodos;
	}
	puts("el resultado es");
	printf("%.2f\n", resultado);
    }
    return 0;
}