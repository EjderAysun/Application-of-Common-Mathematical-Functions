recursive_factorial <- function(n) {
    if (n == 1) return 1
    else return n * recursive_factorial(n - 1)
}