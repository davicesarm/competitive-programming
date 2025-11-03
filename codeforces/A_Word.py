s = input()

diff = 0
for c in s:
    if c.isupper():
        diff += 1
    else:
        diff -= 1
        
if diff > 0:
    print(s.upper())
else:
    print(s.lower())