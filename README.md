# Projekt – Biblioteka do wyświetlania kształtów

## Opis projektu

Projekt przedstawia prostą bibliotekę do wyświetlania kształtów w konsoli. Program umożliwia rysowanie podstawowych figur: koła, trójkąta i równoległoboku. Dodatkowo zaimplementowano klasę `ComplexShape`, która pozwala tworzyć kształt złożony z maksymalnie pięciu innych figur.

Głównym założeniem projektu jest oddzielenie kształtu od sposobu jego wyświetlania. Oznacza to, że klasy reprezentujące figury nie wiedzą dokładnie, czy mają zostać narysowane tekstowo, czy graficznie. Za sposób wyświetlania odpowiadają osobne klasy.

## Zastosowane elementy programowania obiektowego

W projekcie wykorzystano:

* dziedziczenie,
* klasy abstrakcyjne,
* polimorfizm,
* wskaźniki,
* własne wyjątki,
* szablon klasy,
* dynamiczną zmianę sposobu wyświetlania.

Klasa `Display` jest interfejsem, z którego dziedziczą klasy `TextDisplay` oraz `GraphicalDisplay`. Klasa `Shape` jest klasą bazową dla wszystkich kształtów. Każdy obiekt typu `Shape` przechowuje wskaźnik na obiekt `Display`, dzięki czemu może korzystać z różnych sposobów rysowania.

## Struktura klas

### Display

Klasa abstrakcyjna odpowiedzialna za deklarację metod rysowania:

* `drawTriangle()`,
* `drawCircle()`,
* `drawParallelogram()`.

### TextDisplay

Klasa wyświetlająca figury w formie tekstowej. Zamiast rysunku wypisuje komunikat opisujący rysowany kształt.

### GraphicalDisplay

Klasa rysująca figury w konsoli za pomocą znaków:

* `t` dla trójkąta,
* `c` dla koła,
* `p` dla równoległoboku.

### Shape

Klasa bazowa dla wszystkich figur. Przechowuje wskaźnik na aktualny sposób wyświetlania oraz posiada metodę `changeDisplay()`, która pozwala zmienić sposób rysowania w trakcie działania programu.

### Circle

Klasa reprezentująca koło. Przechowuje promień i przekazuje rysowanie do aktualnego obiektu `Display`.

### Triangle

Klasa reprezentująca trójkąt. Trójkąt jest opisany za pomocą dwóch wektorów `(a1, a2)` oraz `(b1, b2)`.

### Parallelogram

Klasa reprezentująca równoległobok. Podobnie jak trójkąt, opiera się na dwóch wektorach.

### ComplexShape

Klasa reprezentująca kształt złożony. Pozwala dodać maksymalnie pięć figur i wyświetla je kolejno w takiej kolejności, w jakiej zostały dodane.

W klasie tej wykorzystano szablon `FixedArray`, który odpowiada za przechowywanie ograniczonej liczby elementów.

### MyExceptions

Pliki `myexceptions.h` i `myexceptions.cpp` zawierają własne klasy wyjątków oraz klasę `Validation`, która sprawdza poprawność danych wejściowych.

Obsługiwane są między innymi błędy:

* niepoprawny promień koła,
* niepoprawne wartości wektorów,
* pusty wskaźnik na `Display`,
* pusty wskaźnik na `Shape`.

## Sposób działania programu

Na początku tworzone są obiekty odpowiedzialne za sposób wyświetlania:

```cpp
Display* w1 = new GraphicalDisplay();
Display* w2 = new TextDisplay();
```

Następnie tworzone są figury, które otrzymują wybrany sposób wyświetlania:

```cpp
Shape* o1 = new Triangle(w1, 3, 2, 2, -2);
Shape* o2 = new Parallelogram(w1, 3, 2, 2, -2);
Shape* o3 = new Circle(w1, 5);
```

Po wywołaniu metody `draw()` figury są rysowane przy pomocy aktualnie ustawionej klasy `Display`.

Program umożliwia również zmianę sposobu wyświetlania:

```cpp
o1->changeDisplay(w2);
```

Po tej operacji ten sam obiekt może zostać wyświetlony w inny sposób.

## Kompilacja programu

Przykładowa komenda kompilacji z folderu `SourceFiles`:

```bash
g++ -I../Headers main.cpp display.cpp textDisplay.cpp graphicalDisplay.cpp shape.cpp circle.cpp triangle.cpp parallelogram.cpp complexShape.cpp myexceptions.cpp -o program
```

Uruchomienie programu:

```bash
./program
```

W systemie Windows:

```bash
.\program.exe
```

## Wnioski

Projekt pokazuje praktyczne zastosowanie polimorfizmu i dziedziczenia w C++. Dzięki oddzieleniu klas kształtów od klas wyświetlających program jest elastyczny i łatwy do rozbudowy. Można dodać nowy sposób wyświetlania bez zmieniania klas figur.

Najważniejszym elementem projektu jest to, że obiekty `Circle`, `Triangle` i `Parallelogram` odpowiadają za przechowywanie danych o figurze, natomiast klasy `TextDisplay` i `GraphicalDisplay` odpowiadają za sposób jej narysowania.
