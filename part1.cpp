#include <iostream>
using namespace std;
long base2(int number)
{
	long remainder = 0 ;
	long i = 1;
	long answer = 0;
	while(number>0)
	{
		remainder = number%2;
		answer = answer+(i*remainder);
		number=number/2;
		i=i*10;
	}
	return answer;
}
int main(void) {
	cout << base2(256) << endl;
	return 0;
}