#include <iostream>
using namespace std;
//PROTOTYPES
void AfficheTab(int **,int &,int &);
void saisieVect(int *,int &);
void afficheVect(int *,int &);
int main() 
{
	int **M,l,c,i,j;
	//ALLOCATION MATRICE
	cout<<"La nombre de lignes: "<<endl;
	cin>>l; 
	cout<<"La nombre de colonnes: "<<endl;
	cin>>c;
	M= new int *[l];
	for(i=0;i<l;i++)
	{
		M[i] = new int [c];
	}
	//LECTURE DES DONNEES
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"M["<<i<<"]["<<j<<"]:";cin>>M[i][j];
		}
	}    
	//AFFICHAGE DES DONNEES
    AfficheTab(M,l,c);
    //LIBERATION
   for(i=0;i<l;i++)
   {
	delete []M[i];
   }
delete []M;

//VECTEURS
	//ALLOCATION VECT
	int *T,m,k;
	cout<<"La taille du tableau: "<<endl;
	cin>>m;
	T=new int [m];
	saisieVect(T,m);
	afficheVect(T,m);
 //LIBERATION VECT
  delete[]T;
	
return 0;
	
}
//DEFINITION DES FONCTIONS
void AfficheTab(int **M,int &l,int &c)
{
	cout<<endl<<"Votre matrice: "<<endl;  
	for(int i=0;i<l;i++)
	{
		cout<<endl;
		for(int j=0;j<c;j++)
		{
		  cout<<M[i][j]<<" ";
		}
		cout<<endl;
	}
}
void saisieVect(int *T,int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"T["<<i<<"]";cin>>T[i];
	}
}
void afficheVect(int *T,int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"T["<<i<<"]: "<<T[i]<<endl;
	}
}
