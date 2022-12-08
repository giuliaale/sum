#include <iostream>
using namespace std;
#include "functii.h"

int main()
{

	int m;


	int  vector1[MAX], vector2[MAX], vector3[MAX], vector4[MAX];


	cout << "Introduceti numarul de elemente ale tablourilor: ";
	cin >> m;


	cout << "Citire elementele primului vector ";
	read(vector1, m);
	cout << "Citire elementele celui de al doilea vector ";
	read(vector2, m);
	cout << "Citire elementele celui de al treilea  vector ";
	read(vector3, m);
	cout << "Citire elementele celui de al patrulea vector ";
	read(vector4, m);

	add(m, vector1, vector2);
	add(m, vector1, vector2, vector3, vector4);
	return 0;
}






	/*if (n <= 1)
	{
		cout << "Trebuie sa fie  minim 2 vectori.";
		
	}
	else if(n==2)
		{
			cout << "introduceti numarul de elemente ale celor 2 tablouri: ";
			cin >>m;
			cout << "elementele primului vector: " << endl;
			scan(vector1, m);
			cout << "elementele celui de al doilea vector: " << endl;
			scan(vector2,m);
			for (int i = 0;i < m;i++)
			{
				vector_rezultat[i] = ADD(vector1[i], vector2[i]);
			
			}
			
		}
	else if (n==3)
		{
			
			cout << "introduceti numarul de elemente ale celor 3 tablouri: ";
			cin >> m;
			cout << "elementele primului vector: " << endl;
			
			scan(vector1, m);
			cout << "elementele celui de al doilea vector: " << endl;
			scan(vector2, m);
			cout << "elementele celui de al treilea vector: " << endl;
			scan(vector3, m);
			for (int i = 0;i < m;i++)
			{
				vector_rezultat[i] = ADD(vector1[i], vector2[i],vector3[i]);
			
			}
			
		}
	else if(n==4)
		{
			
			cout << "introduceti numarul de elemente ale celor 4 tablouri: ";
			cin >> m;
			cout << "elementele primului vector: " << endl;
			scan(vector1, m);
			cout << "elementele celui de al doilea vector: " << endl;
			scan(vector2, m);
			cout << "elementele celui de al treilea vector: " << endl;
			scan(vector3,m);
			cout << "elementele celui de al patrulea vector: " << endl;
			scan(vector4, m);
			for (int i = 0;i < m;i++)
			{
				vector_rezultat[i] = ADD(vector1[i], vector2[i], vector3[i], vector4[i]);
				
			}
			
		}
	else 
		{  
			cout << "se pot aduna maxim 4 vectori";
			
			
		}
	for (int i = 0;i < m;i++)
		cout << vector_rezultat[i] << " ";*/
	
