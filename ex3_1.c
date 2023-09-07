
//getchar()를 썼을때
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double convert_celsiu_to_fahrenheit(double celsiu); //섭씨->화씨 변환 함수 선언
double convert_fahrenheit_to_celsiu(double fahrenheit); //화씨->섭씨 변환 함수 선언

double convert_celsiu_to_fahrenheit(double celsiu) { //섭씨 -> 화씨 변환 함수 정의
	double h; //결과값 h변수 선언
	h = 9.0 / 5.0 * celsiu + 32; //변환식
	return h; //결과값 반환
}

double convert_fahrenheit_to_celsiu(double fahrenheit) {
	double s;
	s = (fahrenheit - 32.0) * 5.0 / 9.0;
	return s;
}

int main(void) { //메인함수 정의
	char command; //문자 선택 변수 선언
	double fahrenheit; //화씨온도 변수
	double celsius; //섭씨온도 변수

	while (1) { //무한반복루트  wihle(1)
		printf("=====================================\n");
		printf("'c' 섭씨온도에서 화씨 온도로 변환\n");
		printf("'f' 화씨온도에서 섭씨 온도로 변환\n");
		printf("'q' 종료\n");
		printf("=====================================\n");
		printf("메뉴에서 선택하세요: ");
		command = getchar(); //문자선택 getchar()함수로 받기

		if (command == 'c') { //c가 입력됬을때
			printf("섭씨온도:");
			scanf("%lf", &celsius);
			getchar(); //개행문자 제거
			fahrenheit = convert_celsiu_to_fahrenheit(celsius); //함수 호출
			printf("화씨온도:%lf\n", fahrenheit);
		}
		else if (command == 'f') {
			printf("화씨온도:");
			scanf("%lf", &fahrenheit);
			getchar();
			celsius = convert_fahrenheit_to_celsiu(fahrenheit);
			printf("섭씨온도:%lf\n", celsius);
		}
		else if (command == 'q') {
			break; //종료, while문 탈출
		}
		else {
			getchar();
			printf("다시 입력하세요.\n"); //c,f,q 어느것도 입력되지않았을때 다시 입력 문자출력
		}

	}
	return 0;
}

