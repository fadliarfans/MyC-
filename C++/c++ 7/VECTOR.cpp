#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n,q,i1[100000],i2[100000],value,size;
	vector<vector<int> > kocak;
	cin>>n>>q;
	for(int i=0;i<n;i++){
		cin>>size;
		vector<int> lucu;
		for(int j=0;j<size;j++){
			cin>>value;
			lucu.push_back(value);
		}
		kocak.push_back(lucu);
	}
	
	for(int i=0;i<q;i++){
		cin>>i1[i]>>i2[i];
	}
	for(int i=0;i<q;i++){
		cout<<kocak[i1[i]][i2[i]]<<endl;
	}
	
	
	}

