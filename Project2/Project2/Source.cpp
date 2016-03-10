#include <iostream>
using namespace std;

struct X {
	int a, b;
	int suma();
};

int X::suma(){
	return a + b;
}

int main() {
	X z;
	z.a = 1;
	z.b = 4;
	cout << z.suma() << endl;
	getchar();
}


