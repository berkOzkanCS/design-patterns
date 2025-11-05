#include "abstract-factory.cpp"


int main() {

    FurnitureFactory* f = new VictorianFactory();

    Chair* chair = f->createChair();
    Sofa* sofa = f->createSofa();

    std::cout << "Chair has legs: " << chair->hasLegs() << "\n";
    std::cout << "Sofa can sit: " << sofa->sitOn() << "\n";

    delete chair;
    delete sofa;
    delete f;

    return 0;
}