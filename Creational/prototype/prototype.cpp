#include <iostream>
#include <string>
using namespace std;

class Shape {
    private:
        int x;
        int y;
        string color;
    public:
        Shape() {
            x = 0;
            y = 0;
            color = "black";
        } 

        Shape(Shape* s) {
            x = s->x;
            y = s->y;
            color = s->color;
        }

        ~Shape() {
            
        }

        virtual Shape* clone() = 0;
};

class Rectangle : public Shape {
    private:
        int width;
        int height;

    public:
        Rectangle() : Shape() {
            width = 0;
            height = 0;
        }

        Rectangle(Rectangle& r) : Shape(r) {
            width = r.width;
            height = r.height;
        }

        Shape* clone() override {
            return new Rectangle(*this);
        }

        void print() {
            std::cout << "Width: " << width << ", Height: " << height << std::endl;
        }

};