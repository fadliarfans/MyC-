#include<iostream>

using namespace std;



int main()
{
	
	int x,o,p,k,f,r;
	int artam[1000];
	
	f=0;
	
	cout<<"---- APLIKASI PERHITUNGAN ----"<<endl<<endl;
	cout<<"1. Pertambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
    cout<<"3. Pembagian"<<endl;
    cout<<"4. Perkalian"<<endl<<endl;
    
    cout<<"Pilih operasi perhitungan : ";
    cin>>x;
    
    if(x==1) 
    {
    	cout<<endl<<"berapa bilangan yang ingin ditambahkan = ";
    	cin>>k;
    	cout<<endl;
         	for(int i=1;i<=k;i++)
         	{
    		  cout<<"bilangan ke-"<<i<<" = ";
    		  cin>>artam[i];
    		  f+=artam[i];
	     	}
	    cout<<endl;	
	    cout<<"Hasilnya adalah = "<<f;
    	
	}
    
	
	if(x==2) 
    {
    	cout<<endl<<"bilangan yang ingin dikurangkan = ";
        cin>>r;
        cout<<endl;
    	cout<<"berapa bilangan yang menjadi pengurang = ";
    	cin>>k;
    	cout<<endl;
    
         	for(int i=1;i<=k;i++)
         	{
    		  cout<<"bilangan ke-"<<i<<" = ";
    		  cin>>artam[i];
    		  f+=artam[i];
	     	}
	    cout<<endl;	
	    cout<<"Hasilnya adalah = "<<r-f;
    	
	}
    
    if(x==3) 
    {
    	cout<<endl<<"bilangan yang ingin dibagi = ";
        cin>>r;
        cout<<endl;
        cout<<"berapa bilangan yang menjadi pembagi = ";
    	cin>>k;
    	cout<<endl;
         	for(int i=1;i<=k;i++)
         	{
    		  cout<<"bilangan ke-"<<i<<" = ";
    		  cin>>artam[i];
    		  r=r/artam[i];
	     	}
	    cout<<endl;	
	    cout<<"Hasilnya adalah = "<<r;
    	
	}
	
	if(x==4) 
    {
    	cout<<endl<<"berapa bilangan yang ingin dikalikan = ";
    	cin>>k;
    	cout<<endl;
    	f=1;
         	for(int i=1;i<=k;i++)
         	{
    		  cout<<"bilangan ke-"<<i<<" = ";
    		  cin>>artam[i];
    		  f*=artam[i];
	     	}
	    cout<<endl;	
	    cout<<"Hasilnya adalah = "<<f;
    	
	}
	
	
	
	
	return 0;
	
	
}
