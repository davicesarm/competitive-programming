s = input().lower()
vogais = "aeiouy"

ns = ""
for c in s:
    if c not in vogais:
        ns += "." + c
        
print(ns)
