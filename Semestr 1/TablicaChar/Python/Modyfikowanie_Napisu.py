"""
autor: Paweł Sadowski
 Program rozwiazujacy modyfikowanie napisu.
   Program pozwala na wykonywanie nast�puj�cych operacji na ci�gu znak�w:
   1. Z - Zamiana wybranego znaku na inny.
   2. D - Doklejenie nowego znaku na ko�cu napisu.
   3. U - Usunięcie określonej liczby znaków z ko�ca napisu.
   4. N - Zakończenie modyfikacji i wypisanie wyniku
"""

s = "Python"
dlug = len(s)

s = input("Podaj początkowy ciąg znaków: ")

while True:
    print(f"Obecny napis: {s}")
    print("Wybierz operację:")
    print("Z - Zamiana wybranego znaku na inny")
    print("D - Doklejenie nowego znaku na końcu napisu")
    print("U - Usunięcie określonej liczby znaków z końca napisu")
    print("N - Zakończenie modyfikacji i wypisanie wyniku")
    operacja = input("Wprowadź operację: ").upper()

    if operacja == "Z":
        try:
            stary_znak = str(input("Podaj znak, który chcesz zamienić: "))
            nowy_znak = str(input("Podaj nowy znak: "))
            if stary_znak in s:
                s = s.replace(stary_znak, nowy_znak)
            else:
                print("Znak do zamiany nie został znaleziony w napisie.")
        except ValueError:
            print("Podano nieprawidłową wartość.")
            
    elif operacja == "D":
        nowy_znak = input("Podaj znak do dodania: ")
        s += nowy_znak

    elif operacja == "U":
        try:
            liczba = int(input("Podaj liczbę znaków do usunięcia z końca napisu: "))
            if liczba >= 0:
                s = s[:-liczba] if liczba <= len(s) else ""
            else:
                print("Liczba musi być większa lub równa 0.")
        except ValueError:
            print("Podano nieprawidłową wartość liczby.")

    elif operacja == "N":
        print(f"Zakończono. Ostateczny napis: {s}")
        break

    else:
        print("Nieznana operacja. Spróbuj ponownie.")


