#include <stdlib.h>
#include <stdio.h>
#include "Maximum.h"

#include <vector>
using namespace std;

int main(int numberOfArguments, char *arguments[])
{
	typedef int type;
	const int size = 5000;

	type *array1 = new type[size];
	vector<type> array2;
	for (int i = 0; i < size; ++i)
	{
		type temp = rand();
		array1[i] = temp;
		array2.push_back(temp);
	}

	type result1 = MaximumInArray<type[], type>(array1, size);
	type result2 = MaximumInArray<vector<type>, type>(array2, size);
	
	if (result1 == result2)
	{
		printf("They are the same with the value: %d\n", result1);
	}
	else
	{
		printf("They are different\n");
		printf("result1: %d\n", result1);
		printf("result2: %d\n", result2);
	}

	return 0;
}