// #include<iostream>
#include <stdio.h>
#include <conio.h>
// using namespace std;

int main()
{
	int i, j, a[5], temp;
	printf("Enter the array:");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 1; i < 5; i++)
	{
		temp = a[i];
		j = i - 1;

		while (j >= 0 && a[j] > temp)
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = temp;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d, ", a[i]);
	}
}
