#include "./headers/head.h"
int find_least_common_multiple(int a, int b){
	if(a<0 || b <0) throw bad_arguments{};
	return a*b/find_greatest_common_divisor(a, b);

}
int find_greatest_common_divisor(int a, int b){
	if(a<0 || b <0) throw bad_arguments{};
	while(a!=b){
		if(a<b){
				int temp = a;
				a = b;
				b = temp;
			}
		a = a - b;
	}
	return a;

}
