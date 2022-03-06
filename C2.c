#include<stdio.h>
int student();

int student()
{
	int math, sci, eng;
	printf("\nTotal marks out of 100 ");
	printf("\nMarks in maths - ");
	scanf("%d", &math);
		
	printf("\nMarks in sci - ");
	scanf("%d", &sci);
		
	printf("\nMarks in eng - ");
	scanf("%d", &eng);
	
	float total;
	float per;
	total = (eng+math+sci);
	printf("\nTota marks - %f",total);
	per = (total/300)*100;
	return per;
}
int main()
{
	float op;
	op = student();
	printf("\nPercentage - %f\n",op);
}