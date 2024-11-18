//#include<stdio.h>
//int main() {
//	int a = 10, b = 50, c = 70;
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
//}

#include<stdio.h>
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



return 0 ;
}