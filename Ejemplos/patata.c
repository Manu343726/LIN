#include <stdio.h>

#define ARRAY_LENGTH(array) (sizeof(array)/sizeof(array[0]))

void patataCogeArray(const int patatas[10])
{
    for(int i = 0; i < ARRAY_LENGTH(patatas); ++i)
        printf("Patata %i\n", patatas[i]);
}

int main()
{
    int patatas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    patataCogeArray(patatas);
}
