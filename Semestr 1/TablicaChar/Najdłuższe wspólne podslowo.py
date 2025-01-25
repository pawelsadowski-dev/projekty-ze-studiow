"""
autor: Paweł Sadowski
    Program służacy do wyszukania najdłuższego wspólnego podsłowa dwóch wyrazów
"""

s_1 = str(input("Podaj pierwszy wyraz: "))
s_2 = str(input("Podaj pierwszy wyraz: "))
max_len = 0

for i in range(len(s_1)):
    for j in range(len(s_2)):
        pod =  0
        while (pod + i < len(s_1)) and (pod + j < len(s_2)) and (s_1[i + pod] == s_2[j + pod]):
            pod += 1
            if pod > max_len:
                max_len = pod
print(max_len)
