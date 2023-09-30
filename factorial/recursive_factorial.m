function result = recursive_factorial(n)
    if n == 0
        result = 1;
    else
        result = n * recursive_factorial(n - 1);
    end
end