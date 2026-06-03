#ifndef GRAPHICS_DISPLAY_H
#define GRAPHICS_DISPLAY_H

#include "display.h"
#include<vector>

class GraphicalDisplay : public Display {
private:
    void drawLine(int xmin, int xmax, char letter) const;
    void figureLimits(int x0, int y0, int x1, int y1, int yPos, std::vector<double>& limit);
    void getDrawingLocation(int yPos, std::vector<std::pair<int,int>>& vertices, char letter);

public:
    GraphicalDisplay();

    void drawTriangle(int a1, int a2, int b1, int b2) override;
    void drawCircle(int r) override;
    void drawParallelogram(int a1, int a2, int b1, int b2) override;
};

#endif