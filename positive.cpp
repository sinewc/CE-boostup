#include <iostream>
using namespace std;
int sumDigit(int number){
	int result = 0;
	while(number>0){
		result+=number%10;
		number = number/10;
	}
	return result;
}
int main(){
	int number;
	cin >> number;
	cout << number;
	while(number>=10){
		number = sumDigit(number);
		cout << " -> " <<number;
	}
}
