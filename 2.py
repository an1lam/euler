from fib import fib
def even_fibs_less_than_four_million():
  i = 0
  f = fib(i)
  while f < 4000000:
    i+=1
    f = fib(i)
    if f % 2 == 0:
      yield f

print sum(even_fibs_less_than_four_million())



