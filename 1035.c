#include <stdio.h>
#include <stdlib.h>
 
int main() {
    // Declarar as variaveis A B C e D
    int A, B, C, D;
    // Leitura das variaveis
    scanf("%d %d %d %d", &A, &B, &C, &D);
    // Teste de selecao requisitados
    if ((B>C) && (D>A) && ((C+D)>(A+B)) && (C>=0) && (D>=0) && (A%2==0)) {
		printf("Valores aceitos\n");
	} 
	else printf("Valores nao aceitos\n");   
   
    return 0;
}