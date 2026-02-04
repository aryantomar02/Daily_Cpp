#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;

// PART 1: The Abstract Base Class (The Interface)
struct Instrument
{
    // Virtual destructor: ensures 'delete' cleans up Bond/Stock memory, not just Instrument memory
    virtual ~Instrument() = default;

    // Pure virtual functions (= 0): forces children to implement these
    virtual double price() const = 0;
    virtual std::string name() const = 0;
};

// PART 2: Derived Class (Bond)
struct Bond : public Instrument
{
    double faceValue, intrestRate;

    // Member Initialization List: Efficient way to set data
    Bond(double fv, double intr) : faceValue{fv} , intrestRate{intr} {}

    // 'override' tells the compiler to double-check this matches the base signature
    double price() const override {
        return faceValue * (1 + intrestRate);
    }
    
    std::string name() const override {
        return "Bond";
    }
};

// PART 3: Derived Class (Stock)
struct Stock : public Instrument
{
    double currentPrice, shares;

    Stock(double cp, double sh) : currentPrice{cp} , shares{sh} {}

    double price() const override {
        return currentPrice * shares;
    }
    
    std::string name() const override {
        return "Stock";
    }
};

int main() {
    // vector stores pointers to prevent "Object Slicing"
    std::vector<Instrument*> portfolio;

    // 'new' allocates memory on the HEAP so objects live until we manually delete them
    portfolio.push_back(new Bond(1000, 0.05));
    portfolio.push_back(new Stock(150.0, 10));

    // LOOP 1: Runtime Polymorphism in action
    // 'inst' is a base pointer, but calls the derived (Bond/Stock) functions
    for(Instrument* inst : portfolio) {
        cout << "Instrument: " << inst->name() << " | Price: " << inst->price() << endl;
    }

    // LOOP 2: Memory Management
    // We must manually free everything we created with 'new'
    for(Instrument* inst : portfolio) {
        delete inst; 
    }
    portfolio.clear();
    
    return 0;
}