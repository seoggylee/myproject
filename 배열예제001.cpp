#include <stdio.h> 


/**
	���� ���ĺ��� �迭�� �����ϰ�
	����� ���ĺ��� ����غ���.
*/


int main(){
	char alphabet[26];
	char ch; 
	
	for( int i = 0, ch = 'A' ; i < 26 ; i++, ch++){
		alphabet[i] = ch;
	}
	
	for( int i = 0 ; i < 26 ; i++ ){
		printf("%c", alphabet[i]);
	}
	printf("\n ���ĺ� ��� �Ϸ�");
	return 0;
}
