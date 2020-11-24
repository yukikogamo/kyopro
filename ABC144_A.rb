a, b = gets.split(" ").map(& :to_i)
 
if a > 0 && a < 10 && b > 0 && b < 10
    puts a * b
else
    puts -1
end