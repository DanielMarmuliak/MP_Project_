#ifndef GRAPHICS_DISPLAY_H
#define GRAPHICS_DISPLAY_H

#include "display.h"
#include<vector>

/*The function calculates the linear interpolation for two points in the tested yPos
 * @param x0 - x coordinate for the first vertex
 * @param y0 - y coordinate for the first vertex
 * @param x1 - x coordinate for the second vertex
 * @param y1 - y coordinate for the second vertex
 * @param yPos - current row
 * @returns value of linear interpolation
 */
double linearInterpolation(int x0, int y0, int x1, int y1, int yPos);

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