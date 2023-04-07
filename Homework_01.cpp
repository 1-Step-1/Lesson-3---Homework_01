#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int operation_number;
	double cos_value;
	double sin_value;
	system("chcp 1251"); // Используем русский язык
	system("cls"); // Очищаем окно консоли

	printf("Программа для выполнения математических операций:\n");
	printf("1. Рассчитать cos;\n2. Рассчитать sin;\n3. Выход из программы...\n\n");
	printf("Введите номер требуемой операции: ");
	scanf_s("%d", &operation_number);
	
	if (operation_number == 1) // Работаем с косинусом
		{
			printf("Введите значение cos: ");
			scanf_s("%f", &cos_value);
			printf("cos=%f", cos(cos_value));
		}
		else if (operation_number == 2) // Работаем с синусом
		{
			printf("Введите значение sin: ");
			scanf_s("%f", &sin_value);
			printf("sin=%f", sin(sin_value));
		}
		else if (operation_number == 3) // Как-то работаем с выходом из программы
		{
			printf("Здесь надо как-то написать выход :)\n");
		}

	if (operation_number > 3) // Работаем с другими цифрами
	{
		printf("Неверная команда!\n");
	}
	else if (operation_number < 0)
	{
		printf("Неверная команда!\n");
	}

	return 0;

}