#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int count, N;
    float point[1005], avg, percent;
    while (scanf("%d", &count) != EOF)
    {
        for (int a = 1; a <= count; a++)
        {
            scanf("%d", &N);
            avg = 0.0;
            for (int b = 0; b < N; b++)
            {
                scanf("%f", &point[b]);
                avg += point[b];
            }
            avg /= N;
            percent = 0.0;
            for (int b = 0; b < N; b++)
            {
                if (point[b] > avg)
                    percent++;
            }
            percent /= N;
            percent *= 100;
            printf("%.3f%%\n", percent);
        }
    }
    return 0;
}