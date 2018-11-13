#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("KSAN.inp","r",stdin);
//	freopen("KSAN.out","w",stdout);
	long long n; scanf("%lld",&n);
	long long dem =0, a[n],b[n];
	for(int i = 0 ;i<n;i++) scanf("%lld",&a[i]);
	for(int i = 0 ;i<n;i++){
		scanf("%lld",&b[i]);
		b[i]+=a[i];
	}
	sort(a,a+n);	sort(b,b+n);
//	cout<<endl;
	for(int i = 0 ;i<n;i++) printf("%lld ",a[i]); cout<<endl;
	for(int i = 0 ;i<n;i++) printf("%lld ",b[i]); cout<<endl;
	long long j = 0;
	for(int i = 0 ;i<n;i++){
		if(a[i]<b[j]){
			cout<<a[i]<<" "<<b[j]<<endl;
			dem++;
		}
		else j++;
		if(j>n) break;
	}
	printf("%lld",dem);
}
    