#include <stdio.h>
#include <stdlib.h>
#include "maskcpf.c"
#include "maskrg.c"

int main (){

	printf ("Digite o Seu CPF: ");
	char *cpf = get_cpf();
	printf ("\nDigite o RG: ");
	char *rg = get_rg();
	
	printf ("\n\nCPF >>> %s\n", cpf);
	printf ("RG >>> %s\n\n", rg);

	return 0;
}


 
