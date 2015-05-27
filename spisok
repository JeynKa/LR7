/** @file Spysok.cpp */ 
#include <iostream>
using namespace std;
//! structura spysok
struct spysok 
{
	int ch; //!< intovoe pole
	spysok* next, *Head;  //!< ykazately na sledyushii element i na golovy
};
//! sozdanye pystogo spyska
/*!
	\param ykazatel' na golovy
*/
void constr_list(spysok **Head)
{
	*Head = NULL;///spysok pyst(NULL)
}
//! Function dobavlenya elementa vozvrashaet dliny spyska posle dobavlenya elementa
/*!
	\param ykazatel' na golovy
	\param znachenye novogo elementa
	\param pozicia kyda vstavit' element
	\param dlyna spyska
	*/
int spysok_in(spysok **Head, int n, int k, int y)
{
	spysok* c = new spysok;///vydelaem pamat'
	spysok* r=*Head;
	if (k>y) cout<<"takoi pozicii net";///proveraem na syshestvovanye pozicii v spiske
	else///esly pozicia syshestvyet
	{
	y++;///yvelichivaem dliny spyska
    if (!k) ///esly posicia=0 sdvigaem golovy nazad i dobavlaem tyda element
	{
		c->ch=n;
		c->next=*Head;
		*Head=c;
	}
	else///esli pozicia v seredine dvigaem ykazatel' v cikle do pozicii
	{
		c->ch=n;
		while(k>1)
		{
			r=r->next;
			k--;
		}
		c->next=r->next;///vstavlaem novyi element megdu dvyma
		r->next=c;
	}
	}
	return y;
} 
//! function ydalenya elementa vosvrashaet kol-vo elementov posle ydalenya
/*!
	\param ykazatel' na golovy
	\param posicia
	\param dlina spyska
	*/
int spysok_out(spysok **Head, int n, int y) 
{
	if (n>(y-1)) cout<<"takoi pozicii net";///proverka na syshestvovanie pozicii
	else///esli syshestvyet
	{
		y--;///ymenshaem dliny spiska
	if(!n) *Head=(*Head)->next;///esly pos=0 sdvigaem golovy
	else
	{
	spysok* r; 
	r = *Head;
	while (n>1)///esly net dvygaem ykazatel' do nygnoi posicii
	{
		r = r->next;
		n--;
	}
	if ((r->next->next==NULL))  r->next=NULL;
	else r->next = (r->next)->next; ///prysvaem emy ykazatel' na 2 elementa vpered
	}
	}
	return y;
} 

int main(void) ///@ int main(void)
{   int y=0;
	spysok *head=NULL;
	constr_list(&head);
	cout<<"VVEDITE KOL-VO DEISTVII ";///vvod kol-va deystvyi
	int n,e,q;
	cin>>n;
	char w;
	for (int i=0; i<n; i++) /// cikl obrabotki deystvyi
	{
		cout<<"\nvvedite deystvye a-dobav ; d- ydalit element \n";///vybor deystvya vvod ili ydalenie
		cin>>w;
		if (w=='a') ///esli vvod
		{
			cout<<"vvedite poziciu";
			cin>>q;///vvodim poziciu i znachenie
			cout<<"vvedite znachenie";
			cin>>e;
			y=spysok_in(&head,e,q,y);///vysyvaem spisok_in
		}
		if (w=='d')///esli ydalenie
		{
			cout<<"vvedite poziciu";
			cin>>q;///vvodim poziciu
			y=spysok_out(&head,q,y);///vysyvaem spisok_out
		}
	}
	cout<<"\n";
	while (head)///cikl raspechatky spiska
	{
		cout<<head->ch<<" ";
		head=head->next;
	}
	return 0;
}


	
