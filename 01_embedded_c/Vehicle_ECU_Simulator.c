#include <stdio.h>
#include <stdint.h>
int main(void)
{
	uint8_t status = 0x0;
	uint8_t temp;
	int c,a,i,count,j;
	do {


		printf(" \n          VEHICLE ECU\n");
		printf("1.turn ON a component\n");
		printf("2.turn OFF a component\n");
		printf("3.toggle a component\n");
		printf("4.check a component\n");
		printf("5.display ECU register\n");
		printf("6.count active components\n");
		printf("7.reset ECU\n");
		printf("8.EXIT\n");
		scanf("%d",&c);

		if (c > 0 && c < 5)
		{
			printf("chose the component\n");
			printf("0.engine\n");
			printf("1.headlights\n");
			printf("2.left indicator\n");
			printf("3.right indicator\n");
			printf("4.sound system\n");
			printf("5.wiper\n");
			printf("6.door lock\n");
			printf("7.door unlock\n");
			scanf("%d",&a);

		}

		if (c==1)
		{
			status |= 1u<<a;
			printf("status = %u",status);
		}

		if (c==2)
		{
			status &= ~(1u<<a);
			printf("status = %u",status);
		}

		if (c==3)
		{
			status ^= (1u<<a);
			printf("status = %u",status);
		}

		if (c == 4)
		{
			if (status & (1u << a))
			{
				printf("Component is ON\n");
			}
			else
			{
				printf("Component is OFF\n");
			}
		}

		if (c==5)
		{
			printf(" the binary of ECU : %b \n",status);
			for( i=7; i>=0; i--)
			{
				printf("%d",(status>>i)&1);
			}

		}

		if (c==6)

		{
			count = 0;
			for( i=7; i>=0; i--)
			{
				if (((status>>i)&1) == 1u)

					count++;


			}
			printf("no of components ON : %d ",count);
		}

		if(c==7)
		{
			status &= ~status;
			printf(" the status is reset to %u",status);
		}

		if (c==8)
		{
			break;
		}
		
		if (c<1 || c>8)
		{
		    printf("invalid entry");
		    
		    
		}
		if (a<0 || a>7)
		{
		    printf("invalid entry");
		    
		    
		}
	} while(1);
	return 0;
}
