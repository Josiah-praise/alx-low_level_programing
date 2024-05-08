/**
 * get_endianness - check the endianness of a machine
 * Return: 1 (Little endian) or 0(Big endian)
 */
int get_endianness(void)
{
	unsigned int num = 1;

	char *byte = (char *) &num;

	if (*byte == 1)
		return (1);/*Little endian*/
	return (0);/*Big endian*/
}
