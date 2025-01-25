"""
autor: Paweł Sadowski
Program służący do szyfrowania i deszyfrowania tekstu za pomocą szyfru Cezara.
"""


x = int(input("Podaj 1 (szyfrowanie) lub 2 (deszyfrowanie): "))
y = int(input("Podaj wartość przesunięcia (klucz): "))
slowo = input("Podaj tekst: ")


def szyfr_cezara(wyraz, przesuniecie):
    wynik = ""
    for znak in wyraz:
        if znak.isalpha():
            if znak.islower():
                baza = ord('a')
            else:  # Wielkie litery (A-Z)
                baza = ord('A')
            nowy_znak = chr((ord(znak) - baza + przesuniecie) % 26 + baza)
            wynik += nowy_znak
        else:
            wynik += znak
    return wynik


if x == 1:
    print("Szyfrowanie...")
    zaszyfrowany = szyfr_cezara(slowo, y)
    print(f"Zaszyfrowany tekst: {zaszyfrowany}")
elif x == 2:
    print("Deszyfrowanie...")
    odszyfrowany = szyfr_cezara(slowo, -y)
    print(f"Odszyfrowany tekst: {odszyfrowany}")
else:
    print("Nieprawidłowa opcja. Wybierz 1 lub 2.")
