#include "prototype.cpp"

int main() {

    Rectangle* r1 = new Rectangle();
    r1->print();
    Rectangle* r2 = dynamic_cast<Rectangle*>(r1->clone());
    r2->print();

    return 0;
}