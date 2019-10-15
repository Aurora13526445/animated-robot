#include <string.h>
#include <stdio.h>
#include "sm3.h"
#include <iostream>

//#pragma comment(lib,"sm3dll2")
//extern "C" void SM3Call(const unsigned char *message,unsigned int messageLen, unsigned char digest[SM3_HASH_SIZE]);

int main(int argc, char* argv[])
{
	unsigned char input[256] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabcdefgh";
	int ilen = 72;
	unsigned char output[32];
	int i;
	// ctx;

	printf("Message:\n");
	printf("%s\n", input);

	SM3Calc(input, ilen, output);

	printf("Hash:\n   ");
	for (i = 0; i < 32; i++)
	{
		printf("%02x", output[i]);
		if (((i + 1) % 4) == 0) printf(" ");
	}

	printf("\n");
	system("pause");
}