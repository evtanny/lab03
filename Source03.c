#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "ru");
	int num; // ���������� 0
	puts("������� �����"); // ���������� 1
	scanf_s("%d", &num); // ���������� 2
	printf("������� ����� %d\n", num);// ���������� 3
	int num2;  // ���������� 4
	puts("������� ������ �����"); // ���������� 4
	scanf_s("%d", &num2); // ���������� 4
	printf("����� �����: %d\n�������� �����: %d\n������������ �����: %d\n������� �����: %d\n������� �� ������� ������� ����� �� ������: %d\n", num + num2, num - num2, num * num2, num / num2, num % num2); // ���������� 5
}