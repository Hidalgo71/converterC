#include <stdio.h>

int main()
{
	float fah, cel;
	float cToF = 1.800;
	int bin, remainder, dec,selection;

	switch (selection)
	{
	case 0:
		printf("Enter The Celcius and Fahreneit Degree:");											//Celcius to Fahreneit and Fahreneit to Celcius
		scanf_s("%f%f", &cel, &fah);
		fah = cel*cToF + 32.00;
		cel = (fah - 32.0 * 5) / 9;
		printf("Celcius to Fahreneit:%f\nFahreneit to Celcius:%f\n\n", fah, cel);
		break;
	case 1:
		printf("Enter The Decimal Number:");														//Convert Decimal Numbers to Binary and Binary to Decimal
		scanf_s("%d", &dec);
		while (dec >= 1)
		{
			remainder = dec % 2;
			printf(":%d\n", remainder);
			dec = dec / 2;
		}
		break;
	default:printf("Illegal Enter");
		break;
	}
																									





																									//Calculates the Max value of and Iteger and Float Number


																									//Take Binary Number and Prints ASCII Reprentation(Char) of it.

																									//01001000-01100101-01101100-0110100-011101111-00101110





	system("PAUSE");
	return 0;
}