iterative_factorial <- function(n) {
  r <- 1
  for (i in 2:n) {
    r <- r * i
  }
  return(r)
}