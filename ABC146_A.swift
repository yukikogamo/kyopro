var week: [String: Int]
week = [:]
week["SUN"] = 7
week["MON"] = 6
week["TUE"] = 5
week["WED"] = 4
week["THU"] = 3
week["FRI"] = 2
week["SAT"] = 1

let s = readLine()!
print(week[s]!)