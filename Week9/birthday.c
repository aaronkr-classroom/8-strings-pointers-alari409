//birthday.c
#include <stdio.h>
int main(void)
{
	short birthday; 
	short* ptr;// 포인터 변수 선언
	ptr = &birthday; //birthday 변수의 주소를 ptr 변수에 대입

	//변수 정의 
	int intVar = 42; 
	float floatVar = 3.141592;
	char charVar = 'A';
	double doubleVar = 9.81; 

	//포인터 정의
	int* intPtr = &intVar;
	float* floatPtr = &floatVar;
	char* charPtr = &charVar;
	double* doublePtr = &doubleVar;

	//%p 서식은 메모리 주소를 16진수 형식으로 출력함
	printf("birthday 변수의 주소는 %p 입니다. \n", ptr);

	// 변수 값과 주소를 출력함
	printf("   intVar 변수 값: %d, \t주소: %p\n", *intPtr, intPtr);
	printf(" floatVar 변수 값: %.5f, \t주소: %p\n", *floatPtr, floatPtr);
	printf("  charVar 변수 값: %c, \t주소: %p\n", *charPtr, charPtr);
	printf("doubleVar 변수 값: %,2f \t주소: %p\n", *doublePtr, doublePtr);


	return 0;
}