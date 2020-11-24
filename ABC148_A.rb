n = gets.to_i
s, t = gets.split.map(&:chars)
n.times{|i|
  print s[i]+t[i]
}