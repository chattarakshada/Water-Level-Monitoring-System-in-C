#include <stdio.h>

int main()
{
    int level;

    printf("Enter Water Level (0-100): ");
    scanf("%d", &level);

    if (level < 0 || level > 100)
    {
        printf("Invalid Water Level\n");
    }
    else if (level < 30)
    {
        printf("Low Water Level - Pump ON\n");
    }
    else if (level <= 90)
    {
        printf("Normal Water Level\n");
    }
    else
    {
        printf("Tank Full - Pump OFF\n");
    }

    return 0;
}
