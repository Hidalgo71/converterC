#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main()
{
	float fah, cel, cToF = 1.800;
	int bin, remainder, dec,select, asciiB;
	int numD1, numD2,counerD,job,numM1,numM2,counterM,iM;
	int max_int = 0;
	int j = 0;
	char c;

	printf("1-Temperature\n");
	printf("2-Decimal to Binary\n");
	printf("3-Binary to Decimal\n");
	printf("4-Max Values Integer and Float\n");
	printf("5-ASCII Reprentation(Char)\n");
	printf("""6-Hello.""\n");
	printf("7-Divide w Subtraction\n");
	printf("8-Multiplication w Add\n");

	printf("\nSelect Conversion:");
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
		printf("Enter The Decimal Number:");														//Convert Decimal Numbers to Binary
		scanf_s("%d", &dec);
		while (dec >= 1)
		{
			remainder = dec % 2;
			printf(":%d\n", remainder);
			dec = dec / 2;
		}
		break;
	case 3:
		printf("Enter The Binary Number:");															//Convert Binary to Decimal
		scanf_s("%11d", &bin);
		int decNum = 0, i = 0, rem;
		while(bin!=0)
		{
			rem = bin % 10;
			bin /= 10;
			decNum += rem*pow(2, i);
			i++;
			printf("Your Decimal Number is:%d\n", decNum);
		}
		break;
	case 4:																							//Calculates the Max value of and Integer and Float Number
		//maximum number of an integer
		j = 0;
		while (j <= 30)
		{
			max_int = max_int + pow(2.0, j);
			j = j + 1;

		}

		printf("Maximum value of an integer = %u\n\n\n", max_int);

		//maximum number of an float number
		
		break;
	case 5:
		printf("Enter The Binary Number:");															//Take Binary Number and Prints ASCII Reprentation(Char) of it.
		scanf_s("%d", &asciiB);
		printf("ASCII Reprentation %c\n", asciiB);
		break;
	case 6:
		printf("Say Hello for Machines");
		scanf("%c", &c);
		printf("%d\n", c);
		break;
	case 7:
		printf("First Number:");
		scanf_s("%d", &numD1);
		printf("Second Number:");
		scanf_s("%d", &numD2);
		
		while (numD1<numD2)
		{
			counerD = numD1;
			numD1 -= numD2;
			counerD++;			
		}
		printf("Resault is %d\n", counerD);
		break;
	case 8:
		printf("First Number:");
		scanf_s("%d", &numM1);
		printf("Second Number:");
		scanf_s("%d", &numM2);

		for (iM=0; iM<numM2; iM++)
		{
			counterM += numM1;
		}
		printf("Result is:%d\n", counterM);
		break;

	default:printf("Illegal Enter");
		break;
	}
																									





																									

																									

																									//01001000-01100101-01101100-0110100-011101111-00101110





	system("PAUSE");
	return 0;
}