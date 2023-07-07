//This program shows the use of the for each function in a prime number generator
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	//Declare Variables
	vector<int> numbrng;
	int user_inp;
	
	
	//functor
	auto isprime = 
	[](int samp){
		bool foundr = false;
		for (int x = 2; x * x <= samp; x++){
			foundr = false;
			if (samp % x == 0)
			foundr = true;
			break;
		}
		if (!foundr){
			cout << samp << " is a prime number.\n";
	}
	};

	//Display instructions to users and get input
	cout << "Welcome to Prime!\n";
	cout << "This program will show you which numbers are prime within a range.\n";
	cout << "To get started, please input a number greater than 1.\n";
	cout << "Input:";
	cin >> user_inp;

	//populate vector
	for(int i = 2; i <= user_inp; i++)
	{
		numbrng.emplace_back(i);
	}

	//Create iterators
	auto itr1 = numbrng.begin();
	auto itr2 = numbrng.end();

	//use for each function to display prime numbers
	for_each(itr1, itr2, isprime);
	

	return 0;
}