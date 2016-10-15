#include <stdio.h>
#include <limits.h>
#include <float.h> 

int main()
{
	float fah, cel, cToF = 1.800;
	int bin, remainder, dec,select, asciiB;

	printf("1-Temperature\n");
	printf("2-Decimal to Binary\n");
	printf("3-Binary to Decimal\n");
	printf("4-Max Values Integer and Float\n");
	printf("5-ASCII Reprentation(Char)\n");

	printf("Select Conversion:");
	scanf_s("%d", &select);

	switch (select)
	{
	case 1:
		printf("Enter The Celcius and Fahreneit Degree:");											//Celcius to Fahreneit and Fahreneit to Celcius
		scanf_s("%f%f", &cel, &fah);
		fah = cel*cToF + 32.00;
		cel = (fah - 32.0 * 5) / 9;
		printf("\nCelcius to Fahreneit:%f\nFahreneit to Celcius:%f\n\n", fah, cel);
		break;
	case 2:
		printf("Enter The Decimal Number:");														//Convert Decimal Numbers to Binary and Binary to Decimal
		scanf_s("%d", &dec);
		while (dec >= 1)
		{
			remainder = dec % 2;
			printf(":%d\n", remainder);
			dec = dec / 2;
		}
		break;
	case 3:
		printf("Enter The Binary Number:");
		scanf_s("%d", &bin);

	case 4:																							//Calculates the Max value of and Integer and Float Number
		printf("The Maximum Value of Int = %d\n", INT_MAX);
		printf("The maximum value of Float = %f\n", FLT_MAX);
		break;
	case 5:
		printf("Enter The Binary Number:");															//Take Binary Number and Prints ASCII Reprentation(Char) of it.
		scanf_s("%d",asciiB);
		if (asciiB > 128)
		printf("Please Enter The Number Between 0-127");
		//return select;
		else
		{
			
		}
		break;

	default:printf("Illegal Enter");
		break;
	}
																									





																									

																									

																									//01001000-01100101-01101100-0110100-011101111-00101110





	system("PAUSE");
	return 0;
}