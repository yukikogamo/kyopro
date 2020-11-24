s = gets.split.map(&:to_i).reduce:+
puts s  >21 ? "bust" : "win"