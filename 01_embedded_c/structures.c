#include <stdio.h>
struct sensor
{
	int id;
	float temperature;
	int status;
};
int display_sensors(struct sensor sensors[],int size)
{
	for (int i=0; i<size; i++)
	{
		printf("\n==========the detials of the sensor %d=========",i+1);
		printf("\n");
		printf("\n     the id of the sensors are          : %d", sensors[i].id);
		printf("\n     the temperature of the sensors are : %.1f", sensors[i].temperature);
		printf("\n     the status of the sensors are      : %d", sensors[i].status);
		printf("\n");
	}
}
float highest_temperature(struct sensor sensors[], int size)
{
    float max = sensors[0].temperature;

    for (int i = 1; i < size; i++)
    {
        if (max < sensors[i].temperature)
        {
            max = sensors[i].temperature;
        }
    }

    return max;
}
int count_overheating(struct sensor sensors[], int size)
{
	int count=0;
	for(int i=0; i<size; i++)
	{
		if (sensors[i].status == 1 && sensors[i].temperature>100)
		{
			count++;
		}
	}
	printf("\n the number of sensors overheating are  : %d ",count);
}
int check_sensor(struct sensor sensors[], int size, int id)
{
    for (int i = 0; i < size; i++)
    {
        if (sensors[i].id == id)
        {
            return sensors[i].status;
        }
    }

    return 0;
}
int main(void)
{
	struct sensor snsors[5]=
	{
		{1,78.5,1},
		{2,95,1},
		{3,112.4,1},
		{4,87,0},
		{5,105,1},
	};

	display_sensors(snsors,5);
	printf("\n Highest temperature: %.1f C",highest_temperature(snsors, 5));
	count_overheating(snsors,5);
	if(check_sensor(snsors,5,4))
	    printf("\n the sensor  is working");
	else
	    printf("\n the sensor is not working");
}
