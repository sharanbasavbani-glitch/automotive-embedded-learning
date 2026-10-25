#include <stdio.h>
#include <stdint.h>
int main(void)
{
	uint8_t status = 0x0;
	int perip;
	int act;
	do {
		printf("\n");
		printf("select the peripheral \n");
		printf("0 : headlight \n");
		printf("1 : breaklight \n");
		printf("2 : left indicator \n");
		printf("3 : right indicator \n");
		printf("4 : exit\n");
		scanf("%d",&perip);
		if (perip == 4)
		{
			printf("exiting the program\n");
			break;
		}

		printf("select the action \n");
		printf("0 : off \n");
		printf("1 : on \n");
		scanf("%d",&act);

		if (act < 0 || act > 1 || perip < 0 || perip > 3)
		{
			printf("Invalid input!\n");
			return 1;
		}


		if (act == 1)
			status |= (1u<<perip);
		else
			status &= ~(1u<<perip);
		printf("\nthe value of status is in decimal %u ",status);
		printf("\nthe value of status is in hexadecimal %X ",status);
		printf("\n");
	} while(1);


	return 0;
}
