s = gets.chomp
hug = 0
(s.length / 2).times do |i|
  if s[i] != s[-(i + 1)]
    hug += 1
  end
end
 
puts("#{hug}")