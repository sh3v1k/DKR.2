#include <conio.h>
#include <stdio.h>

#define ARR_SIZE 5

float sum_arr(float *arr, const int size);
int main()
{
    float arr[5] = {1, 2.45, 10, 7.1, 5};
    printf("Sum is %f", sum_arr(&arr[0], ARR_SIZE));
    getch();
}

float sum_arr(float *arr, const int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
