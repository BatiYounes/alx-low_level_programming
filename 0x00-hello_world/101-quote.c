#include <unistd.h>

int main(void)
{
    const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t length = sizeof(message) - 1;
    ssize_t bytes_written = write(2, message, length);
    return (bytes_written == length) ? 1 : -1;
}
