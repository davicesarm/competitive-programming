a = " ".join(x if len(x) >= 1 else "" for x in input().replace("WUB", " ").strip().split())
print(a)