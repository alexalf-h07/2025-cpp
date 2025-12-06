#include<cstdio>
#include<cmath>
typedef struct Point
{
	double x;
	double y;
};
double distance(Point a, Point b);
double distance(Point a, Point b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
double per(Point a, Point b, Point c)
{
	return distance(a, b) + distance(b, c) + distance(c, a);
}
int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	Point points[100];
	for (int i = 0; i < n; i++)
	{
		int x = 0;
		int y = 0;
		scanf_s("%d %d", &x, &y);
		points[i].x = (double)x;
		points[i].y = (double)y;
	}
	double maxper = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				double p = per(points[i], points[j], points[k]);
				if (p > maxper)
				{
					maxper = p;
				}
			}
		}
	}
	printf("%.15f\n", maxper);
	return 0;
}