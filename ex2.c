//- 센티 / 인치 변환 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double convert_inch_to_cm(double cm); //convert_inch_to_cm 함수 선언

double convert_inch_to_cm(double cm) { //convert_inch_to_cm 함수 정의
	double inch; //결과값 담을 변수 inch 선언
	inch = 2.54 * cm; //인치변환 연산
	return inch; //인치변환 결과값 반환
}

int main(void) { //메인함수 정의
	double cm; //거리 변수 x선언

	printf("거리를 인치로 입력하세요. -> ");
	scanf("%lf", &cm);

	printf("입력한 %lf인치는 %lf센티미터이다.", cm, convert_inch_to_cm(cm)); //convert_inch_to_cm()함수 호출

	return 0;

}

