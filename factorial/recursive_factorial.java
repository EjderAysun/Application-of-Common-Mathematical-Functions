class Factorial {
    int recursive_factorial(int n) {
        if(n == 0) return 1;
        else return n * recursive_factorial(n-1);
    }
}