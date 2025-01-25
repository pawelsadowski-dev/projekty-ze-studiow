"""
autor: Pawel Sadowski
Program sprawdza czy wprowadzona przez u�ytkownika dana jest:
- wielka litera
- mala litera
- cyfra
- znakiem specjalnym
"""

s = str(input("Podaj s: "))

if s.isupper():
    print("S to wielka litera")
elif s.islower():
    print("S to mala litera")
elif s.isdigit():
    print("S to cyfra")
else:
    if not s.isalnum():
        print("S to znaki specjalnym")
