#include<iostream>
#include<cmath>
using namespace std;

int sroot(int a){
	a = sqrt(a);
	return a;
};
long sroot(long a){
	a = sqrt(a);
	return a;
};
double sroot(double a){
	a = sqrt(a);
	return a;
};

int main(){
	int a = 25;
	long b = 256;
	double c = 0.36;
	
	cout << "25的二次方根为：" << sroot(a) << endl;
	cout << "256的二次方根为：" << sroot(b) << endl;
	cout << "0.36的二次方根为：" << sroot(c) << endl;
	
	system ("pause");
	return 0;
}

