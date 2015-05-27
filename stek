/** @file stek.cpp */ 
#include <iostream>
using namespace std;
struct stek /// @struct stek
{
	int ch; 
	stek* next; 
};
int main(void) ///@ int main(void)
{
	stek *first=0;///ykazatel na nachalo
	stek *p;///ykazatel
	cout<<"VVEDITE KOL-VO DEISTVII ";///vvod kol-va deystvyi
	int n;
	cin>>n;
	int e;
	char w;
	p=first;
	for (int i=0; i<n; i++)///zikl obrabotki soobshenyi
	{
		cout<<"\nvvedite deystvye a-dobav ; d- ydalit element \n";///vybor deystvya vvod ili ydalenie
		cin>>w;
		if (w=='a') ///esli vvod
		{
		cout<<"vvedite znachenie";
		cin>>e;
		p=new stek; ///vydelaem pamat'
		p->ch=e;///vvodim znachenie
		p->next=first;///sdvygaem ykazatel'
		first=p;
		}
		if (w=='d')///esli ydalit'
		{ 
			p=p->next;///sdvigaem ykazatel'
			first=p;
		}
	}
	p=first;
	while (p)///zikl raspechatki s konza steka
		{
			cout<<p->ch<<" ";
			p=p->next;
	}
	system("pause");
}
