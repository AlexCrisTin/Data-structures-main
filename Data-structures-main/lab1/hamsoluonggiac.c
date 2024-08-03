#include <stdio.h>
#include <math.h>

int main(){
    double x;
    scanf("%lf", &x);
    double cosx = cos(x);
    double sinx = sin(x);
    double tanx = tan(x);
    double cogx = 1/tan(x);

    printf("%0.2d %0.2d %0.2d %0.2d", cosx, sinx, tanx, cogx); 
}