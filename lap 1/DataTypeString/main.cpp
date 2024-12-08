#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    char data;
    Node* next;
};

struct STRING {
    Node* head;
    Node* tail;

    void createNode(char c) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = c;
        newNode->next = NULL;

        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }


    //loop to every char
    void init() {
        head = tail = NULL;
        char ch;
        cout << "Enter Your Name ";

        while (true) {
            ch = getchar();
            if (ch == '\n') {
                break;
            }

            createNode(ch);
        }
    }
    void ptr(){
        Node* current = head;

        while (current) {

           printf("%C",current->data);
           current = current->next;
        }
        printf("\n");

    }


    void clear() {
        Node* current = head;
        while (current) {
            Node* temp = current;
            current = current->next;
            free(temp);
        }
        head = tail = NULL;
    }
};

int main() {
    STRING name;
    name.init();
    name.ptr();
    name.clear();
    return 0;
}
