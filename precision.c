include "main.h"

int get_precision(va_list u, flags_t *f)
{
	int precision = -1;
	if (f->precision >= 0)
	{
		precision = f->precision;
	}
	else
	{
		const char *p = f->start;
		while (*p)
		{
			if (*p == '.')
			{
				p++;
				if (*p == '*')
				{
					precision = va_arg(u, int);
					if (precision < 0)
					{
						precision = 0;
					}p++;
				}
				else
				{
				       	precision = 0;
					while (isdigit(*p))
					{
						precision = precision * 10 + (*p - '0');
						p++;
					}
				}
				break;
			}
			else if (is_conversion_specifier(*p))
			{
				break;
			}
			else
			{
				p++;
			}
		}
	}
	return (precision);
}
