//M09_Week11_pg182_4b_Amir

#include<stdio.h>
float distancef(float *s, float *t);

int main()
{
	float speed,time,distance;
	printf("Enter Speed and Time :");
	scanf("%f %f", &speed, &time);
	distance=distancef(&speed, &time);
	printf("Distance is %f", distance);
}

float distancef(float *s, float *t)
{
	float d;
	d = *s * *t;
	return d;
}
