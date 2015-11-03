#include <iostream>
using namespace std;

int main(){
 int N=100; //Number of iterations
 int n=400; //Number of different values for r
 int m=19;
 double r=0,S=0.01;
 for(int j=1; j<=n; j++){
   r=r+S;
   double x=0.5;
   for(int k=1; k<=m; k++){
    x=x*r*(1-x);
   }
   for(int i=20; i<=N; i++){
    x=x*r*(1-x);
    cout << r <<"\t"<< x << endl;
  }
 } 
  return 0;
}