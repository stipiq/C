#include <stdio.h>
#define MINCLAN 3
#define MAXCLAN 20
int main(void) {
int i, brojUlaznih, brojParnih = 0, brojNeparnih = 0;
do {
printf("Upisite broj iz intervala [3, 20] > ");
scanf("%d", &brojUlaznih);
} while (brojUlaznih < MINCLAN || brojUlaznih > MAXCLAN);
int ulaz[brojUlaznih];
printf("Upisite cijele brojeve (%d) > ", brojUlaznih);
for (i = 0; i < brojUlaznih; i = i + 1) {
scanf("%d", &ulaz[i]);
}
// prebroji, da bi se mogle odrediti dimenzije polja
for (i = 0; i < brojUlaznih; i = i + 1) {
if (ulaz[i] % 2 == 0) {
brojParnih = brojParnih + 1;
} else {
brojNeparnih = brojNeparnih + 1;
}
}
int parni[brojParnih];
int neparni[brojNeparnih];
int indParnog = 0;
int indNeparnog = 0;
for (i = 0; i < brojUlaznih; i = i + 1) {
if (ulaz[i] % 2 == 0) {
parni[indParnog] = ulaz[i];
indParnog = indParnog + 1;
} else {
neparni[indNeparnog] = ulaz[i];
indNeparnog = indNeparnog + 1;
}
}
printf("Ulaz: ");
for (i = 0; i < brojUlaznih; i = i + 1) {
printf("%d ", ulaz[i]);
}
printf("\nParni: ");
for (i = 0; i < brojParnih; i = i + 1) {
printf("%d ", parni[i]);
}
printf("\nNeparni: ");
for (i = 0; i < brojNeparnih; i = i + 1)
printf("%d ", neparni[i]);
return 0;
}