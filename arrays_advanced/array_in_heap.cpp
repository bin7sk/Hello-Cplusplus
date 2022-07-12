#include <iostream>

using namespace std;

void create_array_in_heap(size_t size);

int main()
{
	create_array_in_heap(10000);

	return 0;
}

void create_array_in_heap(size_t size) {
	
	cout << "size = " << size << endl;
	// get memory from heap
	int * array = new int[size] { 0 };
	if (array == nullptr) {
		cerr << "OS cant give you " 
			<< size 
			<< "integers"
			<< endl;
		return;
	}

	for(size_t i = 0; i < size; i++) {
		array[i] = i;
	}

	for (size_t i = 0; i < size; i++) {
		cout << array[i] << endl;
	}


	// return memory to OS
	delete [] array; 
}
