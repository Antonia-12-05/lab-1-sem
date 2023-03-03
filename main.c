#include <stdio.h> 
#include <math.h> 

int main ( )  
{
	int a, b;    // катеты треугольника
	float c, s;    // гипотенуза, площадь треугольника

	printf("Enter the legs\n");

scanf_s("%d", &a); // вводим катет
scanf_s("%d", &b); // вводим катет

c = sqrt(pow(a, 2) + pow(b, 2)); //формула гипотенузы
s = (1.00 / 2) * a * b; // формула площади

printf("c=%.5f\n", c); //вывод результата
printf("s=%.5f\n", s); //вывод результата

return 0; // завершение программы
}