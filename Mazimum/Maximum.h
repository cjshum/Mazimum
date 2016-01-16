#pragma once
/*
 Inputs:
   a: Numeric Type
   b: Numeric Type
 Returns:
   a if a is greater than b
   b if b is greater than a
*/
template <typename Type>
Type Maximum(Type a, Type b)
{
	if (a > b)
		return a;
	else
		return b;
}

/*
 Types:
   Container: array iterable container such as array and vectors
   Type: The type of object stored in the Container
 Input:
   array: array-like container
   size: the number of elements in the array
 Returns:
   The largest weighted item in the array
*/
template <typename Container, typename Type>
Type MaximumInArray(Container array, Type size)
{
	Type currentResult = array[0];

	for (int index = 1; index < size; index++)
	{
		currentResult = Maximum(currentResult, array[index]);
	}

	return currentResult;
}