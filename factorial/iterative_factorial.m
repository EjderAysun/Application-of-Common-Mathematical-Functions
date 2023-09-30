function result = iterative_factorial(n)
    r = 1;
    for i = 2:n
        r = r * i;
    end
    result = r;
end