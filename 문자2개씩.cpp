#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char A[100] = { 0 };
	int k = 0;
	cin >> A;
	k = strlen(A);
	for (int i = 0; i<k; i++)
	{	
		if(i%10!=0)
		cout<<A[i];
		else if(i%10==0&&i!=0) cout<<endl<<A[i];
		else cout<<A[i];
	}
}
