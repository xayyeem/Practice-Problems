//Problem Statement : Given a number n, print all primes smaller than or equal to n. It is also given that n is a small number. 


#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
	// A value in primes[i] will be false if i is Not a prime, else true.
	bool primes[n + 1];
	memset(primes, true, sizeof(primes));

	for (int p = 2; p * p <= n; p++) {
		// If prime[p] is not changed, then it is a prime
		if (primes[p] == true) {
			// Update all multiples of p greater than or
			// equal to the square of it numbers which are
			// multiple of p and are less than p^2 are
			// already been marked.
			for (int i = p * p; i <= n; i += p)
				primes[i] = false;
		}
	}

	// Print all prime numbers
	for (int p = 2; p <= n; p++)
		if (primes[p])
			cout << p << " ";
}

// Driver Code
int main()
{
	int n ;
	cin >> n ;
	cout << "Following are the prime numbers smaller "
		<< " than or equal to " << n << endl;
	SieveOfEratosthenes(n);
	return 0;
}

/* Input : n =10
Output : Following are the prime numbers smaller than or equal to 10
	 2 3 5 7 

Input : n = 20 
Output: Following are the prime numbers smaller than or equal to 10
	2 3 5 7 11 13 17 19

*/
