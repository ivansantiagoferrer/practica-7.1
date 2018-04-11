/* Este codigo ha sido generado por el modulo psexport 20180125-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	float pc1;
	float pc2;
	float pc3;
	float pc4;
	float pcmeno;
	float pcmenor;
	float promedio;
	printf("la primera calificacion es\n");
	scanf("%f",&pc1);
	printf("la segunda calificacion es\n");
	scanf("%f",&pc2);
	printf("la tercera calificacion es \n");
	scanf("%f",&pc3);
	printf("la cuarta calificacion es\n");
	scanf("%f",&pc4);
	pcmenor = pc1;
	promedio = (pc1+pc2+pc3+pc4-pcmenor)/3;
	if (pc2<pcmenor) {
		pcmenor = pc2;
	} else {
		if (pc3<pcmenor) {
			pcmenor = pc3;
		} else {
			pcmeno = pc4;
		}
	}
	printf("el promedio de las practicas es%f\n",promedio);
	return 0;
}

