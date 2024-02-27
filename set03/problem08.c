//Write a program to find the permeter of a polygon

#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n() {
    int n;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &n);
    return n;
}

Point input_point(char *prompt_msg) {
    Point pt;
    printf("%s\n", prompt_msg);
    printf("Enter x-coordinate: ");
    scanf("%f", &pt.x);
    printf("Enter y-coordinate: ");
    scanf("%f", &pt.y);
    return pt;
}

int input_polygon(Polygon *poly) {
    poly->sides = input_n();

    for (int i = 0; i < poly->sides; ++i) {
        char prompt_msg[50];
        sprintf(prompt_msg, "Enter coordinates for Point %d:", i + 1);
        poly->p[i] = input_point(prompt_msg);
    }

    return poly->sides;
}

float find_distance(Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

void find_perimeter(Polygon* poly) {
    poly->perimeter = 0;

    for (int i = 0; i < poly->sides; ++i) {
        int next_index = (i + 1) % poly->sides; 
        poly->perimeter += find_distance(poly->p[i], poly->p[next_index]);
    }
}

void output(Polygon poly) {
    printf("Perimeter of the polygon: %.2f\n", poly.perimeter);
}

int main() {
    Polygon myPolygon;
    int num_sides = input_polygon(&myPolygon);
    find_perimeter(&myPolygon);
    output(myPolygon);

    return 0;
}
