#include <stdio.h>
#include <locale.h>

#define D 2.54
#define P 2.32

void main()
{
	setlocale(LC_ALL, "ru");
	int dym;
	float result;

	puts("������� ���������� ������");
	scanf_s("%d", &dym);
	result = D * dym;
	printf("%d ���������� ������ � ��� %.1f ��\n %d ��������� ������ - ��� %.1f ��", dym, result, dym, dym * P);

}
