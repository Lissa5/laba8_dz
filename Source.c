#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    double x;
    double sum = 0;
    double p;
    double f = 1;
    int i;
    int j;
    int znak = 1;
    printf("Введите значение x: ");
    scanf("%lf", &x);
    p = x;
    for (i = 1; i <= 13; i = i + 2)
    {
        f = 1;
        for (j = 1; j <= i; j++)
        {
            f = f * j;
        }
        sum = sum + znak * p / f;
        p = p * x * x;
        znak = -znak;
    }
    printf("Значение выражения: %.6f\n", sum);
    return 0;
}