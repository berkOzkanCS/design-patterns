#include <iostream>

// products
class Chair {
    public:
        virtual bool hasLegs() = 0;
        virtual bool sitOn() = 0;
};

class VictorianChair: public Chair {
    public:
        bool hasLegs() override {
            return true;
        }
        bool sitOn() override {
            return true;
        }
};

class ModernChair: public Chair {
    public:
        bool hasLegs() override {
            return true;
        }
        bool sitOn() override {
            return true;
        }
};

class Sofa {
    public:
        virtual bool hasLegs() = 0;
        virtual bool sitOn() = 0;
};

class VictorianSofa: public Sofa {
    public:
        bool hasLegs() override {
            return false;
        }
        bool sitOn() override {
            return true;
        }
};

class ModernSofa: public Sofa {
    public:
        bool hasLegs() override {
            return false;
        }
        bool sitOn() override {
            return true;
        }
};

// abstract factory
class FurnitureFactory {
    public:
        virtual Chair* createChair() = 0;
        virtual Sofa* createSofa() = 0;
};

// concrete class
class VictorianFactory: public FurnitureFactory {
    public:
        Chair* createChair() override {
            return new VictorianChair();
        }
        Sofa* createSofa() override {
            return new VictorianSofa();
        }
};

class ModernFactory: public FurnitureFactory {
    public:
        Chair* createChair() override {
            return new ModernChair();
        }
        Sofa* createSofa() override {
            return new ModernSofa();
        }
};
