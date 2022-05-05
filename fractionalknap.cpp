#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define ff first
#define ss second

bool compare(pii p1, pii p2){
	double v1 = (double) p1.ff/p2.ss;
	double v2 = (double) p2.ff/p2.ss;

	return v1>v2;
}

int main(){
	int n;
	cin>>n;

	vii a(n);
	for(int i=0;i<n;i++){
		cin>>a[i].ff>>a[i].ss;
	}
	int w;
	cin>>w;

	sort(a.begin(),a.end(),compare);
	int ans=0;
	for(int i=0;i<n;i++){
		if(w>=a[i].ss){
			ans+=a[i].ff;
			w-=a[i].ss;
			continue;
		}
		double vw = (double) a[i].ff/a[i].ss;
		ans+=vw*w;
		w=0;
		break;
	}
	cout<<ans<<endl;
	return 0;

}