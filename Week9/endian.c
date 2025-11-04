//endian.c
#include <stdio.h>

void check_endian()
{
	//첫 메모리 주소가 0x12이면 빅 엔디언이고
	//0x78이면 리틀 엔리언

	unsigned int num = 0x13245678; // 16진법 (4바이트)
	unsigned char* byte_ptr = (unsigned char*)&num;

	//모든 바이트 주소와 값을 출력하기
	for (int i = 0; i < sizeof(num); i++)
	{
		printf("%p   0x%02x\n", (byte_ptr + i), byte_ptr[i]);
	}

	//첫 바이트 주소를 확인하고 엔디언니스 출력하기
	if (byte_ptr[0] == 0x12)
	{
		printf("\nThis is BIG-endian!");
	}
	else if (byte_ptr[0] == 0x78)
	{
		printf("\n This is little endian!..");
	}
	else
	{
		printf("\nunknown endian!..");
	}
}

int main(void)
{
	check_endian();
	return 0;
}