#include "builder.cpp"

int main() {
    Director* d = new Director();

    HutBuilder* hbuilder = new HutBuilder();
    d->buildHut(hbuilder);
    Hut* hut = hbuilder->getHouse();

    ShedBuilder* sbuilder = new ShedBuilder();
    d->buildShed(sbuilder);
    Shed* shed = sbuilder->getHouse();

    return 0;
}