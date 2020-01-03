#include<iostream>
#include<cmath>
using namespace std;

int findDivisor(int x){
  int A=2;
  while(x%A!=0){
    A++;
  }
  return A;
}
int main()
{
	int x;
	cout<<"Enter x: ";
	cin>>x;
	cout<<"Output: "<<findDivisor(x);

	return 0;	
}



