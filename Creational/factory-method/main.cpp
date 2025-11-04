#include "factory.cpp"

int main() {

    Logistics* l;
    l = new RoadLogistics();
    l = new SeaLogistics();

    l->doDelivery();

    delete l;

    return 0;
}