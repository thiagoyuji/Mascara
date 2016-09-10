#include <stdio.h>
#include <stdlib.h>
#include "maskrg.h"

char *get_rg () {
	
	int i,n = 0,k = 2,c = 0;
	
	do {
		for (i = n; i < k; i++){
			rg[i] = getch();
			printf ("%c", rg[i]);
		}
		
		n = k + 1;
		if (c == 0){
			rg[2] = '.';
			printf ("%c", rg[2]);
			k += 4;
		}else if (c == 1){
			rg[6] = '.';
			printf ("%c", rg[6]);
			k += 4;
		}else if (c == 2){
			rg[10] = '-';
			printf ("%c", rg[10]);
			k += 2;
		}
		c++;
	}while (c < 4);	
	
	return rg;
	
}
