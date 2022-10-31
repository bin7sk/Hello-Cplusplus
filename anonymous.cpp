#include <iostream>
using namespace std;
class dot 
{
	int x, y;
 public:
	int get_x(){return x;}
	int get_y(){return y;}
	dot():x(0), y(0) {cout<<"constructor\n";}
	dot(int p_x, int p_y) :
	 x(p_x), y(p_y)
	{
		cout<<"constructor with parameters\n";
	}
	dot(const dot& origin)
	{
		cout<<"copying constructor\n";
	}
	~dot(){cout<<"destructor\n";}
	dot operator+(const dot &b)
	{
		dot res(x + b.x, y + b.y);
		return res;
	}
};
int main()
{
	dot a(1,1), b(2,2), c(0,0);
	dot tmp = a + b + c;

	return 0;
}

