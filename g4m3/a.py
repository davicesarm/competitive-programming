n = int(input())

m = []

for i in range(n):
    linha = list(map(int, input().split()))
    m.append(linha)

print(*m, sep="\n")
