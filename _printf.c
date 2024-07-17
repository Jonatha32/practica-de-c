#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...) {
    va_list a;
    const char *ptr;
    int i = 0;
    char b[20];
    char *s;

    va_start(a, format);
    for (ptr = format; *ptr != 0; ptr++) {
        if (*ptr == '%') {
            ptr++;
            switch (*ptr) {
                case 'c':
                    char c = (char) va_arg(a, int);
                    write(1, &c, 1);
                    i++;
                    break;
                case 's':
                    char *s = va_arg(a, char *);
                    while (*s != 0) {
                        write(1, s, 1);
                        s++;
                        i++;
                    break;
                }
                case '%': {
                    write(1, "%", 1);
                    i++;
                    break;
                }
                case 'd':
                case 'i': {
                    int num = va_arg(a, int);
                    snprintf(b, 20, "%d", num);
                    s = b;
                    while (*s != 0) {
                        write(1, s, 1);
                        s++;
                        i++;
                    }
                    break;
                }
                default: {
                    write(1, ptr, 1);
                    i++;
                    break;
                }
            }
        } else {
            write(1, ptr, 1);
            i++;
        }
    }

    va_end(a);
    return i;
}
