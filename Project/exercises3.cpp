#include <iostream>
using namespace std;
int main()
{
	int numbers[5] = {35,82,17,96,54};
	int maxnumber;
	int* pnumber;

	for (int i = 0; i < 5; i++)
	{
		cout << *(numbers + i) << endl;
	}

	for(int i=0; i<5; i++)
	{ 
		if(maxnumber<*(pnumber+i))
		{
			maxnumber = *(pnumber+i);
		}
	}
	cout << "Maximum number: " << maxnumber << endl;
	return 0;
}