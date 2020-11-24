N, K, M = gets.split.map &:to_i
A = gets.split.map &:to_i
ans = M * N - A.inject(:+).to_f
p ans <= K ? [ans.ceil, 0].max : -1