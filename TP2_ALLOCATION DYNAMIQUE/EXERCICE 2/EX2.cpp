#include <iostream>
using namespace std;
//PROTOTYPES
void AfficheTab(int **,int &,int &);
void saisieVect(int *,int &);
void afficheVect(int *,int &);
int  **alloc(int **,int &,int &);
void lib(int ** ,int &,int &);
int  *allocV(int *,int &);
void libV(int * ,int &);
int main() 
{
	int **M,l,c,i,j,val=0;
	//ALLOCATION MATRICE
	cout<<"La nombre de lignes: "<<endl;
	cin>>l; 
	cout<<"La nombre de colonnes: "<<endl;
	cin>>c;
    M = alloc(M,l,c);
	//AFFICHAGE DES DONNEES
    AfficheTab(M,l,c);
    //LIBERATION
    lib(M,l,c); 

//VECTEURS
	//ALLOCATION VECT
	int *T,m,k;
	cout<<"La taille du tableau: "<<endl;
	cin>>m;
   T=allocV(T,m);
	afficheVect(T,m);
 //LIBERATION VECT
  libV(T,m);
	
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
int **alloc(int **M,int &l,int &c)
{

	M= new int *[l];
	for(int i=0;i<l;i++)
	{
		M[i] = new int [c];
	}
	for(int k=0;k<l;k++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"M["<<k<<"]["<<j<<"]:";cin>>M[k][j];
		}
	} 
  return M;
}
void lib(int **M,int &l,int &c)
{
	for(int i=0;i<l;i++)
   {
	delete []M[i];
   }
delete []M;
}

int *allocV(int *T,int &m)
{
  	T=new int [m];
	saisieVect(T,m);
	return T;
}
void libV(int *T,int &m)
{
	delete[]T;
}
