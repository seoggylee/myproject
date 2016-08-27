#include <stdio.h> 


/**
	영어 알파벳을 배열로 저장하고
	저장된 알파벳을 출력해보자.
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
	printf("\n 알파벳 출력 완료");
	return 0;
}
