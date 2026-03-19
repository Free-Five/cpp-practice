#include<iostream>
using namespace std;

int main() {
	int sp = 0;
	for ( int i = 1; i < 10; i++){
		
		for (int j = 1; j <= i; j++){
			sp = i * j;
			
			cout << j << "*" << i << "=" << sp << "  ";
			
		}
		cout << endl;
	}
	
	system ("pause");
	return 0;
}
