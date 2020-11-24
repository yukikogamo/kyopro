s = input()
t = input()
ans = False

for i in range(0, len(s)):
  if s == t:
    ans = True
  else:
    s = s[-1] + s[:-1]
if ans:
  print("Yes")
else:
  print("No")