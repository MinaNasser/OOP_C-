#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
    // Testing the stack with integers
    Stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    cout << "Integer Stack - Top: " << intStack.peek() << endl;
    intStack.pop();
    cout << "Integer Stack - Top after pop: " << intStack.peek() << endl;

    // Testing the stack with floating-point numbers
    Stack<float> floatStack;
    floatStack.push(1.1);
    floatStack.push(2.2);
    floatStack.push(3.3);
    cout << "Float Stack - Top: " << floatStack.peek() << endl;
    floatStack.pop();
    cout << "Float Stack - Top after pop: " << floatStack.peek() << endl;

    // Testing the stack with strings
    Stack<string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");
    stringStack.push("C++");
    cout << "String Stack - Top: " << stringStack.peek() << endl;
    stringStack.pop();
    cout << "String Stack - Top after pop: " << stringStack.peek() << endl;

    return 0;
}
