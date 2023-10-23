#include<iostream>
using namespace std;
int main(){
	int a, fact;
	cout << "Find the factors of user input number" << endl << "Enter an integer: ";
	cin >> a;
	int i = 1;
	cout << "Factors of " << a << " is ";
	while(i<=a){
		if(a%i == 0){
			cout << i << " ";	
		}
		i++;
	}
}
