#include <iostream>
using namespace std;

#define MAX 5

int main() {
    int stack[MAX];
    int top = -1;
    int choice, value;

    do {
        cout << "\n===== STACK MENU =====\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {          
            cin.clear();
            cin.ignore(1000, '\n');
            choice = 0;
        }

        switch (choice) {
            case 1:                    
                if (top == MAX - 1) {
                    cout << "Stack Overflow! Stack is full.\n";
                } else {
                    cout << "Enter value to push: ";
                    cin >> value;
                    top++;
                    stack[top] = value;
                    cout << value << " pushed onto the stack.\n";
                }
                break;

            case 2:                      
                if (top == -1) {
                    cout << "Stack Underflow! Stack is empty.\n";
                } else {
                    cout << stack[top] << " popped from the stack.\n";
                    top--;
                }
                break;

            case 3:                     
                if (top == -1) {
                    cout << "Stack is empty.\n";
                } else {
                    cout << "Stack elements (top to bottom):\n";
                    for (int i = top; i >= 0; i--) {
                        cout << "  | " << stack[i] << " |";
                        if (i == top) cout << "  <- top";
                        cout << "\n";
                    }
                }
                break;

            case 4:                    
                cout << "Exiting program. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice! Please enter 1-4.\n";
        }
    } while (choice != 4);

    return 0;
}
