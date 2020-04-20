#include <iostream>
#include <string.h>
using namespace std;
 
struct Siswa {
  char  nama[50];
  char  sekolah[50];
  unsigned int  uangSaku;
};
 
typedef struct Siswa biodataSiswa;
 
int main(void)
{
  biodataSiswa siswa01;
 
  strcpy(siswa01.nama, "Andi Permana Nugroho");
  strcpy(siswa01.sekolah, "SMA 1 Lumut Ijo");
  siswa01.uangSaku = 10000;
 
  printf("%s bersekolah di %s ", siswa01.nama, siswa01.sekolah);
  printf("dengan uang saku %i per hari\n", siswa01.uangSaku);
 
  return 0;
}
