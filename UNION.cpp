/*C++ : union. Bentuk penulisan dan cara pengaksesannya 
hampir sama dengan struct. Namun, union digunakan untuk 
menyatakan suatu memori dengan nama lebih dari satu. 
Artinya, variabel-variabel yang ada di dalam union 
menempati alamat memori yang sama.*/
#include <iostream>
#include <conio.h>
using namespace std;

union MyUnion
	{
		int x,y;
	};
	
	int main()
		{
			MyUnion data;
			data.x = 10;
			cout << " Nilai Variabel Dengan Union " << endl;
			cout << " --------------------------- " << endl;
			cout << " Nilai x =  " << data.x << endl;
			cout << " Nilai y =  " << data.x << endl;
	
	getch();
		}
