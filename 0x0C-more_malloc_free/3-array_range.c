#include <stdlib.h>

#define start 1

/**
 *count - counts the number of values in a range
 *@min: the minimum value in a range
 *@max: the max value in a range
 *@c: should always be 1
 *Return: the count as an integer
*/
int count(int min, int max, int c)
{
	if (min == max)
		return (c);
	return (count(++min, max, ++c));
}

/**
 *fill_array - fill the array with the range of values from min to max
 *@array: the integer array to be filled
 *@len: the size of the array as an integer
 *@min: the minimum number as an integer
 *@max: the maximum number as an integer
 *Return: an array of integers populated with values from min - max
*/
int fill_array(int *array, int len, int min, int max)
{
	if (min > max)
		return (0);
	*array = min++;
	array++;
	return (fill_array(array, len, min, max));
}

/**
 *array_range - creates an array containing a range of numbers
 *@min: the minimum number as an integer
 *@max: the maximum number as an integer
 *Return: an array containg all numbers in specified range
*/
int *array_range(int min, int max)
{
	int len, *ptr;

	if (min > max)
		return (NULL);

	len = count(min, max, start);

	ptr = (int *) malloc(len * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	fill_array(ptr, len, min, max);

	return (ptr);
}
