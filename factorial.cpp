#include <iostream>
typedef unsigned long long int ullint;

// unsigned long long int = ullint
ullint iterative_factorial(ullint n) {
    ullint r = 1;
    for (ullint i = 2; i <= n; i++) {
        r *= i;
    }
    return r;
}