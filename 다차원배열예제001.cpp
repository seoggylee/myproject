#include <stdio.h>


/**
	������ �迭�� �����Ѵ�.
	������ �迭�� �ʱ�ȭ. 
*/


int main(){
	int ary[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	
	printf("�������迭����!!\n");
	for( int i = 0 ; i < 3 ; i++ ){
		for( int j = 0 ; j < 3 ; j++){
			printf("i = %d, j= %d, ary value = %d\n", i, j, ary[i][j]);
		}
	}
	
	return 0;
}


