/**
 *reverse_array - utility function
 *@a: integer pointer
 *@n: integer parameter
 *Return: No return value
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	n--;
	for (i = 0; i < n; i++, n--)
	{
		temp = *(a + i);
		a[i] = a[n];
		a[n] = temp;
	}
}
