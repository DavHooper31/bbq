#include <iostream>
using namespace std;

int media(int a,int b)
{
int med;
med=(a+b)/2;
return med;
}
int main()
{
int a;
int b;
cout<<"Inserisci primo valore"<<endl;
cin>>a;
cout<<"Inserisci secondo valore"<<endl;
cin>>b;
cout<<media(a,b)<<endl;
return 0;  
}




