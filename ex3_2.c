//- ����ȭ�� ���� ����
//getchar()��� %*c�� ������
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

	while (1) { //���ѹݺ���Ʈ  wihle(1)
		printf("=====================================\n");
		printf("'c' �����µ����� ȭ�� �µ��� ��ȯ\n");
		printf("'f' ȭ���µ����� ���� �µ��� ��ȯ\n");
		printf("'q' ����\n");
		printf("=====================================\n");
		printf("�޴����� �����ϼ���: ");
		scanf("%c%*c", &command);

		if (command == 'c') {
			printf("�����µ�:");
			scanf("%lf%*c", &celsius);
			fahrenheit = convert_celsiu_fahrenheit(celsius);
			printf("ȭ���µ�:%lf\n", fahrenheit);
		}
		else if (command == 'f') {
			printf("ȭ���µ�:");
			scanf("%lf%*c", &fahrenheit);
			celsius = convert_fahrenheit_celsiu(fahrenheit);
			printf("�����µ�:%lf\n", celsius);
		}
		else if (command == 'q') {
			break;
		}
		else {
			printf("�ٽ� �Է��ϼ���.\n");
		}

	}
	return 0;
}
