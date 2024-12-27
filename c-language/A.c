/*#include<stdio.h>
int main() {
	int x = 100;
	 x = 200;
		printf("%d\n", x);
		char name[] = "홍길동";
		char oddr[] = "서울시";
		printf("%s\n", name);
		printf("%s\n", oddr);
		int age = 20;
		printf("%d\n", age + 10);


	
	return 0;

}
		최소값
#include<stdio.h>
#include<limits.h> 
int main()
{
	char num1 = CHAR_MIN;
	short num2 = SHRT_MIN;
	int num3 = INT_MIN;
	long num4 = LONG_MIN;
	long long num5 = LLONG_MIN;
	printf("%d %d %d %1d %11d\n", num1, num2, num3, num4, num5);
	return 0;
}

#include <stdio.h>
int main()
{
	float num1 = 0.1f;
	double num2 = 3867.215820;
	long double num3 = 9.327513l;
	printf("%f %f %lf\n", num1, num2, num3);
	return 0;

}
*/

#include <stdio.h>
int main()
{
	char c1 = 'a';
	char c2 = 'b';
	printf("%c, %d\n" , c1, c1);
	printf("%c, %d\n" , c2, c2);
	
	return 0;

}