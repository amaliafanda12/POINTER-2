#include<iostream>
using namespace std;
int main()
{
	int i,f,tot;
	int batas=30;
	int *fandacantik=&tot;
	
	cout<<"Masukan angka Percobaan = ";
	cin>>f;
	
	for (i=1; i<=batas; i++){
		tot=i*f;
		cout<<i<<"x"<<f<<"="<<*fandacantik<<endl;
	}
	return 0;
}
