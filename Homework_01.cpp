#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int operation_number;
	double cos_value;
	double sin_value;
	system("chcp 1251"); // ���������� ������� ����
	system("cls"); // ������� ���� �������

	printf("��������� ��� ���������� �������������� ��������:\n");
	printf("1. ���������� cos;\n2. ���������� sin;\n3. ����� �� ���������...\n\n");
	printf("������� ����� ��������� ��������: ");
	scanf_s("%d", &operation_number);
	
	if (operation_number == 1) // �������� � ���������
		{
			printf("������� �������� cos: ");
			scanf_s("%f", &cos_value);
			printf("cos=%f", cos(cos_value));
		}
		else if (operation_number == 2) // �������� � �������
		{
			printf("������� �������� sin: ");
			scanf_s("%f", &sin_value);
			printf("sin=%f", sin(sin_value));
		}
		else if (operation_number == 3) // ���-�� �������� � ������� �� ���������
		{
			printf("����� ���� ���-�� �������� ����� :)\n");
		}

	if (operation_number > 3) // �������� � ������� �������
	{
		printf("�������� �������!\n");
	}
	else if (operation_number < 0)
	{
		printf("�������� �������!\n");
	}

	return 0;

}