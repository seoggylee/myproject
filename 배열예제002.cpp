#include <stdio.h>


/**
	sizeof 함수를 이용하여 배열의 크기와 갯수를 구해본다.
*/ 

int main(){
	int ary[] = {1, 2, 3,4, 5, 6, 7};
	
	
	printf("배열의 전체크기 = %d, 배열 한개의 크기 %d\n", sizeof(ary), sizeof(ary[0]));
	printf("배열의 갯수 = %d\n", sizeof(ary) / sizeof(ary[0]));
	printf("int 의 크기 = %d", sizeof(int));
	printf("long 의 크기 = %d", sizeof(long));
	printf("long long 의 크기 = %d", sizeof(long long));	
}
