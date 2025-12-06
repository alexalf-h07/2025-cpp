#include<cstdio>
struct Point
{
	int x = 0;
	int y = 0;
};
int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	struct Point points[100];
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &points[i].x, &points[i].y);
	}
	double sumx = 0.0;
	double sumy = 0.0;
	for (int i = 0; i < n; i++)
	{
		sumx += points[i].x;
		sumy += points[i].y;
	}
	double center_x = sumx / n;
	double center_y = sumy / n;
	printf("%.15g %.15g", center_x, center_y);
	return 0;
}