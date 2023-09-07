
//getchar()�� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double convert_celsiu_to_fahrenheit(double celsiu); //����->ȭ�� ��ȯ �Լ� ����
double convert_fahrenheit_to_celsiu(double fahrenheit); //ȭ��->���� ��ȯ �Լ� ����

double convert_celsiu_to_fahrenheit(double celsiu) { //���� -> ȭ�� ��ȯ �Լ� ����
	double h; //����� h���� ����
	h = 9.0 / 5.0 * celsiu + 32; //��ȯ��
	return h; //����� ��ȯ
}

double convert_fahrenheit_to_celsiu(double fahrenheit) {
	double s;
	s = (fahrenheit - 32.0) * 5.0 / 9.0;
	return s;
}

int main(void) { //�����Լ� ����
	char command; //���� ���� ���� ����
	double fahrenheit; //ȭ���µ� ����
	double celsius; //�����µ� ����

	while (1) { //���ѹݺ���Ʈ  wihle(1)
		printf("=====================================\n");
		printf("'c' �����µ����� ȭ�� �µ��� ��ȯ\n");
		printf("'f' ȭ���µ����� ���� �µ��� ��ȯ\n");
		printf("'q' ����\n");
		printf("=====================================\n");
		printf("�޴����� �����ϼ���: ");
		command = getchar(); //���ڼ��� getchar()�Լ��� �ޱ�

		if (command == 'c') { //c�� �Է�����
			printf("�����µ�:");
			scanf("%lf", &celsius);
			getchar(); //���๮�� ����
			fahrenheit = convert_celsiu_to_fahrenheit(celsius); //�Լ� ȣ��
			printf("ȭ���µ�:%lf\n", fahrenheit);
		}
		else if (command == 'f') {
			printf("ȭ���µ�:");
			scanf("%lf", &fahrenheit);
			getchar();
			celsius = convert_fahrenheit_to_celsiu(fahrenheit);
			printf("�����µ�:%lf\n", celsius);
		}
		else if (command == 'q') {
			break; //����, while�� Ż��
		}
		else {
			getchar();
			printf("�ٽ� �Է��ϼ���.\n"); //c,f,q ����͵� �Էµ����ʾ����� �ٽ� �Է� �������
		}

	}
	return 0;
}

