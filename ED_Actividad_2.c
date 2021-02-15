#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int max=5;
	int i;
	
	int arreglo1[max];
	char arreglo2[max];
	float arreglo3[max];
	double arreglo4[max];
	
	int *ApArr1 = arreglo1;
	char *ApArr2 = arreglo2;
	float *ApArr3 = arreglo3;
	double *ApArr4 = arreglo4;
	
	printf("\nIngrese ENTEROS\n");
	for(i=0;i<max;i++){
		scanf("%d",&arreglo1[i]);
	}
	
	printf("\nIngrese CARACTERES\n");
	for(i=0;i<max;i++){
		scanf("%s",&arreglo2[i]);
	}
	
	printf("\nIngrese REALES SIMPLES\n");
	for(i=0;i<max;i++){
		scanf("%f",&arreglo3[i]);
	}
	
	printf("\nIngrese REALES DOBLES\n");
	for(i=0;i<max;i++){
		scanf("%lf",&arreglo4[i]);
	}
	
	printf("\nENTEROS");
	for(i=0;i<max;i++){
		printf("\n El elemento [%d] del arreglo de enteros tiene la direccion %d y su contenido es %d", i+1, ApArr1, *ApArr1);
		ApArr1++;
	}
	
	printf("\nCARACTERES");
	for(i=0;i<max;i++){
		printf("\n El elemento [%d] del arreglo de caracteres tiene la direccion %d y su contenido es %c", i+1, ApArr2, *ApArr2);
		ApArr2++;
	}
	
	printf("\nREALES SIMPLES");
	for(i=0;i<max;i++){
		printf("\n El elemento [%d] del arreglo de reales simples tiene la direccion %d y su contenido es %f", i+1, ApArr3, *ApArr3);
		ApArr3++;
	}
	
	printf("\nREALES DOBLES");
	for(i=0;i<max;i++){
		printf("\n El elemento [%d] del arreglo de reales dobles tiene la direccion %d y su contenido es %f", i+1, ApArr4, *ApArr4);
		ApArr4++;
	}
	return 0;
}

