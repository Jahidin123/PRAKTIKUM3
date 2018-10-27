#include<iostream>

using namespace std;

int main() {
	int i=0;
	int max=0;
	int a,x;
	
	cout<< "masukkan jumlah bilangan: ";
	cin >> a;
	
	for (i;i<a;i++) {
	
	
		std::cout << "masukkan bilangan ke_ " << i+1 << ": " ;
		std::cin >> x;
		if (x>max)
		max=x; 
	}
	cout<<"bilangan terbesar adalah:"<<max<<endl;
	return 0;
	
	}
		
		
		
	
	




