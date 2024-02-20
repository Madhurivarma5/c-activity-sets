//Write a program to find whether the given 3 points form a triangle
#include <stdio.h>
#include <math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3) {
    printf("Enter coordinates of point 1 (x1 y1): ");
    scanf("%f %f", x1, y1);

    printf("Enter coordinates of point 2 (x2 y2): ");
    scanf("%f %f", x2, y2);

    printf("Enter coordinates of point 3 (x3 y3): ");
    scanf("%f %f", x3, y3);
}

int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3) {
    float dist12 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float dist23 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float dist31 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    if (dist12 + dist23 > dist31 && dist23 + dist31 > dist12 && dist31 + dist12 > dist23) {
        return 1; 
    } else {
        return 0;
    }
}

void output(float x1, float y1, float x2, float y2, float x3, float y3, int result) {
    printf("\nPoints (%.2f, %.2f), (%.2f, %.2f), (%.2f, %.2f) ", x1, y1, x2, y2, x3, y3);
    if (result) {
        printf("form a triangle.\n");
    } else {
        printf("do not form a triangle.\n");
    }
}
int main() {
    float x1, y1, x2, y2, x3, y3;

    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);

    int result = is_triangle(x1, y1, x2, y2, x3, y3);

    output(x1, y1, x2, y2, x3, y3, result);

    return 0;
}
