#include <stdio.h>


/**
	다차원 배열을 이해한다.
	다차원 배열의 초기화. 
*/


int main(){
	int ary[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	
	printf("다차원배열예제!!\n");
	for( int i = 0 ; i < 3 ; i++ ){
		for( int j = 0 ; j < 3 ; j++){
			printf("i = %d, j= %d, ary value = %d\n", i, j, ary[i][j]);
		}
	}
	
	return 0;
}


