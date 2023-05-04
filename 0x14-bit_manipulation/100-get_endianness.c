/**
 * get_endianness - checks if machine is big endian
 * or little endian
 * about this code:
 * If the machine is little endian, *dummy will be 1
 * (because last byte is stored first),
 * and if the machine is big endian, *dummy will be 0.
 *
 * Return: 1 if little endian, 0 otherwise
 */
int get_endianness(void)
{
	unsigned int dummy = 1;
	char *endianchecker = (char *)&dummy;
	/*If first byte value of dummy is non-zero*/
	/*then the machine is little-endian*/
	if (*endianchecker)
	{
		return (1);
	}
	return (0);
}
