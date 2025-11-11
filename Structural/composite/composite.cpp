#include <iostream>
#include <vector>

class Component {
    public:
        virtual int getWeight() = 0;
        // virtual ~Component() {};
};

class Product : public Component{
    private:
        int weight;
    public:
        Product() : weight(0) {}
        Product(int w) : weight(w) {}
        int getWeight() override {
            return weight;
        }
};

class Box : public Component {
    private:
        std::vector<Component*> items;
    public:
        void add(Component* i) {
            items.push_back(i);
        }
        int getWeight() override {
            int total = 0;
            for (auto i : items) {
                total += i->getWeight();
            }
            return total;
        }
        
};