	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, pwr1, pwr2, pwr3, pwr4, pwr5, sum;
	printf("Enter Number Of Fridges - \t\t\t\t: ");
	scanf("%d",&num1);
	printf("Enter power consumption of each fridge-\t\t\t: ");
	scanf("%d",&num2);
	pwr1 = num1 * num2;
	printf("The total power for fridges is\t\t\t\t: %d\n\n",pwr1);

	printf("Enter Number Of bulbs -\t\t\t\t\t: ");
	scanf("%d",&num3);
	printf("Enter power consumption of each buld -\t\t\t: ");
	scanf("%d",&num4);
	pwr2 = num3 * num4;
	printf("The total power for bulbs  is\t\t\t\t: %d\n\n",pwr2);

	printf("Enter Number Of stoves -\t\t\t\t: ");
	scanf("%d",&num5);
	printf("Enter power consumption of each stove -\t\t\t: ");
	scanf("%d",&num6);
	pwr3 = num5 * num6;
	printf("The total power for stoves is\t\t\t\t: %d\n\n",pwr3);

	printf("Enter Number Of irons -\t\t\t\t\t: ");
	scanf("%d",&num7);
	printf("Enter capacity of each iron -\t\t\t\t: ");
	scanf("%d",&num8);
	pwr4 = num7 * num8;
	printf("The total power for irons is-\t\t\t\t: %d\n\n",pwr4);

	printf("Enter Number Of washing machines -\t\t\t: ");
	scanf("%d",&num9);
	printf("Enter power consumption of each washing machine -\t: ");
	scanf("%d",&num10);
	pwr5 = num9 * num10;
	printf("The total power for washing machines is-\t\t: %d\n\n",pwr5);

	sum = pwr1 + pwr2 + pwr3 + pwr4 + pwr5;
	printf("\n Maximum power demand-\t\t\t\t\t: %d", sum);


	getch();
	}
