#include "main.h"


int get_precision(const char* format, int i, va_list list) {
    int precision = -1;
    int j = i;
    while (format[j] != '\0' && format[j] != '%') {
        j++;
    }
    while (format[j] != '\0') {
        if (format[j] == '.') {
            j++;
            precision = 0;
            break;
        }
        if (format[j] >= '0' && format[j] <= '9') {
            if (precision < 0) {
                precision = 0;
            }
            precision = precision * 10 + format[j] - '0';
        } else {
            break;
        }
        j++;
    }

    switch (format[j]) {
        case 'd':
        case 'i':
        case 'o':
        case 'u':
        case 'x':
        case 'X':
            (void)va_arg(list, int);
            break;
        case 'f':
        case 'F':
        case 'e':
        case 'E':
        case 'g':
        case 'G':
            (void)va_arg(list, double);
            break;
        case 's':
            (void)va_arg(list, const char*);
            break;
        case 'c':
            (void)va_arg(list, int);
            break;
        case 'p':
            (void)va_arg(list, void*);
            break;
        default:
            break;
    }

    return (precision);
}

