//- ��Ƽ / ��ġ ��ȯ ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double convert_inch_to_cm(double cm); //convert_inch_to_cm �Լ� ����

double convert_inch_to_cm(double cm) { //convert_inch_to_cm �Լ� ����
	double inch; //����� ���� ���� inch ����
	inch = 2.54 * cm; //��ġ��ȯ ����
	return inch; //��ġ��ȯ ����� ��ȯ
}

int main(void) { //�����Լ� ����
	double cm; //�Ÿ� ���� x����

	printf("�Ÿ��� ��ġ�� �Է��ϼ���. -> ");
	scanf("%lf", &cm);

	printf("�Է��� %lf��ġ�� %lf��Ƽ�����̴�.", cm, convert_inch_to_cm(cm)); //convert_inch_to_cm()�Լ� ȣ��

	return 0;

}

