#include <iostream>
#include <string>
using namespace std;

class INotifier {
    public:
        virtual void send(string msg) = 0;
};

class Notifier : public INotifier {
    private:
        string uname;
    public:
        Notifier(const string n) {
            uname = n;
        }

        void send(string msg) override {
            cout << "Notification: " << msg << " to: " << uname << endl;
        }
};

class BaseDecorator : public INotifier {
    private:
        INotifier* wrapee;
    public:
        BaseDecorator(INotifier& w) {
            wrapee = &w;
        }

        void send(string msg) override {
            wrapee->send(msg);
        }
};

class FacebookDecorator : public BaseDecorator {
    public:
        FacebookDecorator(INotifier& w) : BaseDecorator(w) {}
        void send(string msg) override {
            BaseDecorator::send(msg);
            cout << "Facebook Notification: " << msg << endl;
        }
};


class WhatsappDecorator : public BaseDecorator {
    public:
        WhatsappDecorator(INotifier& w) : BaseDecorator(w) {}
        void send(string msg) override {
            BaseDecorator::send(msg);
            cout << "WhatsApp Notification: " << msg << endl;
        }
};