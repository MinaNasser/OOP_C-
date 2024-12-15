// #include <iostream>

// #include "Stack.h"

// template <typename T>
// Stack<T>::Stack(int size){
//     this.capacity=size;
//     this.topIndex=-1
//     elements = new T[capacity];
// }

// // Default constructor (no default parameter here)
// template <typename T>
// Stack<T>::Stack(){
//     this.capacity=100;
//     this.topIndex=-1
//     elements = new T[capacity];
// }

// Stack<T>:: ~Stack() {
//     delete[] elements;
//     }

// void Stack<T>:: push(T &element) {
//   if (topIndex + 1 == capacity) {
//     cout << "Stack overflow: Cannot push onto a full stack." << endl;
//     return;
//   }
//   elements[++topIndex] = element;
// }
// void Stack<T>:: pop() {
//   if (isEmpty()) {
//     cout << "Stack underflow: Cannot pop from an empty stack." << endl;
//     return;
//   }
//   --topIndex;
// }
// T Stack<T>:: peek()  {
//   if (isEmpty()) {
//     cout << "Stack is empty: No top element." << endl;
//     return T();
//   }
//   return elements[topIndex];
// }

// bool Stack<T>:: isEmpty()  {
//      return topIndex == -1;
//  }

// int Stack<T>:: size()  {
//      return topIndex + 1;
//  }
