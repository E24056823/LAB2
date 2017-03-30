#include <iostream>
#include <ctime>
#include <unistd.h>
#include <fstream>
#include "timer6.h"
#include <math.h>
using namespace std;
int main() {
ifstream inFile("infile", ios::in);
ofstream outFile("outfile", ios::out);

int k,t;
float ea,eb,ranka,rankb,sa,da,db,ra,rb;

inFile>>k>>ra>>rb;
basicdata basic1(ra,rb,k);

outFile<<ra<<"\t"<<rb<<"\n";




for(t=0;t<6;t++){

inFile>>sa;

ra=basic1.getfunction1();
rb=basic1.getfunction2();
k=basic1.getfunction3();



ea=1/(1+pow(10,rb/400-ra/400));
eb=1/(1+pow(10,ra/400-rb/400));

ra=ra+k*(sa-ea);
rb=rb+k*((1-sa)-eb);
 

if(0.5>ra-int(ra))
ra=int(ra);
else
ra=int(ra)+1;

if(0.5>rb-int(rb))
rb=int(rb);
else
rb=int(rb)+1;

outFile<<ra<<"\t"<<rb<<"\n"; 

basic1.function1(ra);
basic1.function2(rb);
basic1.function3(k);



}
	
	return 0;
}
