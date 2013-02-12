#include <math.h>
#include <stdio.h>

using namespace std;

int main (void)
{
	int opc, n1, n2, salir=0, r;
	float nm1, nm2, R;

	do

	{
		printf("***MENU***\n");
		printf("1.-SUMA DE 2 NUMEROS\n)");
		printf("2.-RESTA DE 2 NUMEROS\n)");
		printf("3.-MULTIPLICACION DE 2 NUMEROS\n)");
		printf("4.-DIVISION DE 2 NUMEROS\n)");
		printf("5.-MODULO DE 2 NUMEROS\n)");
		printf("6.-AREA DE UN CIRCULO\n");
		printf("7.-PERIMETRO DE UN CIRCULO\n");
		printf("8.-AREA DE UN CUADRADO\n");
		printf("9.-PERIMETRO DE UN CUADRADO\n");
		printf("10.-SALIR\n");
		printf("*****ELIJA UNA OPCION************\n");
		scanf("%d", &opc);

		switch (opc)
		{
		case 1:
			printf("SUMA\n");
			printf("INGRESE UN NUMERO\n");
			scanf("%f", &nm1);
			printf("INGRESE UN NUMERO\n");
			scanf("%f", &nm2);
			R=nm1+nm2;
			printf("LA SUMA ES: %.2f\n", R);
			break;
		case 2:
			printf("RESTA\n");
			printf("INGRESE UN NUMERO\n");
			scanf("%f", &nm1);
			printf("INGRESE UN NUMERO\n");
			scanf("%f", &nm2);
			if (nm1>nm2)
			{
				R=nm1-nm2;
				printf("LA RESTA ES: %.2f\n", R);
			}
			else
			{
				R=nm2-nm1;
				printf("LA RESTA ES: %.2f\n", R);

			}
			break;
		case 3:
			printf("MULTIPLICACION\n");
			printf("INGRESE UN NUMERO\n");
			scanf("%f", &nm1);
			printf("INGRESE UN NUMERO\n");
			scanf("%f", &nm2);
			R=nm1*nm2;
			printf("LA MULTIPLICAION ES: %.2f\n", R);
			break;
		case 4:
			printf("DIVISION\n");
			printf("INGRESE UN NUMERO\n");
			scanf("%f", &nm1);
			printf("INGRESE UN NUMERO\n");
			scanf("%f", &nm2);
			if (nm1==0 or nm2==0)
			{
				printf("ERROR: NO DIVIDE EL CERO\n");
			} else
			{
				if (nm1>nm2)
				{
					R=nm1/nm2;
					printf("LA DIVISION ES: %.2f\n", R);
				}
				else
				{
					R=nm2/nm1;
					printf("LA DIVISION ES: %.2f\n", R);
				}
			}
			break;
		case 5:
			printf("MODULO\n");
			printf("INGRESE UN NUMERO\n");
			scanf("%d", &n1);
			printf("INGRESE UN NUMERO\n");
			scanf("%d", &n2);
			if (n1==0 or n2==0)
			{
				printf("ERROR: NO MODULO DEL CERO\n");
			} else
				{
					if (n1>n2)
					{
						r=n1%n2;
						printf("LA MODULO ES: %d\n", r);
					}
					else
						{
							r=n2%n1;
							printf("LA MODULO ES: %d\n", r);
						}
				}
			break;
		case 6:
			printf("AREA DEL CIRCULO\n");
			printf("INGRESE VALOR DEL RADIO\n");
			scanf("%f", &nm1);
			R=(nm1*nm1)*3.1416;
			printf("EL EREA ES: %.2f\n", R);
			break;
		case 7:
			printf("PERIMETRO DE UN CIRCULO\n");
			printf("INGRESE VALOR DEL DIAMETRO\n");
			scanf("%f", &nm1);
			R=nm1*3.1416;
			printf("EL PERIMETRO ES: %.2f", R);
			break;
		case 8:
			printf("AREA DEL CUADRADO\n");
			printf("INGRESE VALOR DE UN LADO\n");
			scanf("%f", &nm1);
			R=nm1*nm1;
			printf("EL EREA ES: %.2f\n", R);
			break;
		case 9:
			printf("PERIMETRO DEL CUADRADO\n");
			printf("INGRESE VALOR DE  UN LADO\n");
			scanf("%f", &nm1);
			R=nm1*4;
			printf("EL PERIMETRO ES: %.2f", R);
			break;
		case 10:
			printf("*******SALIR**************");
			salir=1;
			break;
		default:
			printf("***OPCION INVALIDA: INGRESE DEL 1 AL 10***");
		};



	} while (salir==0);
}
