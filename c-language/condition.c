#include<stdio.h>
int condtion1(){
	int a = 7;
	if (a > 5) {
		printf("5보다 큽니다.");
	}
	else {
		printf("5보다 작습니다.");
	}

	if (a > 10) {
		printf("10보다 큽니다.");
	}
	else {
		printf("10보다 작습니다.");
	}

	return 0;
}




int condtion2() {
	int a = 12;
	if (a > 10) {
		printf("10보다 크다");
	}
	else if (a > 5) {
		printf("5보다 크다");
	}
	else {
		printf("5보다 작다");
	}
}
int con3() {
	int a;
	printf("점수");
	scanf_s("%d", &a);
	if (a >= 90) {
		printf("A");
	}
	else if (a >= 80) {
		printf("b");
	}
	else if (a >= 70) {
		printf("c");
	}
	else if (a >= 60) {
		printf("d");
	}
	else  {
		printf("F");
	}
}








