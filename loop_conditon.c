#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 10; i += 1)
    {

        if (i % 2 == 0)
        {
            printf("%d-evan\n", i);
        }
        else
        {
            printf("%d-odd\n", i);
        }
    }

    return 0;
}