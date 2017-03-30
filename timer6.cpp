#include "timer6.h"
basicdata::basicdata(int x, int y,int z) {
function1(x);
function2(y);
function3(z);
};

void    basicdata::function1(int x) {
	ra = x;
}

void    basicdata::function2(int y){
        rb = y;
}

void    basicdata::function3(int z){
        k = z;
}

int     basicdata::getfunction1() {
	return ra;
}
int     basicdata::getfunction2() {
	return rb;

}
int     basicdata::getfunction3() {
	return k;


}
