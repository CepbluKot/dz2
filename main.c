#include <stdio.h>

int sum(int a, int b){
    return a + b;
}

int mult(int a, int b){
    return a * b;
}

int subt(int a, int b){
    return a - b;
}

int divi(int a, int b){
    return a / b;
}

int test(){
    printf("2 + 3 = %d", sum(2,3));
    printf("\n5 * 10 = %d", mult(5,10));
    printf("\n9 - 3 = %d", subt(9,3));
    printf("\n14 / 7 = %d", divi(14,7));
    
}

int main()
{
    print("hello world");

    return 0;
}
