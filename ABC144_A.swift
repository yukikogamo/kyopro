let arr = readLine()!.characters.split{$0==" "}.map { Int(String($0))! }

let a = arr[0]
let b = arr[1]
if a > 9 || b > 9 {
	print("-1")
} else {
	print("\(a * b)")
}