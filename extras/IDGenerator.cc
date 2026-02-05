#include <iostream>
using std::cout;
using std::endl;

class IDGenerator
{
private:
    int id;
    // next_id has lifetime of whole program
    static int next_id; // neeaded so program remenbers the privious id 
public:
    IDGenerator() {
        id = next_id++;
    }
    int getID() const {
        return id;
    }

    static int getTotalCreated() {
        return next_id;
    }
};

int IDGenerator::next_id = 1;

int main() {
    IDGenerator a;
    IDGenerator b;
    IDGenerator c;// if hundread object will be created nothing will change 

    cout << "Object a ID: " << a.getID() << endl;
    cout << "Object b ID: " << b.getID() << endl;
    cout << "Object c ID: " << c.getID() << endl;

    cout<< "next id to be generated: " << IDGenerator::getTotalCreated() << endl;

    return 0;
}