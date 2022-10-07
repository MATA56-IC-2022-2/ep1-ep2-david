/* Exercicio EP2 */
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

// funcao f1
void func1()
{
    static int a[100000];
}

// funcao f2
void func2()
{
    int a[100000];
}

// funcao f3
void func3()
{
    int* a = malloc(sizeof(int)*100000);
}

// funcao main
void main()
{
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    for (int i = 0; i < 100000; i++) {
        func1();
    }
    end = clock();
    cpu_time_used = ((double) (end - start))/ CLOCKS_PER_SEC;
    printf("time: %f \n", cpu_time_used);
    start = clock();
    for (int i = 0; i < 100000; i++) {
        func2();
    }
    end = clock();
    cpu_time_used = ((double) (end - start))/ CLOCKS_PER_SEC;
    
    printf("time: %f \n", cpu_time_used);
    start = clock();
    for (int i = 0; i < 100000; i++) {
        func3();
    }
    end = clock();
    cpu_time_used = ((double) (end - start))/ CLOCKS_PER_SEC;
    printf("time: %f \n", cpu_time_used);
}
