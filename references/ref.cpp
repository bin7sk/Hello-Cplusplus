#include<iostream>
//references in cpp are really cool
void swap(int& left, int& right){
	int temp = left;
	left = right;
	right = temp;
}
int main(void){
	int x = 27;
	int& ref = x;
	std::cout<<"x: "<<ref<<std::endl;
	int z = 44;
	std::cout<<"z: "<<z<<std::endl;
	swap(x, z);
	std::cout<<"After swap:\n"
		<<"x: "<<x
		<<std::endl
		<<"z: "<<z
		<<std::endl;
	return 0;
}
