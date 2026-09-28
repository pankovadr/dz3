#include <stdio.h>

int main(void)
{
    /* Исходные данные */
    double L1 = 120.0;   /* длина первого поезда, м */
    double L2 = 150.0;   /* длина второго поезда, м */
    double V1 = 15.0;    /* скорость первого поезда, м/с */
    double V2 = 20.0;    /* скорость второго поезда, м/с */

    /* Расчёт */
    double Vvstr = V1 + V2;      /* встречная (суммарная) скорость */
    double S = L1 + L2;      /* общий путь прохождения */
    double T = S / Vvstr;    /* время прохождения, с */

    /* Вывод результата */
    printf("L1 = %.1f м\n", L1);
    printf("L2 = %.1f м\n", L2);
    printf("V1 = %.1f м/с\n", V1);
    printf("V2 = %.1f м/с\n", V2);
    printf("Vвстр = %.1f м/с\n", Vvstr);
    printf("S = %.1f м\n", S);
    printf("T = %.2f с\n", T);

    return 0;
}