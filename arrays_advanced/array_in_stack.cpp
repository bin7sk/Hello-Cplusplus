#include <iostream>

using namespace std;

void array_in_stack() {
	
	constexpr int size = 1000;

	int array[size]{0};

	for(int i=1; i < size; i++) {
		array[i] = array[i - 1] + 1;
	}

	for(int i=1; i < size; i++) {
		cout << array[i] << ' ';
	}
}

int main() {

	array_in_stack();

	return 0;
}
