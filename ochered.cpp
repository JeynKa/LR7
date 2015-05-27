/** @file Ochered.cpp */
#include <iostream>
using namespace std;
//!structura Ochered
/*!
opisanie
*/
struct Ochered 
{
private:
    int *arr;  //!< buffer-massiv
    int bufferSize; //!< dlina massiva
    int length; //!< dlina Ocheredi
    int tail;   //!<hvost
    int head;   //!<golova
public:
	//! pystoi konstructor
    Ochered(int size) 
    {
        head = tail = length = 0;
        bufferSize = size;
        arr = new int [bufferSize];
        for ( int i = 0; i < bufferSize; ++i )///bufernyi massiv zapolnaetsa 0
            arr[i] = 0;
    }
    ~Ochered() //! destructor
    {
        delete [] arr;
    }
	//! function dobavky elementa vozvrashaet dliny ocheredy posle dobavlenya elementa
	/*!
		\param element
		\param dlina ocheredy do dobavlenta
		\param maks vozmojnay dlina ocheredy
		*/
   int add( int value, int k, int m )  
    {
        if ( m == k )///Proveryaem polnoty ocheredy
                {
            cout << "Ochered is full!\n";///esly polna pishem ob etom i vyhodim
            return k;
                }
        if ( tail == bufferSize )///Esly ne polna dobavlyaem novyi element cheres bufernyi massiv
            tail = 0;
        arr[tail] = value;
        ++tail;
        ++length;
		k++;
		return k;
    }
   //! function ydalenya elementa is ocheredy vozvrashaet dliny Ocheredy posle ydalenya
   /*!
		\param dlina Ocheredy do ydalenya
		*/
  int get(int k) 
    {
        /// Proveraem pysta li ochered'
        if ( k == 0 )
                {
            cout << "Queue is empty!\n";/// esli pysta pishem ob etom i vyhodim iz funcii
                        return k;
                }
        if ( head == bufferSize )///esly ne pysta ydalaem element cheres bufernyi massiv
            head = 0;
        arr[head] = 0; 
                ++head;
        --length;
		k--;
		return k;
  }
  //!function pechaty ocheredy
  void print() 
    {
        int i;
        cout << "Ochered' is: ";///proveraem na pystoty
        if ( length == 0 )
            cout << " empty";
        else if ( tail > head )///esly ne pysta pechataem ot golovy k hvosty
        {
            for ( i = head; i < tail; ++i )
                cout << arr[i] << ' ';
        }
        else
        {
            for ( i = head; i < bufferSize; ++i )
                cout << arr[i] << ' ';
            for ( i = 0; i < tail; ++i )
                cout << arr[i] << ' ';
        }
 
        cout << '\n';
 
    }  

};
int main(void) ///@ int main(void)
{
    int value, n, m;
    cout << "vvedite max dliny ocheredi m= ";///vvodim dliny ocheredy
	cin >> m;
	cout << "/nkol-vo operacii n=";///vvodim kol-vo deystvyi
	cin >> n;
	char w;
	Ochered *p = new Ochered(n);
	cout << endl;
	int k=0;
	for (int i = 0; i < n; i++)	///cikl obrabotky soobshenyi
	{
		cout << "\na-dobavlenye; d-ydalenye" << endl;
		cin>>w;///vvodim komandy ydalit' ili dobavit'
		if (w=='a')///v sootvetstvii s komandoi vysyvaem function
		{
				cout << "znachrnie= "; cin >> value;
				k=p -> add(value,k,m); 
		}
		if (w=='d')
		{
				k=p -> get(k); 			
		}
	}	
	p ->print();///pechataem ochered'
	return 0;    
}
