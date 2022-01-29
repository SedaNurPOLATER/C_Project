#include <iostream>
using namespace std;

main() 
{
	int topla=0, ortalama=0 , enb, enk;
	int x[5];
	for(int i=0; i<5; i++){
		cout<<i+1<<". elemani giriniz= ";
		cin>>x[i];
		topla = topla + x[i];	
	}
	cout<<"Dizi elemanlarinin toplami: "<<topla<<endl;
	
	ortalama = topla / 5;
	cout<<"Dizi elemanlarinin ortalamasi: "<<ortalama<<endl;
	enb = x[0];
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if (x[i] > enb)
			{
				enb = x[i];
			}
			
		}
	}
    cout<<"maximum deger: "<<enb<<endl;
    enk = x[0];
    	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			
			if(x[i] < enk)
			{
				enk = x[i];
			}
		}
	}
    cout<<"minimum deger: "<<enk;
	return 0;
}
