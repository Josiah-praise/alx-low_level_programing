/**
  *swap_int - helper function
  *@a: integer pointer
  *@b: integer pointer
  *Return: no return value
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
