#include <unistd.h>

int main(void)
{
    char buffer[20] = "???????????????????";  // prefill so extra bytes are visible and defined
    read(STDIN_FILENO, buffer, 10);              // may replace fewer than 10 bytes
    write(STDOUT_FILENO, buffer, 10);            // intentionally writes 10 regardless
    return 0;
}

