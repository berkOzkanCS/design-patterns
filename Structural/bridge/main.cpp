#include "bridge.cpp"

int main() {
    Red red;
    Blue blue;
    Square s(&red);
    Circle c(&blue);
    s.draw();
    c.draw();
}