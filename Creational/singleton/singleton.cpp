#include <iostream>

using namespace std;

class Database {
    private:
        static Database* instance;

        Database() {
            cout << "Connecting to database...\n";
        }
    
    public:
        static Database* getInstance() {
            if (instance == nullptr)
                return new Database();
            return instance;
        }    
        void greet() { cout << "Hello\n"; }
};