#include <iostream>
using namespace std;

int main() {
    char input[101];
    while(cin.getline(input,101,'\n')) {
        cout << input << endl;
    }
}