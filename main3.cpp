#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void trojkowy(int k, double x)
{
	cout << "0.";
	double y = x;
	for(int i=0; i<k; i++)
	{
		if(y>=2.0/3.0)
		{
			cout << "2";	
		}
		if(y>=1.0/3.0 && y<2.0/3.0)
		{
			cout << "1";
		}
		if(y<1.0/3.0)
		{
			cout << "0";
		}
		y = y*3;
		if(y>=2)
		{
			y = y-2;
		}
		if(y >= y-1)
		{
			y = y-1;
		}
	}
}

int main(int argc, char** argv) {
	
	trojkowy(4,1.0/3.0);

	return 0;
}
