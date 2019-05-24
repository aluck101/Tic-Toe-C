#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool primeFunction(int x) //the prime function for task 4
{
    int i;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

int main()
{
    //task 1
    printf("Task 1\n");
    printf("Hello world!\n");
    printf("=================\n");

    //task 2
    printf("Task 2\n");
    int x=20, y=23;
    int z=x*y;
    printf("x*y=%d\n", z);
    printf("=================\n");

    //task 3
    printf("Task 3\n");
    int primes[10]={1,2,3,5,7,11,13,17,19,23};
    int i;
    for(i=0;i<10;i++){
        printf("%d ", primes[i]);
    }
    printf("\n");
    printf("=================\n");

    //task 4
    printf("Task 4\n");
    int num=31;
    int num2=70;

    printf("%d -> %d\n", num, primeFunction(num)); //if the result is one, it means that the number is prime, otherwise the result is 0
    printf("%d -> %d\n", num2, primeFunction(num2));
    printf("=================\n");

    //task 5
    printf("Task 5\n");
    int kmph=42;
    float mph=kmph/1.60934;
    printf("%d kmph = %f mph\n", kmph, mph);
    printf("=================\n");

    //task 6
    printf("Task 6\n");
    scanf("%d", &kmph);
    mph=kmph/1.60934;
    printf("%d kmph = %f mph\n", kmph, mph);
    printf("=================\n");

    //task 7
    printf("Task 7\n");

    printf("   ######  \n");
    printf(" ##      ##\n");
    printf("#          \n");
    printf("#          \n");
    printf("#          \n");
    printf("#          \n");
    printf("#          \n");
    printf(" ##      ##\n");
    printf("   ######  \n");
    printf("=================\n");


    return 0;
}
