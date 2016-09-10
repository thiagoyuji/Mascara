#include <stdio.h>
#include <stdlib.h>
#include "maskcpf.h"

char *get_cpf () {

	int i,n = 0,k = 3,c = 0;
	
	do {
		for (i = n; i < k; i++){
			cpf[i] = getch();
			printf ("%c", cpf[i]);
		}
		
		n = k + 1;
		if (c == 0){
			cpf[3] = '.';
			printf ("%c", cpf[3]);
			k += 4;
		}else if (c == 1){
			cpf[7] = '.';
			printf ("%c", cpf[7]);
			k += 4;
		}else if (c == 2){
			cpf[11] = '-';
			printf ("%c", cpf[11]);
			k += 3;
		}
		c++;
	}while (c < 4);	
	
	return cpf;
	
}
