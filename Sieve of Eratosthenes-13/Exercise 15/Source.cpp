//Great!   For exercise 15, I worked out that I just need to put all the valid primes into a new vector...
//...then output n values of that!

#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int>Primes;
	vector<int>MyPrimes;

	int max = 0;
	cout << "Please enter your value:\n";
	cin >> max;
	if (max > 100000)
	{
		cout << "That's a little too big!\n";
		return 0;
	}

	cout << "Okay, and how many primes would you like output?\n";
	int outpu = 0;
	cin >> outpu;   //This is trying for exercise 15!  (See next attempt!)

	for (int i = 0; i <= max; i++)
	{
		Primes.push_back(i);  //This line is crucial, and enters all values of i into the vector!

		Primes[i] = 1;  //Basically, if Primes[i] is 1, i is prime
						//If Primes[i] is 0, i is not prime
	}
	Primes[0] = 0;   //This ensures 0 and 1 are marked as 'not prime'
	Primes[1] = 0;

	for (int i = 2; i <= max; i++)  //We use a list going from 2 up to n...
	{
		if (Primes[i] == 1)  //If i is marked as still being prime, then...
		{
			for (int j = 2; i * j <= max; ++j) //...we use a multiplier, j, on it!   

				//Any multiple of i and j is marked as "NOT PRIME" in the next line...

				Primes[i * j] = 0;  //This marks all multiples of i as '0' (therefore, not prime)
		}
		if (Primes[i] == 1)
		{
			MyPrimes.push_back(i);
		}
	}
	for (int k = 0; k <= outpu - 1; ++k) {
		cout << MyPrimes[k] << ' ';
	}
}