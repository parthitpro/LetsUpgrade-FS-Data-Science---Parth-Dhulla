#include <iostream>
using namespace std;

int main() {    
    float n1;
    float n2;
    int op;
    
    cout <<" Enter the option u want \n";
    cout << "1 for addition\n";
    cout << "2 for subtraction\n";
    cout << "3 for Multiplication\n";
    cout << "4 for division\n";

    cout << "Enter your choice from the option: ";
    cin >> op;
    
    cout << "Enter 2 number ";
    cout << "Enter 1 number \n";
    cin >> n1;
    cout << "Enter 2 number \n";
    cin >> n2;
    
    switch(op) {

    case 1:
      cout << n1 << " + " << n2 << " = " << n1 + n2;
      break;

    case 2:
      cout << n1 << " - " << n2 << " = " << n1 - n2;
      break;

    case 3:
      cout << n1 << " * " << n2 << " = " << n1 * n2;
      break;

    case 4:
      cout << n1 << " / " << n2 << " = " << n1 / n2;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
  }
    return 0;
}