 #ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <iostream>
using namespace std;

template <typename T>
struct Stack {
private:
    T* elements;
    int capacity;
    int topIndex;

public:
    // Constructor with size parameter
    Stack(int size) {
        capacity = size;
        topIndex = -1;
        elements = new T[capacity];
    }

    // Default constructor
    Stack() {
        capacity = 100;
        topIndex = -1;
        elements = new T[capacity];
    }

    // Destructor
    ~Stack() {
        delete[] elements;
    }

    // Push method
    void push(const T& element) {
        if (topIndex + 1 == capacity) {
            cout << "Stack overflow: Cannot push onto a full stack." << endl;
            return;
        }
        elements[++topIndex] = element;
    }

    // Pop method
    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow: Cannot pop from an empty stack." << endl;
            return;
        }
        --topIndex;
    }

    // Peek method
    T peek() const {
        if (isEmpty()) {
            cout << "Stack is empty: No top element." << endl;
            return T(); // Return default value
        }
        return elements[topIndex];
    }

    // Check if the stack is empty
    bool isEmpty() const {
        return topIndex == -1;
    }

    // Get the current size of the stack
    int size() const {
        return topIndex + 1;
    }
};

#endif // STACK_H_INCLUDED
