#ifndef COMPLIX_H_INCLUDED
#define COMPLIX_H_INCLUDED

struct Complix {
private:
    int real;
    int imag;
    int *values; // (إذا كنت بحاجة إلى هذه المصفوفة)

public:
    // Constructors
    Complix();
    Complix(int r, int i);

    // Getter and setter functions
    void print();
    int getReal();
    int getImag();
    void setReal(int r);
    void setImag(int i);

    // Add functions
    static Complix Add(Complix a, Complix b);
    static Complix Add(Complix a);

    // Operator overloading
    Complix operator+(Complix a);   // Complix + Complix
    Complix operator+(int x);       // Complix + int
    Complix operator++();           // Prefix ++Complix
    Complix operator++(int);        // Postfix Complix++
    Complix operator--();           // Prefix --Complix
    Complix operator--(int);        // Postfix Complix--

    // Comparison operators
    bool operator==(Complix a);     // Complix == Complix
    bool operator!=(Complix a);    // Complix != Complix

    // Assignment operator
    Complix operator=(Complix a);

    // Friend function for Complix + Complix
    // friend Complix operator+(Complix a, Complix b); // Complix + Complix
    friend Complix operator+(int num, const Complix &complix); // int + Complix 

    // Destructor (لإزالة الذاكرة إذا كنت تستخدم مصفوفة ديناميكية)
    ~Complix();
};

// Standalone function declarations
Complix operator+(const Complix &firstComplix, const Complix &secondComplix); // int + Complix
Complix operator+(int num, const Complix &complix);                          // Complix + int
Complix operator+(const Complix &complix, int num);                          // Complix + int

#endif // COMPLIX_H_INCLUDED
