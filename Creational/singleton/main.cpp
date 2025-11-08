#include "singleton.cpp"

Database* Database::instance = nullptr;

int main() {

    Database* db = Database::getInstance();

    db->greet();

    Database* newDb = Database::getInstance();

    newDb->greet();

    return 0;
}