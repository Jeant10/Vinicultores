#include <iostream>
using namespace std;
int main() {
  int TA,P,K,GA;
  char TI;
  cout<<"Ingrese los kilos de uva:\n";
  cin>>K;
  cout<<"Ingrese el precio por kilo:\n";
  cin>>P;
  cout<<"Ingrese el tipo de uva: A/B\n";
  cin>>TI;
  cout<<"Ingrese el tamaño de uva: 1/2\n";
  cin>>TA;
if(TI=='A'){
    if(TA==1){
      P=P+0.20;
    }
    else{
    P=P+0.30;
  }
}else
{
  if(TA==1){
    P=P-0.30;
  }else{
    P=P-0.50;
  }
}
GA=P*K;
cout<<"La ganancia es:"<<GA<<"\n";
}
