#include <iostream>
typedef unsigned long long int ullint;

// unsigned long long int = ullint
ullint recursive_factorial(ullint n) {
    if(n == 0) return 1;
    else return n * recursive_factorial(n-1);
}

// unsigned long long int = ullint
ullint iterative_factorial(ullint n) {
    ullint r = 1;
    for (ullint i = 2; i <= n; i++) {
        r *= i;
    }
    return r;
}

// with int data type
int recursive_factorial(int n) {
    if(n == 0) return 1;
    else return n * recursive_factorial(n-1);
}

// with int data type
int iterative_factorial(int n) {
    int r = 1;
    for (int i = 2; i <= n; i++) {
        r *= i;
    }
    return r;
}

// ---------WRONG RECURSIVE FUNCTIONS------------

// If there is no base case, the loop does not know where to stop.
int recursive_factorial(int n) {
    return n * recursive_factorial(n-1);
}

// This function also has a base case but due to a logic error, the base case is never satisfied.
// as long as n > 0
int recursive_factorial(int n) {
    if(n == 0) return 1;
    else return n * recursive_factorial(n+1);
}

// -------------------------------------