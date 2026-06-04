#include "graphicalDisplay.h"

#include<algorithm>
#include<iostream>
#include<cmath>

#include "myexceptions.h"
#include "triangle.h"

//Konstruktor domyślny
GraphicalDisplay::GraphicalDisplay() {}

void GraphicalDisplay::drawLine(int xmin,int xmax, char letter) const {
    //Uzupełnianie spacji do pierwszego wystąpienia krawędzi figury
    for (int x=0;x<xmin;x++) {
        std::cout<<" ";
    }

    //Uzupełnienie literą do zakończenia drugiej krawędzi
    for (int x = xmin; x <= xmax; ++x) {
        std::cout << letter;
    }
    std::cout << std::endl;
}

double linearInterpolation(int x0, int y0, int x1, int y1, int yPos) {
    return x0 + static_cast<double>(yPos-y0)*(x1-x0)/(y1-y0);
}

//funkcja wyznacza miejsca przecięć skanowanego wiersza (yPos) z krawędziami naszej figury
void GraphicalDisplay::figureLimits(int x0, int y0, int x1, int y1, int yPos, std::vector<double>& limit) {
    //Sytuacja w której wierzchołki znajdują się w pionowej linii
    if (y0==y1) {
        //Sytuacja w której skanowany wiersz dodatkowo jest taki sam jak y0
        if (yPos==y0) {
            limit.push_back(x0);
            limit.push_back(x1);
        }
        return;
    }

    int yMin = std::min(y0,y1);
    int yMax = std::max(y0,y1);
    //Sytuacja w której badamy poza zakresem
    if (yPos<yMin || yPos>yMax)
        return;

    //Jeśeli poprzednie opcje się nie sprawdziły to wykorzystujemy interpolację liniową do obliczenia przecięć.
    limit.push_back(linearInterpolation(x0,y0,x1,y1,yPos));

}

void GraphicalDisplay::getDrawingLocation(int yPos, std::vector<std::pair<int,int>>& vertices, char letter) {
    std::vector<double> limit;

    //określenie liczby wierzchołków
    int n = static_cast<int>(vertices.size());
    //przypisywanie wierzchołków do zmiennych
    for (int i=0; i<n; i++) {
        int x0 = vertices[i].first;
        int y0 = vertices[i].second;
        int x1 = vertices[(i+1)%n].first;
        int y1 = vertices[(i+1)%n].second;
        //%n sprawia że nie wyjdziemy po za zakres tylko porównamy ostatni z pierwszym

        //Podajemy wierzchołki żeby wyznaczyć jak daleko ma rysować figurę w danym wierszu
        figureLimits(x0,y0,x1,y1,yPos,limit);
    }

    //Sytuacja, w której nasz skan nie przecina figury
    if (limit.empty())
        return;

    //Ustalenie początku i końca dla figury w tej linii
    double xMin = limit[0];
    double xMax = limit[0];
    for (double x : limit) {
        xMin = std::min(xMin,x);
        xMax = std::max(xMax,x);
    }

    //Wartości do których ma rysować powinny być całkowite
    xMin = static_cast<int>(ceil(xMin));
    xMax = static_cast<int>(floor(xMax));

    GraphicalDisplay::drawLine(xMin,xMax,'t');
}

void GraphicalDisplay::drawTriangle(int a1, int a2, int b1, int b2) {
    Validation::validateVectors(a1, a2, b1, b2);

    std::vector<std::pair<int,int>> vertices = {{0,0},{a1,a2},{b1,b2}};

    int ymin{0}, ymax{0};

    //Pętla sprawdzająca maksymalny zakres wartości y
    for (auto &v : vertices) {
        ymin = std::min(ymin,v.second);
        ymax = std::max(ymax,v.second);
        // std::cout<<"min: "<<ymin<<" max: "<<ymax<<std::endl; //DEBUG
    }

    for (int y = ymax; y>=ymin; y--) {
        getDrawingLocation(y, vertices, 't');
    }
}

void GraphicalDisplay::drawCircle(int r){
    Validation::validateRadius(r);
};

void GraphicalDisplay::drawParallelogram(int a1, int a2, int b1, int b2) {
    Validation::validateVectors(a1, a2, b1, b2);
}
