#include <iostream>

using namespace std;

int main(){
    int n,bilangan,separuh,i,j;
    cout<<"Masukkan suatu angka(input) untuk membuat diamond{kristal} kosong:";
    cin>>n;
    //rumus di bawah digunakan untuk membuat inputan user bisa menghasilkan diamond dengan tinggi sesuai soal
    bilangan=(n-1)+(n-1);
    separuh=bilangan/2;
    //i digunakan untuk menciptakan perulangan untuk membentuk baris 
    for (i = 0; i < bilangan; i++) { 
            for (int j = 0; j < bilangan+1; j++) { //j digunakan untuk menciptakan perulangan untuk membentuk kolom
              if (i < separuh) { //selama baris<separuh(1/2 tinggi diamond) akan terbentuk diamond bagian atas dengan ketentuan kolom seperti di bawah:
                if ((j >= separuh-i) && (j <= separuh+i)) 
                  cout << " "; 
                else
                  cout << "*"; //ketentuan j dalam pembentukan diamond bagian atas digunakan untuk menempatkan bintang dan spasi di tempat yang sesuai agar membentuk diamond bagian atas
              } else {  //jika baris>separuh dari tinggi diamond akan terbentuk diamond bagian bawah dengan ketentuan kolom seperti di bawah:
                if ((j > i - separuh) && (j < 3*separuh-i)) 
                  cout << " "; 
                else 
                  cout << "*"; //ketentuan j dalam pembentukan diamond bagian bawah untuk menempatkan bintang dan spasi di tempat yang sesuai selama perulangan agar terbentuk diamond bagian bawah
              } 
            }
                  cout<<endl; //endl digunakan agar selama perulangan baris ke bawah dan tidak ke samping 
    }
              
}


