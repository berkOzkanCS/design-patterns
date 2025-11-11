#include "composite.cpp"

int main() {
    Box* b = new Box();
    Product* p = new Product(10);
    Product* p1 = new Product(10);
    Product* p2 = new Product(10);
    Box* b1 = new Box();

    b->add(p);
    b->add(p1);
    b->add(b1);
    b1->add(p2);

    std::cout << b1->getWeight() << "\n";
    std::cout << b->getWeight() << "\n";
}