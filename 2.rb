last = 1
fib = 1
sum = 0
while fib < 4000000 do
  if fib % 2 == 0
    sum += fib
  end
  temp = fib
  fib += last
  last = temp
end
puts sum
