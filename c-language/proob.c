/* #include<stdio.h>
//int main() {
	//int number;
	//int number1;
	// &number > number의 주소
// 1~ 100
//	// 10번지 20번지 30번 ...
	//scanf_s("%d %d", &number, &number1);
	//printf("%d", number + number1);
	//return 0;
//}

int main() {
	int number;
	printf("right now teen or not teen ");
	scanf_s("%d", &number);
	
// 조건 and 조건 && 
	if (!(number < 20 || 30 < number)) {
		printf("teen");
	}
	else {
		printf("not teen");
	}

	return 0;
}

int main() {
	int number;
	printf("I'M Park Jae Hyeon.\n");
	scanf_s("%d", &number);
	if (20 <= number && number < 30);
	printf("teen");
		printf("not teen");
	return 0;
}
*/