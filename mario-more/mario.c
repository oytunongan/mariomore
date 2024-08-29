#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while ((height < 1) || (height > 8));
    int i, j, k, l;
    for (i = height; i > 0; i--)
    {
        for (j = 0; j <= height - i; j++)
        {
            for (k = i; ((k > 1) && (j < 1)); k--)
            {
                printf(" ");
            }
            printf("#");
        }
        printf("  ");
        for (l = height - i; l >= 0; l--)
        {
            printf("#");
        }
        printf("\n");
    }
}