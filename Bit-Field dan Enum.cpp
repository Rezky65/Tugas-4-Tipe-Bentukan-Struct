#include <iostream>

struct test1 { 

    unsigned int a : 1; 
    unsigned int b : 2; 
    unsigned int c : 3; 
    unsigned int d : 4; 
    unsigned int e : 5; 
    unsigned int f : 6; 
    unsigned int g : 7; 
    unsigned int h : 8; 
    unsigned int i : 9; 
    unsigned int j : 10; 
    
}; 
  
struct test2 { 
    unsigned int x : 5; 
    unsigned int y : 6; 
}; 

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

int main() { 
	enum hari sekarang;
    sekarang = RABU;
    
    printf("Sekarang hari ke-%d", sekarang + 1); 
	
	printf("\n\nUkuran test1 Adalah %lu bytes", 
           sizeof(struct test1)); 
           
    printf("\n\nUkuran test2 Adalah %lu bytes\n", 
           sizeof(struct test2));  
           
    return 0;
}
