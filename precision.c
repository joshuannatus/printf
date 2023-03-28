#include"main.h"

int get_precision(va_list u, flags_t *f) {
    int precision = -1;
    if (*f & FL_PRECISION) {
        precision = va_arg(u, int);
        if (precision < 0) {
            precision = -1;
            *f &= ~FL_PRECISION;
        }
    }
    return precision;
}

