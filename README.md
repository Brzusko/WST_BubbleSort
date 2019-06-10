


# Praca zaliczeniowa - Algorytmy i struktury danych
<p align="center">
<img width="200" height="200" src="http://ict-silesia.pl/wp-content/uploads/2015/01/logo_wst_duze-e1421407661991.png">
</p>

**Przedmiot:** Algorytmy i Struktury Danych
**Wykładowca:** Dr. Barbara Marszal-Paszek
<p align="right">
<b>Wykonawca: </b> Wojciech Brzuszkiewicz <br>
<b>Data:</b> Czerwiec 2019r
</p>

# Sortowanie 

## Wstęp
### Poprawne działanie/kompilacja kodu
Wszystkie pliki, które są potrzebne do poprawnego działania kodu, są zawarte w folderze `src`
Wymagany jest kompilator, który obsługuje przynajmniej standard C++11 lub wyższy.
Zalecam wygenerowanie własnego projektu w dowolnym IDE, oraz przekopiowanie zawartości plików źródłowych.

**Opis i hierarchia plików źródłowych**:
- /src
	- Babelek.cpp - Plik zawierający funkcje `main()`dla listy
	- Babel.h - Plik zawierający definicje funkcji:
	```cpp
	template<typename T, int size>
	BubbleSort(T* outArray);
	```
	- Babel.cpp - Plik zawierający deklaracje funkcji wypisanych powyżej
###
**Program działa tylko i wyłącznie na obiektach/prymitywach, które mają przeciążany operator logiczny, oraz kontenerach ktore maja przeciążony operator indeksu[]:**
`bool operator >(Typ& lhs, Typ& rhs)`
`T & operator[](size_t point)`
Gdzie T - jest typem kontenera

### Bubble sort opis słowny
Bubble sort jest to jeden z najprostszych i najstarszych algorytmów sortujących. Cechuję się dosyć wolnym czasem wykonania sortowania, więc zaleca się stosowanie przy małych zbiorach elementów. Sortuję on porównując parę kluczy, gdy pierwszy klucz jest większy od następnego w parze. Algorytm zamienia miejscami klucze.

### Pseudokod <br>
![](https://i.imgur.com/rsw9HSq.png)

## Implementacja
Algorytm sortujący został zaimplementowany w języku C++, używając funkcji szablonowych dostępnych w standardzie języka `C++ 11`

**Kod funkcji Bubble Sort**
```cpp
template<typename T, int size>
void BubbleSort(T* outArray) {
	for (int i = 1; i < size; i++) {
		for (int j = 0; j < size - i; j++) {
			if (outArray[j] > outArray[j + 1])
				std::swap(outArray[j], outArray[j + 1]);
		}
	}
};
```
Powyższa funkcja wczytuje adres kontenera i wykonuje na nim algorytm opisany powyżej.

### Złożoność obliczeniowa algorytmu:
![](https://i.imgur.com/RKqidjv.png)
Gdzie "Type" to typ kontenera.

## Test algorytmu
Wykonałem prosty test tego algorytmu, tworząc prostą tablice z 6 elementami. Program sortuję ową tablicę i później wyświetla wynik w konsoli/terminalu.

**Funkcja main()**
```cpp
#include <iostream>
#include "Bombel.h"

int main()
{
	int array[6]{ 2,19,4,42,1,3 };
	BubbleSort<int, sizeof(array) / sizeof(int)>(array);
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
		std::cout << array[i] << std::endl;
}
```
Jak widać, na wejściu mamy nieposortowaną tablice z liczbami całkowitymi. Jeśli algorytm działa poprawnie, powinienem otrzymać na wyjściu posortowaną tablicę.

**Wynik w konsoli/terminalu:**
![](https://i.imgur.com/zNGXD9A.png)

## Podsumowanie
Tak jak wspomniałem na wstępie, jest to mało wydajny algorytm sortujący. Gdzie w optymistycznym, oraz pesymistycznym przypadku jego klasa złożoności jest taka sama.
Wynosi ona **O(n^2)**.

Jak komuś zależy na szybkiej i prostej implementacji algorytmu sortującego, może użyć właśnie tego Bubble Sort'a. Jednakże nie zalecam używanie go przy dużej ilości danych wejściowych bcs. sortowanie takiego zbioru, zajmie dużo czasu. Istnieją o wiele szybsze algorytmy sortujące, więc zalecam przestudiowanie właśnie nich.
