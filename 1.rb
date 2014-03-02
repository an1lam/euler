sum = (1..999).inject(0){ |sum, x| x % 5 == 0 ? sum + x : sum }
puts sum
