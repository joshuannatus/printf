int print_int(va_list args, flags_t *flags)
{
	int num;
	if (flags->length == LENGTH_NONE)
	{
		num = va_arg(args, int);
	}
	else if (flags->length == LENGTH_SHORT)
	{
		num = (short)va_arg(args, int);
	}
	else
	{
		num = va_arg(args, long);
	}
	return (count);
}

int print_unsigned(va_list args, flags_t *flags)
{
	unsigned int num;
	if (flags->length == LENGTH_NONE)
	{
		num = va_arg(args, unsigned int);
	}
	else if (flags->length == LENGTH_SHORT)
	{
		num = (unsigned short)va_arg(args, unsigned int);
	}
	else
	{
		num = va_arg(args, unsigned long);
	}
	return (count);
}

int print_octal(va_list args, flags_t *flags)
{
	unsigned int num;
	if (flags->length == LENGTH_NONE)
	{
		num = va_arg(args, unsigned int);
	}
	else if (flags->length == LENGTH_SHORT)
	{
		num = (unsigned short)va_arg(args, unsigned int);
	}
	else
	{
		num = va_arg(args, unsigned long);
	}
	return (count);
}

int print_hex(va_list args, flags_t *flags)
{
	unsigned int num;
	if (flags->length == LENGTH_NONE)
	{
		num = va_arg(args, unsigned int);
	}
	else if (flags->length == LENGTH_SHORT)
	{
		num = (unsigned short)va_arg(args, unsigned int);
	}
	else
	{
		num = va_arg(args, unsigned long);
	}

	return (count);
}

int print_hex_big(va_list args, flags_t *flags)
{
	unsigned int num;
	if (flags->length == LENGTH_NONE)
	{
		num = va_arg(args, unsigned int);
	}
	else if (flags->length == LENGTH_SHORT)
	{
		num = (unsigned short)va_arg(args, unsigned int);
	}
	else
	{
		num = va_arg(args, unsigned long);
	}
	return (count);
}
