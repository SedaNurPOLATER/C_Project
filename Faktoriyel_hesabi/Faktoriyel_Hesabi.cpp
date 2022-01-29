#include<iostream>
using namespace std;

main()
{
   int a, i, toplam = 1;

cout<<"****FAKTORIYEL HESABI****"<<endl<<endl;
baslat:
cout<<"Faktoriyeli Alinacak Sayiyi Giriniz: ";
cin>>a;
if(a>=0)
    for(i=1;i<=a;i++)
    {
      toplam=toplam*i;
    }
else
{
cout<<"Negatif sayi girdiniz. Lutfen pozitif sayi giriniz."<<endl<<endl<<endl;
goto baslat;
}
cout<<endl<<a<<"!="<<toplam<<endl<<endl;
}
