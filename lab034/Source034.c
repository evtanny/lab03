#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int s;
	puts("Введите количество секунд");
	scanf_s("%d", &s);
	printf("В %d секундах %d часов и %d минут", s, s / 3600, (s % 3600) / 60);
}