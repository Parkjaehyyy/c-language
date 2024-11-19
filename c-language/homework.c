/*
#include<stdio.h>
//int main() {
//	int a = 10, b = 50, c = 70;
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
}

int main(){
	int number = 1;
		printf("%d\n",number++); // 1 (후위 증가 ) //printf("%d\n", number); > 2 (위에 후위 증가이기때문에 number는 2으로 출력)
		printf("%d\n", ++number);  // 3 ( 위 문법에서 number이 2에서 시작하고 전위 ++ 이기 때문에 출력을하게되면 3으로 출력)
		printf("%d\n", number--); // 3 ( 2번째 문법에서 3으로 시작하고 후위 감소이기 때문에 출력시 3으로 출력)
		printf("%d\n", --number); // 1 ( 위 문법에서 후위 감소이기 때문에 2가되었고 현재 문법에서 -- 전위감소가 나오기때문에 1으로 출력)
		printf("%d\n", ++number); // 2 (전 문법에서 1로 출력이되고 ++ 전위 증가이기 때문에 2로 출력)
		printf("%d\n", number);  // 2 (현재 문법에서는 증가와 감소가 없기 때문에 2로 출력)
		printf("%d\n", --number); // 1 ( 위 문법에서 -- 전위 감소이기 때문에 1로 출력)
		printf("%d\n", ++number); // 2 ( 위 문법에서 1로 출력이 되었기문에 ++전위 증가 2로 출력 )



* github란 형상관리툴 / 버전관리툴
* clone : git에 올라온 파일을 다운받는 행위
* commit : 내가 수정한 파일을 관리툴에 올리는 행위
* push : 수정한 파일을 관리툴에 올리는 행위
* pull : 수정한 파일을 타인이 받아 수정하는 행위
* 문자 수식 :  char
* 숫자 있다 : 정수와 실수 
* 정수 : short , int , long 이있고 각각 ( 2 . 4 . 8 비틀사용)
* 실수 : float, double
* 논리형이있다 
*/



// 2개의 정수를 입력받아서 
// 해당 좌표가 몇 사분면이지 출력해주세요
// 
/*
if () {

}
if () {

}
if () {

}
if () {

}
*/