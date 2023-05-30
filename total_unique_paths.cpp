#include <bits/stdc++.h> 
using namespace std;
#define ull unsigned long long
 
// Returns Factorial of N
ull factorial(int N)
{
 
    // Initialize result
    ull f = 1; // Or BigInt 1
 
    // Multiply f with 2, 3, ...N
    for (ull i = 2; i <= N; i++)
        f *= i;
 
    return f;
}
ull uniquePaths(int m, int n) {
    // cout<<factorial(30)<<endl;;
	ull kk=((factorial(m-1+n-1))/(((factorial(n-1))*(factorial(m-1)))));
	return kk;

}
int main(){
    int n;
    cin>>n;
    while(n--){
        int i,j;
        cin>>i>>j;
    cout<<uniquePaths(i,j)<<"---"<<endl;
    }
    return 0;
}