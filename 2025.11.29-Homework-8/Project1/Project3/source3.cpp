#include<cstdio>
#include<cmath>
struct Point 
{
    int x = 0;
    int y = 0;
};
double distance(struct Point a, struct Point b)
{
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}
int main(int argc,char** argv) 
{
    int n = 0;
    scanf_s("%d", &n);
    struct Point points[100];
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d %d", &points[i].x, &points[i].y);
    }
    double maxdistance = 0.0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) 
        {
            double dist = distance(points[i], points[j]);
            if (dist > maxdistance) 
            {
                maxdistance = dist;
            }
        }
    }
    printf("%.15g", maxdistance);
    return 0;
}