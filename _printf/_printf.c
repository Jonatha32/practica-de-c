#include "main.h"
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i, printed = 0;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 's':
					printed += print_string(va_arg(arg, char *));
					break;
				case 'c':
					printed += print_char(va_arg(arg, int));
					break;
				case 'd':
				case 'i':
					printed += print_number(va_arg(arg, int));
					break;
				case '%':
					printed += print_percent();
					break;
				default:
					write(1, "%", 1);
					write(1, &format[i], 1);
					printed += 2;
					break;
			}
		}
			else
			write(1, &format[i], 1);
			printed++;
	}
	va_end(arg);
	return (printed);
}
