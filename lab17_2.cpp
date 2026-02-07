#include<iostream>
#include <string>
using namespace std;

void myString(char *&o, int N){
	o = new char[N];
	for(int i = 0; i < N;i++) o[i] = 'A'+i;
	o[N] = 0;
}

int main(){
	char *p;
	int N;
	cout << "N = ";
	cin >> N;
	myString(p,N);
	cout << p;
	delete [] p;
	return 0;
}
