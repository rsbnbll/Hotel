//1.�������1�ĸ��� ? (��д���ĸ�����)
#include<stdio.h>
#include<stdlib.h>
int NumberOf1(unsigned int n){
	int count=0;
	while (n != 0){
		if (n % 2 == 1){
			count++;
		}
		n = n / 2;
	}
	return count;
}
int NumberOf2(unsigned int n){
	int i = 0;
	int count = 0;
	for (i = 0; i < 31; ++i){
		if ((n & 1) != 0){
			count++;
		}
		n = n>>1;
	}
	return count;
}
int NumberOf3(unsigned int n){
	int count = 0;
	while (n != 0){
		if ((n & 1) != 0){
			count++;
		}
		n = n >> 1;
	}
	return count;
}
int NumberOf4(unsigned int n){
	int count = 0;
	while (n!=0){
		count++;
		n = n&(n - 1);
	}
	return count;
}
int main(){
	printf("%d\n", NumberOf1(10));
	printf("%d\n", NumberOf2(10));
	printf("%d\n", NumberOf3(10));
	printf("%d\n", NumberOf4(10));
	system("pause");
	return 0;
}
//�Ƚ��������Ĵ�С,����ʹ��for,if,>,<.
int Func(int a, int b){
	return (a - b) >> 31 ? -1 : (a - b ? 1 : 0);   //���ö��������ƽ�������ж�  
}                                                  //�� ����1; �� ����-1; ��� ����0
int main(){
	printf("%d\n", Func(5, 8));
	system("pause");
	return 0;
}
