#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int x=0, x2=0;
	cin >> x;
	x2 = x * x;
	cout << (x2 + 1) * (x2 + x) + 1;
	return EXIT_SUCCESS;
}
