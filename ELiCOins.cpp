#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define ll long long
#define s(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define sl(a) scanf("%ld",&a)
#define FOR(a,b) for(int i=a ; i<=b ; ++i)
#define mod 1000000007
using namespace std ;

int main() {
		FILE *fp = fopen("ans.txt","w");
ll int fact[100001];
	fact[0] = 1;fact[1] = 1;fact[2] = 2;fact[3] = 6;fact[4] = 24;fact[5] = 120;
	fact[6] = 720;fact[7] = 5040;fact[8] = 40320;fact[9] = 362880;fact[10] = 3628800;fact[11] = 39916800;
	fact[12] = 479001600;fact[13] = 227020758;fact[14] = 178290591;fact[15] = 674358851;
	fact[16] = 789741546;fact[17] = 425606191;fact[18] = 660911389;fact[19] = 557316307;
	int t ;
	s(t) ;
	while(t--){
		int n ;
		s(n);
	for(n=1;n<=100000;n++)
{	
		cout<<n<<endl;	
	int rep = fact[n-1] ;
		int i,j;
		int sum=0;
		
		for(i=1 ; i<=n ; i++){
			for(j=1 ; j<=n ; j++){
				sum = (sum%mod + ((abs(i-j)*rep))%mod)%mod; 
			}
		}
		
		
//	cout<<sum<<endl;1111111111111
		char str1[10],str2[100];
		itoa(n,str1,10);
		itoa(sum,str2,10);
		string t(str1),r(str2);
		string s = "ans[" + t+"] = "+r + ";";
		fputs(s.c_str(),fp);
	}
}
		
	
	return 0 ;
}
