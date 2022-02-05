#include<iostream>
#define MAX_STACK 10
namespace stack
{
	int stack[MAX_STACK];
	int i = 0;
	class limit{};
	void push(int top)
	{
		if(i>=MAX_STACK) throw limit();
		stack[i] = top;
		i++;
	}
	int pop(void)
	{
		if(i>0) i--;
		return stack[i];
	}
}
int main(void){
	std::cout<<"How many elements to add to stack?\n";
	int n;
	std::cin>>n;
	for(int i=0; i<n; i++){
		try{
			stack::push(i);
		}
		catch(stack::limit){
			std::cerr<<"Limit of the stack!\n";
		}
	}
	for(int i=0;i<n;i++){
		std::cout<<stack::pop()<<std::endl;
	}
	return 0;
}
