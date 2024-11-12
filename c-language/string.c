#include<stdio.h>

int main() {
	// 사칙연산
	int a = 20; 
	int b = 10;
	//printf("%d + %d = %d\n", a, b, a+b);
	//printf("%d - %d = %d\n", a, b, a - b);
	//printf("%d / %d = %d\n", a, b, a / b);
	//printf("%d * %d = %d\n", a, b, a * b);
	//printf("%d %% %d = %d\n", a, b, a % b); // 나머지 연산


	// 대입연산
	//a = a + 10;
	//printf("%d \n", a);
	//a += 10;
	//printf("%d \n", a);
	//a -= 10; // a = a - 10;
	//printf("%d \n", a);
	//a *= 10; // a = a * 10;
	//printf("%d \n", a);
	//a %= 6; // a = a % 6;
	//printf("%d \n", a);
	
	
	// 증감연산
	a++; // a = a + 1;
	++a; // a = a + 1;

	a--; // a = a - 1;
	--a; // a = a - 1;

	int number = 0;
	//printf("%d \n", number++);
	//printf("%d \n", number);

	//printf("%d \n", ++number);

	printf("%d \n", number++); //  0
	printf("%d \n", --number); // 0
	printf("%d \n", ++number); // 1
	printf("%d \n", number--); // 0
	printf("%d \n", number); // 0
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}



// 숫자, 문자, 논리
// 숫자 - 실수 정수
// 문자 - 
// 문자에 대해 아는만큼
// 문자와 대입되는 숫자가 있다
// 아스키코드 128개 정도 묶어둠 -> 부족함
// 한글 몇개일까요?
// 유니코드 > 변천사 버전이있음
// utf-8 < 현재 인터넷 표준
// utf-8에도 버전이 있음

// 문자는 한글자이다
// 한글자에 해당하는 자료형? > char (character)
// 논리형 > 1, 0 한 비트 
// bool, boolean 불 불린 불리언

// 컴퓨터에서 자료를 저장하는 단위
// 1bit 한 비트 0, 1
// byte 바이트 > 8 bit

// 실수 정수
// 정수 0 1 2 3 딱 떨어지는 수
// short, int, long (2,4,8 바이트)
// 실수 3.14f
// float, double


