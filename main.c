#include <stdio.h>

int main() {
    double R;
    double W;

    printf("Введите начальную сумму (R): ");
    scanf("%lf", &R);

    printf("Введите процент за месяц (W): ");
    scanf("%lf", &W);

    double month1 = R * (1 + W / 100.0);
    double month2 = month1 * (1 + W / 100.0);
    double month3 = month2 * (1 + W / 100.0);
    double month4 = month3 * (1 + W / 100.0);
    double month5 = month4 * (1 + W / 100.0);
    double month6 = month5 * (1 + W / 100.0);

    p("\n");
    printf("Через 2 месяца: %.2lf руб.\n", month2);
    printf("Через 3 месяца: %.2lf руб.\n", month3);
    printf("Через полгода (6 месяцев): %.2lf руб.\n", month6);

    return 0;
}