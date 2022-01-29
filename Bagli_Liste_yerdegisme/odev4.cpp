#include<iostream>
using namespace std;

struct eleman{
  int veri;
  eleman* sonraki;
};

void olustur(eleman *ptr)
{
  // Elemanlari 100'den 1000'e 10 elemanli liste olustur.
  for (int i=1;i<=10;i++)
  {
    ptr->veri = i*100;
    ptr->sonraki = new eleman;
    ptr = ptr->sonraki;
  }
  ptr->sonraki = NULL;
}

void yazdir(eleman *ptr)
{
  while(ptr->sonraki!=NULL)
  {
    cout<<ptr->veri<<endl;
    ptr = ptr->sonraki;
  }
}


void arayaekle(eleman *ptr, int sira, int data)
{
  for(int i=1;i<sira;i++)
  {
    ptr = ptr->sonraki;
  }
  // Yeni eleman olustur
  eleman *yeni = new eleman;
  yeni->sonraki = ptr->sonraki;
  yeni->veri = data;
  ptr->sonraki = yeni;
}

void sil(eleman *ptr, int sira)
{
  for(int i=1;i<sira-1;i++) // 1 onceki elemanda dur
  {
    ptr = ptr->sonraki;
  }
  ptr->sonraki = ptr->sonraki->sonraki;
}

main()
{
  // root pointer ile ilk elemani tanýmla
  eleman* root = new eleman;
  // Liste olustur
  olustur(root);
  // Listeyi yazdir
  yazdir(root);
  // 5. Elemaný Silelim.
  sil(root, 5);
  cout<<"Yer degistirme gerceklesmistir (400-500) -> (500-400) "<<endl;
	arayaekle(root,3,500);
	yazdir(root);
	

}
