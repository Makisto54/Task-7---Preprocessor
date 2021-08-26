#include <stdio.h>

#define debug_print(fmt, ...) \
    do { if (DEBUG) fprintf(stderr, "%s:%d:%s(): " fmt, __FILE__, \
        __LINE__, __func__, __VA_ARGS__); } while (0)

int main(void)
{
    int a = 5;

#ifdef DEBUG
    debug_print("a = %d\n", a);
#else
    printf("NOT DEBUG\n");
#endif

    return 0;
}