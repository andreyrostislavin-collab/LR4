#define _CRT_SECURE_NO_WARNINGS // Исправлено: защита от ошибок безопасности scanf в Visual Studio
#include <stdio.h>
#include <stdlib.h>             // Для корректной работы abs(), если введут отрицательные числа

void task1();
void task1a();
void task1b();
void task1v();
void task2();
void task3();
void homework();

int main() {
    task1();   
    task1a();  
    task1b();
    task1v();
    task2();
    task3();
    homework();
    return 0; 
}

void task1() {
    char c = '!'; 
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    printf("\n--- Задание 1 ---\n");
    printf("Исходные значения:\n");
    printf("char c = %c\n", c);
    printf("int i = %i\n", i);
    printf("float f = %f\n", f);
    printf("double d = %e\n", d);

    printf("\nВведите новые значения через Enter (символ, int, float, double):\n");
    scanf(" %c", &c);
    scanf("%d", &i);
    scanf("%f", &f);
    scanf("%lf", &d);

    printf("\nВы ввели:\n");
    printf("char: %c\n", c);
    printf("int: %d\n", i);
    printf("float: %f\n", f);
    printf("double: %e\n", d);
}

void task1a() {
    float num;
    printf("\n--- Задание 1а ---\n");
    printf("Введите вещественное число: ");
    scanf("%f", &num);
    
    int integer_part = (int)num;          
    float fractional_part = num - integer_part; 
    
    printf("Целая часть: %d\n", integer_part);
    printf("Дробная часть: %f\n", fractional_part);
}

void task1b() {
    char ch;
    printf("\n--- Задание 1б ---\n");
    printf("Введите символ: ");
    scanf(" %c", &ch);
    
    printf("Символ: %c\n", ch);
    printf("Десятичный код: %d\n", ch);
    printf("Шестнадцатеричный код: %x\n", ch);
}

void task1v() {
    int i;
    printf("\n--- Задание 1в ---\n");
    printf("Введите целое число i: ");
    scanf("%d", &i);
    
    if (i != 0) {
        printf("1 / %d = %f\n", i, 1.0f / i);
    } else {
        printf("На ноль делить нельзя!\n");
    }
}

void task2() {
    int a = 11;
    int b = 3;
    int x;
    float y;
    double z;
    
    printf("\n--- Задание 2 ---\n");
    x = a / b; 
    y = (float)a / b; // Исправлено: добавлено явное приведение типов для точности
    z = (double)a / b; 
    
    printf("a = %d, b = %d\n", a, b);
    printf("x (int) = %d\n", x);
    printf("y (float) = %f\n", y);
    printf("z (double) = %lf\n", z);
    
    printf("\nС явным преобразованием:\n");
    printf("(float)a / b = %f\n", (float)a / b);
    printf("a / (float)b = %f\n", a / (float)b);
    printf("(double)a / b = %lf\n", (double)a / b);
}

void task3() {
    int n;
    printf("\n--- Задание 3 ---\n");
    printf("Введите целое трехзначное число N: ");
    scanf("%d", &n);
    
    int check_n = abs(n);
    if (check_n < 100 || check_n > 999) {
        printf("Число не трехзначное!\n");  
        return;
    }
    
    int last_digit = check_n % 10;
    int first_digit = check_n / 100;
    int middle_digit = (check_n / 10) % 10; 
    int sum_digits = first_digit + middle_digit + last_digit;
    int reversed = last_digit * 100 + middle_digit * 10 + first_digit;
    
    if (n < 0) reversed = -reversed;
    
    printf("Последняя цифра: %d\n", last_digit);
    printf("Первая цифра: %d\n", first_digit);
    printf("Сумма цифр: %d\n", sum_digits);
    printf("Число наоборот: %d\n", reversed);
}

void homework() {
    
    int A, B, C;
    printf("\n--- Домашнее задание ---\n");
    printf("Введите три целых числа (A, B, C) через пробел: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A % 3 == 0 && B % 3 == 0 && C % 3 == 0) {
        printf("Все три числа (A=%d, B=%d, C=%d) делятся на 3 без остатка!\n", A, B, C);
    } else {
        printf("Не все числа делятся на 3 без остатка.\n");
    }
}

