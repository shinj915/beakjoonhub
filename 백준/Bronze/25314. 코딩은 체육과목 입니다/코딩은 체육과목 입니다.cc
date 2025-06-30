#include <iostream> 
using namespace std;

int main() {
	int n;
	cin >> n;
	if(n < 4 || n % 4 != 0)
		return 0;
	for(int i = 0; i < n/4; i++)
    	cout << "long ";
	cout << "int" << endl; 
    return 0; 
}