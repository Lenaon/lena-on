#include <stdio.h>




void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main ()
{
    int myvar;
    int a = 10, b = 50;
    swap (&a, &b);

    printf ("a: %i, b: %i\n", a, b);
    printf ("Size of a: %i\n", sizeof a);
    printf ("Size of pointer to a: %i\n", sizeof &a);

    float my_float = 0.5;
    double my_double = 25.5;

    printf ("Size of my_float: %i\n", sizeof my_float);
    printf ("Size of my_double: %i\n", sizeof my_double);

    float *ptr_to_my_float = &my_float;
    double *ptr_to_my_double = &my_double;

    printf("Size of ptr_to_my_float: %i\n", sizeof ptr_to_my_float);
    printf("Size of ptr_to_my_double: %i\n", sizeof ptr_to_my_double);

}
