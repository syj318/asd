//-���� ���� / �ѷ� ��� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�Լ� ����
double area(double r); //(double r)�� �Ű�����:�Լ� ȣ�� �� ���޵Ǵ� �μ��� ���� ������ ����
double cir(double r);

//�Ű������� �μ��� ����
//�Ű�����:�Լ��� ������ �� ���Ǵ� ����
//�μ�:������ �Լ��� ȣ��� �� �ѱ�� ������

//area �Լ� ����
double area(double r) {
	double m; //���� ������� ���� ����m ����
	m = 3.14 * r * r; //���� ����
	return m; //���� ������� ��ȯ
}

//cir �Լ� ����
double cir(double r) {
	double d; //�ѷ� ������� ���� ����d ����
	d = 2 * 3.14 * r; //�ѷ� ����
	return d; //�ѷ� ������� ��ȯ
}

//main�Լ� ����
int main(void) {
	double radius;
	printf("���� ������ �Է�: ");
	scanf("%lf", &radius);

	printf("������ %.2lf�� ���� ����:%.3lf\n", radius, area(radius)); //area()�Լ� ȣ��
	printf("������ %.2lf�� ���� �ѷ�:%.3lf\n", radius, cir(radius)); //cir() �Լ� ȣ��

	return 0;
}

