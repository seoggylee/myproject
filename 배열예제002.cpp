#include <stdio.h>


/**
	sizeof �Լ��� �̿��Ͽ� �迭�� ũ��� ������ ���غ���.
*/ 

int main(){
	int ary[] = {1, 2, 3,4, 5, 6, 7};
	
	
	printf("�迭�� ��üũ�� = %d, �迭 �Ѱ��� ũ�� %d\n", sizeof(ary), sizeof(ary[0]));
	printf("�迭�� ���� = %d\n", sizeof(ary) / sizeof(ary[0]));
	printf("int �� ũ�� = %d", sizeof(int));
	printf("long �� ũ�� = %d", sizeof(long));
	printf("long long �� ũ�� = %d", sizeof(long long));	
}
