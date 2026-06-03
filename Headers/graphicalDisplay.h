#ifndef GRAPHICS_DISPLAY_H
#define GRAPHICS_DISPLAY_H

#include "display.h"

class GraphicalDisplay : public Display {
private:
    void drawLine(int xmin, int xmax, char letter) const;

public:
    GraphicalDisplay();

    void drawTriangle(int a1, int a2, int b1, int b2) override;
    void drawCircle(int r) override;
    void drawParallelogram(int a1, int a2, int b1, int b2) override;
};

#endif

