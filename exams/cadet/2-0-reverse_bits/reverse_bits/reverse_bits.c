unsigned char	reverse_bits(unsigned char octet)
{
	return ((octet * 16) + (octet / 16));
}
