#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	ios state(nullptr);

	cout << "Decimal here: " << 42 << endl;

	state.copyfmt(cout);
	cout << "HEX here: 0x"
		<< hex
		<< uppercase
		<< setw(8)
		<< setfill('*')
		<< 42
		<< endl;

	cout.copyfmt(state);
	cout << "back: " << 42 << endl;

	return 0;

}
