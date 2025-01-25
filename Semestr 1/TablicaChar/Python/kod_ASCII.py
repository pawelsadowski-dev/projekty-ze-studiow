'''
autor: Paweł Sadowski
Program wypisuje wartrosc ASCII dla liczb calkowitych z zadanego zakresu
'''
n_p = 0
n_k = 0

n_p = int(input("Podaj początkową liczbę: "))
n_k = int(input("Podaj końcową liczbę: "))

for i in range(n_p, n_k + 1):
    print(i, ' - ', chr(i))
