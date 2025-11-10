#include <iostream>

class Color {
public:
    virtual void applyColor() = 0;
    virtual ~Color() = default;
};

class Red : public Color {
public:
    void applyColor() override { std::cout << "red\n"; }
};

class Blue : public Color {
public:
    void applyColor() override { std::cout << "blue\n"; }
};

class Shape {
protected:
    Color* color;
public:
    Shape(Color* c) : color(c) {}
    virtual void draw() = 0;
    virtual ~Shape() = default;
};

class Square : public Shape {
public:
    Square(Color* c) : Shape(c) {}
    void draw() override {
        std::cout << "Square filled with ";
        color->applyColor();
    }
};

class Circle : public Shape {
public:
    Circle(Color* c) : Shape(c) {}
    void draw() override {
        std::cout << "Circle filled with ";
        color->applyColor();
    }
};


