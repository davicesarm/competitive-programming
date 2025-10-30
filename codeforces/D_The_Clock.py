t = int(input())
for _ in range(t):
    horario, n = input().split()
    h, m = map(int, horario.split(':'))
    n = int(n)
    ans = 0 
    
    while True: 
        minu = m + n
        
        h = (h + minu // 60) % 24
        m = minu % 60
        
        hora = f"{h:02}:{m:02}" 
        if (hora == hora[::-1]):
            ans += 1
        
        if hora == horario:
            break
        
    print(ans)