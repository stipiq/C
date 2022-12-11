#include <stdio.h>
#define MAXZNAM 31
int main(void) {
int i, brojZnamenki = 0;
int dekadski;
int binarni[MAXZNAM];
printf("Upisite cijeli broj > ");
scanf("%d", &dekadski);
while (dekadski > 0) {
binarni[brojZnamenki] = dekadski % 2;
dekadski = dekadski / 2;
brojZnamenki = brojZnamenki + 1;
}
for (i = brojZnamenki - 1; i >= 0; i = i - 1) {
printf("%d", binarni[i]);
}
return 0;
}