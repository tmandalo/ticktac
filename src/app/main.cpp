#include <iostream>

using namespace std;

int input(int x, int y){
    cout << "X: ";
    cin >> x;
    cout << "\nY: ";
    cin >> y;
    return x, y;
}

void print_matrix(){
    cout << "|1, 1|1, 2|1, 3|"<< endl;
    cout << "|2, 1|2, 2|2, 3|"<< endl;
    cout << "|3, 1|3, 2|3, 3|"<< endl;
}

int main(){
    input(x, y);
    print_matrix();
}