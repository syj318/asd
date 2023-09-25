//-원의 넓이 / 둘레 계산 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//함수 선언
double area(double r); //(double r)은 매개변수:함수 호출 시 전달되는 인수의 값을 저장할 변수
double cir(double r);

//매개변수와 인수의 차이
//매개변수:함수를 정의할 때 사용되는 변수
//인수:실제로 함수가 호출될 때 넘기는 변수값

//area 함수 정의
double area(double r) {
	double m; //면적 결과값을 담을 변수m 선언
	m = 3.14 * r * r; //면적 연산
	return m; //면적 결과값을 반환
}

//cir 함수 정의
double cir(double r) {
	double d; //둘레 결과값을 담을 변수d 선언
	d = 2 * 3.14 * r; //둘레 연산
	return d; //둘레 결과값을 반환
}

//main함수 정의
int main(void) {
	double radius;
	printf("원의 반지름 입력: ");
	scanf("%lf", &radius);

	printf("반지름 %.2lf인 원의 면적:%.3lf\n", radius, area(radius)); //area()함수 호출
	printf("반지름 %.2lf인 원의 둘레:%.3lf\n", radius, cir(radius)); //cir() 함수 호출

	return 0;
}

