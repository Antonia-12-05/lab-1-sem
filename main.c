#include <stdio.h> 
#include <math.h> 

int main ( )  
{
	int a, b;    // ������ ������������
	float c, s;    // ����������, ������� ������������

	printf("Enter the legs\n");

scanf_s("%d", &a); // ������ �����
scanf_s("%d", &b); // ������ �����

c = sqrt(pow(a, 2) + pow(b, 2)); //������� ����������
s = (1.00 / 2) * a * b; // ������� �������

printf("c=%.5f\n", c); //����� ����������
printf("s=%.5f\n", s); //����� ����������

return 0; // ���������� ���������
}