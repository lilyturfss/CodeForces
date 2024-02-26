# Codeforces Round 806 (Div. 4) Prob (a) Yes or YES?
def yes(n,s):
    for i in range(n):
        if "yes" in s[i].lower():
            print("YES")
        else:
            print("NO")
n = int(input())
strings = []
for i in range(n):
    s = input()
    strings.append(s)
yes(n,strings)
