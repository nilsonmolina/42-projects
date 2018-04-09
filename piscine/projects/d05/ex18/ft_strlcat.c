unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int src_size;
	unsigned int dest_size;
	unsigned int index;

	while (src[src_size] != '\0')
		src_size++;
	while (dest[dest_size] != '\0')
		dest_size++;
	return (src_size + dest_size);
}
