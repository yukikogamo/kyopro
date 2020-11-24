a, b = gets.split(" ").map(&:to_i)
c = a - 2 * b
 
if c > 0
    puts c
else
    puts 0
end