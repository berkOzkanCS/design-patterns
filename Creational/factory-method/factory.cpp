#include <iostream>
#include <typeinfo>
#include <cxxabi.h>

// product 
class Transport {
    public:
        virtual bool deliver() = 0;
        virtual void setSpeed(int s) = 0;
        void nonVirtual() {
            std::cout << "Do nothing\n";
        }
    protected:
        double speed;
};

class Truck: public Transport {
    public:
        bool deliver() {
            std::cout << "Delivering by truck.\n";
            return true; // successful delivery
        }
        void setSpeed(int s) {
            speed = s;
            std::cout << "Truck traveling at " << speed << " km/hr.\n" ;
        }
};

class Boat: public Transport {
    public:
        bool deliver() {
            std::cout << "Delivering by boat.\n";
            return true; // successful delivery
        }
        void setSpeed(int s) {
            speed = s;
            std::cout << "Truck traveling at " << speed << " knots.\n" ;
        }
};



// factory
class Logistics {
    public:
        virtual Transport* createTransport() = 0;

        void doDelivery() {
            Transport* t = createTransport();

            // int status;
            // char* realname = abi::__cxa_demangle(typeid(t).name(), 0, 0, &status);
            // std::cout << realname << '\n';
            // std::free(realname);

            t->setSpeed(50);
            t->deliver();
        }
};

class RoadLogistics: public Logistics {
    Transport* createTransport() override {
        return new Truck();
    }
};

class SeaLogistics: public Logistics {
    Transport* createTransport() override {
        return new Boat();
    }
};