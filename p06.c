﻿#include <stdio.h>
#include <stdlib.h>

int cubeByvalue(int n);

int main()
{
	int number = 5;
	printf("The original value of number is %d", number);
	number = cubeByvalue(number);
	printf("\nThe new value of number is %d\n", number);
}

int cubeByvalue(int n)
{
	return n * n * n;
}