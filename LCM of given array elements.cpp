/*input
1
4
1 2 8 3
*/

/*~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)
#define set_bit(n, x, i) (n ^ ((-x ^ n) & (1 << i)))
#define get_bit(n, i) ((n >> i) & 1) 
using namespace std;
 
template<typename T>void scan(T&x){bool n=false;register T c=getchar();x=0;if(c=='-'){n=true;c=getchar();}for(;(c>47&&c<58);c=getchar()){x=(x<<1)+(x<<3)+c-48;}if(n){x*=-1;}}
template<typename T>void allocate(T **x,T n){*x=(T*)malloc(sizeof(T)*n);}

int lcm(int a, int b) { return (a*b/ __gcd(a, b)); }

int main() {
	int t, n, x, ans;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &ans);
		for (int i = 1; i < n; i++) {
			scanf("%d", &x);
			ans = lcm(ans, x);
		}
		printf("%d\n", ans);
	}
	return 0;
}