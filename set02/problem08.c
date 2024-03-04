// Write a program to find the triangle with smallest area in n given triangles.
#include <stdio.h>

typedef struct _triangle
{
    float base, altitude, area;
} Triangle;

int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main()
{
    int n = input_n();
    Triangle triangles[n];

    // Input n triangles
    input_n_triangles(n, triangles);

    // Find areas for all triangles
    find_n_areas(n, triangles);

    // Find the smallest triangle
    Triangle smallest = find_smallest_triangle(n, triangles);

    // Output
    output(n, triangles, smallest);

    return 0;
}

int input_n()
{
    int n;
    printf("Enter the number of triangles: ");
    scanf("%d", &n);
    return n;
}

Triangle input_triangle()
{
    Triangle t;
    printf("Enter the base of the triangle: ");
    scanf("%f", &t.base);

    printf("Enter the altitude of the triangle: ");
    scanf("%f", &t.altitude);

    return t;
}

void input_n_triangles(int n, Triangle t[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for triangle %d:\n", i + 1);
        t[i] = input_triangle();
    }
}

void find_area(Triangle *t)
{
    t->area = 0.5 * t->base * t->altitude;
}

void find_n_areas(int n, Triangle t[n])
{
    for (int i = 0; i < n; i++)
    {
        find_area(&t[i]);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle smallest = t[0];

    for (int i = 1; i < n; i++)
    {
        if (t[i].area < smallest.area)
        {
            smallest = t[i];
        }
    }

    return smallest;
}

void output(int n, Triangle t[n], Triangle smallest)
{
    printf("\nDetails of the triangles and the smallest triangle:\n");

    for (int i = 0; i < n; i++)
    {
        printf("\nTriangle %d:\n", i + 1);
        printf("Base: %.2f\n", t[i].base);
        printf("Altitude: %.2f\n", t[i].altitude);
        printf("Area: %.2f\n", t[i].area);
    }

    printf("\nSmallest Triangle:\n");
    printf("Base: %.2f\n", smallest.base);
    printf("Altitude: %.2f\n", smallest.altitude);
    printf("Area: %.2f\n", smallest.area);
}
