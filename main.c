#include <stdio.h>
#include <stdlib.h>
/* ARRAY DYMANIC
------------------
*/
void line();
void trattino();

int main() {
  int *array ;
  int d;

  printf("inserisci dimensione: ");
  scanf("%d", &d);

  array=(int *)malloc(sizeof(int)*d);
  
  printf("la tua dimensione e'': %d", d);
  line();
  trattino();
  
  
  getchar();
  system("pause");
  line();
  return 0;
}
		
void line(){
	printf("\n");
	
}

void trattino(){
	printf("------------------------------\n");
}
