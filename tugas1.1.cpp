#include <iostream>
#include<string>
using namespace std;

int main(){
  int f;
  cout<<"\nSilahkan Masukkan Jumlah Buku: ";
  cin>> f;
  string buku[f];
  for (int i=0; i<f; i++){
    cout<<"Masukkan judul buku ke - "<< i+1 <<": ";
    cin>> buku[i];
}
for (int i=1 ; i<f; i++){
  string key = buku[i];
  int j = i-1;
  while (j >= 0 && key < buku[j]){
    buku [j+1] = buku[j];
    j--;
  }
  buku [j+1]= key;
}

cout<<"\n Data buku yang sudah diurutkan: \n";
for (int i = 0; i<f; i++){
  cout<< i+1 <<". "<<buku[i] <<endl;
 }
return 0;
}