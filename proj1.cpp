#include <math.h>
#include <iostream>
using namespace std;

int fib(int);
long proj3();
int proj35();

int main(){
 int total=0;
 int sum=0;
    for(int i=0;i<1000;i++){
        if(i%3==0 | i%5==0){
        	  total+=i;
    	}
    }
  cout<<total<<endl;
  for(int i=0;i<40;i++){
        if(fib(i)<4000000 && fib(i)%2==0)
                sum+=fib(i);
    }
    cout<<sum<<endl;
    cout<<proj3()<<endl;
    cout<<proj35()<<endl;
 return 0;
}

int fib(int n) {
    if( n == -1){
        return 1;
    }else if ( n < 0 ){
        return ( pow(-1,-n+1 ) * fib(-n) );
    }else if (n == 0){
        return 1;
    }else{
        return fib(n-1) + fib(n-2);
    }
}

long proj3(){
  long store=0;
  for(long i=1;i<20000;i++){
    if(600851475143%i==0)
      store=i;
  }
  return store;
}

int proj35(){
  return 0;
}
