#include <stdio.h>
#include <stdlib.h>

int main() {

FILE *fp, *fpCopia;
char ch;

fp = fopen("my.txt", "r");
fpCopia = fopen("my.txt1", "w");

while(1){
  ch = fgetc(fp);
  if(ch==EOF){
    break;
  }
  fputc(ch, fpCopia);
}
fclose( fp );
fclose( fpCopia );


return 0;
}
