#include "balls.h"
#include "quad_tree.h"
#include <iostream>

int main()
{
    QuadTree::Test();
    Balls balls("EveLigh engine", 800, 600);
    balls.Start();

    return 0;
}
