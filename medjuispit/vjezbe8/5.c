#include <stdio.h> //ponoviti
#define MAXPRIM 500
int main(void) {
int prim[MAXPRIM];
int slobodanInd = 1, indPrim, kandidat = 3, jestPrim, i;
prim[0] = 2;
while (slobodanInd < MAXPRIM) {
jestPrim = 1;
indPrim = 1;
while (indPrim < slobodanInd && jestPrim == 1) {
if (kandidat % prim[indPrim] == 0) {
jestPrim = 0;
}
indPrim = indPrim + 1;
}
if (jestPrim) {
prim[slobodanInd] = kandidat;
slobodanInd = slobodanInd + 1;
}
kandidat = kandidat + 2;
}
for (i = 0; i < MAXPRIM; i = i + 1) {
printf("%d. %5d\n", i + 1, prim[i]);
}
return 0;
}