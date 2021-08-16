//64010846
#include <stdio.h>
int main()
{
	float w, h;
	printf("BMI CALCULATOR\nEnter Weight (kg.) : ");
	scanf_s("%f", &w);
	printf("Enter Height (m.) : ");
	scanf_s("%f", &h);

	float bmi = w / (h * h);
	printf("%.1f ", bmi);
	
	if (bmi > 30)
		printf("OBESE");
	else if (bmi > 25)
		printf("OVERWEIGHT");
	else if (bmi >= 18.5)
		printf("NORMAL");
	else
		printf("UNDERWEIGHT");
	
	return 0;

}