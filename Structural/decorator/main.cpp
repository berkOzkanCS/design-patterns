#include "decorator.cpp"

int main() {
   Notifier base("Bob");
   FacebookDecorator fb(base);
   WhatsappDecorator wa(fb);
   wa.send("bababadoo");
}