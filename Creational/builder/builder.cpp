#include <iostream>
#include <string>

using namespace std;

class Shed {
    friend class ShedBuilder;

    private:
        string walls;
        string roof;
        string door;
};

class Hut {
    friend class HutBuilder;

    private:
        string walls;
        string roof;
        string door;
        string garden;
};

class Builder {
    public:
        virtual void reset() = 0;
        virtual void buildWalls() = 0;
        virtual void buildRoof() = 0;
        virtual void buildDoor() = 0;
};

class ShedBuilder : public Builder {
    private:
        Shed* shed;
    public:
        void reset() override {
            shed = new Shed();
        }
        void buildWalls() override {
            shed->walls = "wooden walls";
        }
        void buildRoof() override {
            shed->roof = "plank roof";
        }
        void buildDoor() override {
            shed->door = "wooden door";
        }
        Shed* getHouse() {
            std::cout << "Walls: " << shed->walls << "\n";
            std::cout << "Roof: "  << shed->roof  << "\n";
            std::cout << "Door: "  << shed->door  << "\n";
            return shed;
        }
};

class HutBuilder : public Builder{
    private:
        Hut* hut;
    public:
        void reset(){
            hut = new Hut();
        }
        void buildWalls() override {
            hut->walls = "mud walls";
        }
        void buildRoof() override {
            hut->roof = "straw roof";
        }
        void buildDoor() override {
            hut->door = "";
        }
        void buildGarden() {
            hut->garden = "nice garden";
        }
        Hut* getHouse() {
            std::cout << "Walls: " << hut->walls << "\n";
            std::cout << "Roof: "  << hut->roof  << "\n";
            std::cout << "Door: "  << hut->door  << "\n";
            std::cout << "Garden: "  << hut->garden  << "\n";
            return hut;
        }
};

class Director {
    public:
        void buildShed(Builder* builder) {
            builder->reset();
            builder->buildWalls();
            builder->buildRoof();
            builder->buildDoor();
        }
        void buildHut(HutBuilder* builder) {
            builder->reset();
            builder->buildWalls();
            builder->buildRoof();
            builder->buildDoor();
            builder->buildGarden();
        }
};