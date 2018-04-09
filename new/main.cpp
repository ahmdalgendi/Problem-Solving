// C++ program to find count of divisors in n!

//336742319
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;

// allPrimes[] stores all prime numbers less
// than or equal to n.
vector<ull> allPrimes;

// Fills above vector allPrimes[] for a given
ull MOD = 1e9 + 7 ;
void sieve(int n)
{

    vector<bool> prime(n+1, true);

    // Loop to update prime[]
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Store primes in the vector allPrimes
    for (int p=2; p<=n; p++)
        if (prime[p])
            allPrimes.push_back(p);
}

// Function to find all result of factorial number
ull factorialDivisors(ull n)
{
    sieve(n);  // create sieve

    // Initialize result
    ull result = 1;

    // find exponents of all primes which divides n
    // and less than n
    for (int i=0; i < allPrimes.size(); i++)
    {
        // Current divisor
        ull p = allPrimes[i];

        // Find the highest power (stored in exp)'
        // of allPrimes[i] that divides n using
        // Legendre's formula.
        ull exp = 0;
        while (p <= n)
        {
            exp = exp + (n/p);
            p = p*allPrimes[i];
        }

        // Multiply exponents of all primes less
        // than n
        cout<< exp<<" ";
        result = (result*(exp+1)) % MOD ;
    }
cout<<"\n";
    // return total divisors
    return result % MOD;
}

// Driver program to run the cases
int main()
{
int n ;
cin>>n;
    cout << factorialDivisors(n)<< endl;
    return 0;
}