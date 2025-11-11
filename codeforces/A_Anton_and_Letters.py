a = set(input().strip("{").strip("}").split(", "))
if (len(a) == 1 and '' in a):
    print(0)
else:
    print(len(a))
