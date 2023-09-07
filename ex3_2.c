//- ¼·¾¾È­¾¾ ±³Àç ¿¹Á¦
//getchar()´ë½Å %*c¸¦ ½èÀ»¶§
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double convert_celsiu_fahrenheit(double x);
double convert_fahrenheit_celsiu(double y);

double convert_celsiu_fahrenheit(double x){
	double h;
	h = 9.0 / 5.0 * x + 32;
	return h;
}

double convert_fahrenheit_celsiu(double y){
	double s;
	s = (y - 32.0) * 5.0 / 9.0;
	return s;
}

int main(void) {
	char command;
	double fahrenheit;
	double celsius;

	while (1) { //¹«ÇÑ¹Ýº¹·çÆ®  wihle(1)
		printf("=====================================\n");
		printf("'c' ¼·¾¾¿Âµµ¿¡¼­ È­¾¾ ¿Âµµ·Î º¯È¯\n");
		printf("'f' È­¾¾¿Âµµ¿¡¼­ ¼·¾¾ ¿Âµµ·Î º¯È¯\n");
		printf("'q' Á¾·á\n");
		printf("=====================================\n");
		printf("¸Þ´º¿¡¼­ ¼±ÅÃÇÏ¼¼¿ä: ");
		scanf("%c%*c", &command);

		if (command == 'c') {
			printf("¼·¾¾¿Âµµ:");
			scanf("%lf%*c", &celsius);
			fahrenheit = convert_celsiu_fahrenheit(celsius);
			printf("È­¾¾¿Âµµ:%lf\n", fahrenheit);
		}
		else if (command == 'f') {
			printf("È­¾¾¿Âµµ:");
			scanf("%lf%*c", &fahrenheit);
			celsius = convert_fahrenheit_celsiu(fahrenheit);
			printf("¼·¾¾¿Âµµ:%lf\n", celsius);
		}
		else if (command == 'q') {
			break;
		}
		else {
			printf("´Ù½Ã ÀÔ·ÂÇÏ¼¼¿ä.\n");
		}

	}
	return 0;
}
