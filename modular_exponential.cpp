#include <bits/stdc++.h>
using namespace std;

int help(int x,int n,int m){
std::string binary = std::bitset<8>(n).to_string();
	int s=binary.size();
	int ans=1;
    cout<<binary<<endl;
	for(int i=0;i<s;i++){
        if(binary[s-i-1]=='0'){
            continue;
        }
        int ss=binary[s-i-1]-'0';
		ans*=(int(pow(x,ss))%m);
        // cout<<int(pow(x,binary[s-1-i]))%m<<"-- ";
	}
		return ans%m;
}
int main()
{
   cout<<help(3,1,2);
}
// 6 4



// 110