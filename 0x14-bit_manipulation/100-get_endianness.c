int get_endianness()
{
	unsigned int num = 1;

	char *byte = (char *) &num;

	if (*byte == 1)
		return (1);/*Little endian*/
	return (0);/*Big endian*/
}
