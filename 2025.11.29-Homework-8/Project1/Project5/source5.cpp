#include<cstdio>
typedef struct Student
{
	char firstName[50];
	char lastName[50];
	int math = 0;
	int physics = 0;
	int informatics = 0;
};
int main(int main, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	Student students[100];
	int mathsum = 0;
	int physicssum = 0;
	int informaticssum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%s %s %d %d %d", students[i].lastName, students[i].firstName, &students[i].math, &students[i].physics, &students[i].informatics);
		mathsum += students[i].math;
		physicssum += students[i].physics;
		informaticssum += students[i].informatics;
	}
	double mathavg = (double)mathsum / n;
	double physicsavg = (double)physicssum / n;
	double informaticsavg = (double)informaticssum / n;
	printf("%.1f %.1f %.1f\n", mathavg, physicsavg, informaticsavg);
	return 0;
}