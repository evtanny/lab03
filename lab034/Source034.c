#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int s;
	puts("������� ���������� ������");
	scanf_s("%d", &s);
	printf("� %d �������� %d ����� � %d �����", s, s / 3600, (s % 3600) / 60);
}