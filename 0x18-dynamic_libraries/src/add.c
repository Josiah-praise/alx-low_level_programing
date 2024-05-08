#include <stdio.h>
#include <unistd.h>


ssize_t add(ssize_t a, ssize_t b)
{
    return (a + b);
}

ssize_t sub(ssize_t a, ssize_t b)
{
    return (a - b);
}

ssize_t mull(ssize_t a, ssize_t b)
{
    return (a * b);
}

ssize_t div(ssize_t a, ssize_t b)
{
    return (a / b);
}

ssize_t mod(ssize_t a, ssize_t b) {
    if (b == 0) {
        return 0;
    }

    int result = a % b;

    // Adjust result for negative a
    if (result < 0) {
        result += b;
    }

    return result;
}
