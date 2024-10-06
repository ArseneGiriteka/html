#include"header_exp.h"
using namespace std;

double e(int p)
{
const double e=2.7581;
double resultat=1;
int n=1;
bool rep=true;
char answer='o';
while(rep==true)
{
if(p==0)
{
    resultat=1;
}
else if(p>0)
{
	for(n=1;n<=p;n++)
	{
        resultat*=e;
    }
}
else if(p<0)
{
    for(n=1;n<=p;n++)
	{
        resultat/=e;
        n++;
    }
}
if (answer='o')
{
    rep=true;
}
else{
    rep=false;
}
resultat=1;
}

    return resultat;
}

double e(double p)
{
	double *resultat;
	bool verificatore=true;
	int n=1;
	
	while(p%n)
	{
	   if(e(p)%n)
		{
			verificatore = false;
		}
		n*=10;	
	}
	
	resultat = new double(e(p*n)/e(n));
	
   return resultat;
}




















