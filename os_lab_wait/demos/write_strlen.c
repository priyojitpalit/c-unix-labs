#include <string.h>
#include <unistd.h>

int main(void)
{
    const char message[] = "hello\n";
    write(STDOUT_FILENO, message, strlen(message));  // count derived from the string
    return 0;
}
