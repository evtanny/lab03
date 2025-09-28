#include <stdio.h>
#include <locale.h>

#define D 2.54
#define P 2.32

void main()
{
	setlocale(LC_ALL, "ru");
	int dym;
	float result;

	puts("¬ведите количество дюймов");
	scanf_s("%d", &dym);
	result = D * dym;
	printf("%d английских дюймов Ц это %.1f см\n %d испанских дюймов - это %.1f см", dym, result, dym, dym * P);

}
