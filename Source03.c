#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "ru");
	int num; // подзадание 0
	puts("Введите число"); // подзадание 1
	scanf_s("%d", &num); // подзадание 2
	printf("Введено число %d\n", num);// подзадание 3
	int num2;  // подзадание 4
	puts("Введите второе число"); // подзадание 4
	scanf_s("%d", &num2); // подзадание 4
	printf("Сумма чисел: %d\nРазность чисел: %d\nПроизведение чисел: %d\nЧастное чисел: %d\nОстаток от деления первого числа на второе: %d\n", num + num2, num - num2, num * num2, num / num2, num % num2); // подзадание 5
}