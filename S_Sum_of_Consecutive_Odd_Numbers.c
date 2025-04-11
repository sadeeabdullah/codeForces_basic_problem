#include <stdio.h>
int main()
{
    int sum = 0;
    int X, Y;
    scanf("%d %d", &X, &Y);
    if (Y > X)
    {
        for (int i = X + 1; i < Y; i++)
        {
            if (i % 2 != 0)
            {

                sum += i;
            }
        }
    }
    else if (X > Y)
    {
        for (int i = Y + 1; i < X; i++)
        {
            if (i % 2 != 0)
            {

                sum += i;
            }
        }
    }

    printf("%d\n",sum);

    return 0;
}
