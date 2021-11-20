#include <unistd.h>
#include <stdio.h>

int main()
{
    const char *strou = "f4kmm6p|=\202\177p\202n\203\202DB\203Du{\177\214\211";
    for (int i = 0; i < strlen(strou); i++)
        printf("%c", strou[i] - i);
}