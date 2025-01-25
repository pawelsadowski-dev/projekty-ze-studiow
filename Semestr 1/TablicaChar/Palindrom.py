"""
autor: Paweł Sadowski
    Program służacy do wyszukania najdłuższego wspólnego podsłowa dwóch wyrazów
"""

s_1 = str(input("Podaj pierwszy wyraz: "))
s = ""

for i in s_1 :
    if i != ' ':
        s += i


i = 0
j = len(s)
t = True
while (i < j):
    if s[i].lower() != s[j-1].lower():
        print("Nie jest palindrom")
        t = False
        break
    i += 1
    j -= 1
if t:
    print("Jest palindrom");
