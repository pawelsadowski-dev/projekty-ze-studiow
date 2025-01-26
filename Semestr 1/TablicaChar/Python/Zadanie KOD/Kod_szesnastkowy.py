"""
autor: Pawel Sadowski
Program konwertuje kod szesnastkowy na kod ASCII i odpowiadający znak
"""
p = []
for i in range(2):
    znak = input(f"Podaj znak {i+1}: ").strip().upper()
    p.append(znak)

d = 0
pow = 1

for i in range(1, -1, -1):
    if '0' <= p[i] <= '9':
        d += (ord(p[i]) - ord('0')) * pow
    elif 'A' <= p[i] <= 'F':
        d += (ord(p[i]) - ord('A') + 10) * pow
    pow *= 16


print(d)
print(chr(d))
