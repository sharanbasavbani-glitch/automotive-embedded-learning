#include <stdio.h>
#include <string.h>
int display(int t[],int a)
{
	int i;
	for (i=0; i<a; i++)
	{
		printf("\n the tempratures are : %d",t[i]);
	}
	return 0;
}
int display_c(char t[],int a)
{
	int i;
	printf("\n");
	for (i=0; i<a; i++)
	{
		printf("%c",t[i]);
	}
	return 0;
}
int highest_temp(int t[],int a)
{
	int max = t[0];
	for(int i=0; i<a; i++)
	{
		if (t[i]>max)
			max = t[i];


	}
	return max;

}
float avg_temp(int t[],int a)
{
	int sum=0;
	for(int i=0; i<a; i++)
	{
		sum = t[i]+sum;
	}
	return (float)sum/a;
}
int count_sensors(int t[],int a)
{
    int count=0;
    for(int i=0; i<a; i++)
	{
		if (t[i]>100)
		    count++;
	}
	return count;
    
}

int main(void)
{
	int size = 5;
	int temp[5]= {78, 95, 112, 87, 105};

	display(temp,size);
	printf("\n the highest temperature is %d ", highest_temp(temp,size));
	printf("\n the average temperature is %.1f ", avg_temp(temp,size));
	printf("\n the readings above 100C : %d ", count_sensors(temp,size));

	//  count_sensors(temp);

	char vehicle_id[] = "KA03AB1234";
	char fault_code[] = "P0217";
	display_c(vehicle_id,(strlen(vehicle_id)));
	display_c(fault_code,(strlen(fault_code)));
	printf("\n length of the vehicle passing is %zu ",strlen(vehicle_id));
	printf("\n length of the fault code is %zu ",strlen(fault_code));
	if (strcmp(fault_code, "P0217") == 0)
    {
        printf("\nEngine coolant temperature is too high!\n");
    }
    else
    {
        printf("\nDifferent fault code detected.\n");
    }

	return 0;

}

