/*© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 1
Uvod u programiranje
- predavanja -
prosinac 2022.
7. Funkcije
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 2
Funkcije
Uvod
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 3
▪ Učitati cijele brojeve m i n, pri čemu vrijedi 0 ≤ n ≤ m. Nije
potrebno provjeravati učitane vrijednosti. Izračunati binomni
koeficijent C(m, n) ili "m povrh n", pri čemu koristiti sljedeći izraz:
▪ Primjeri izvršavanja programa
Primjer
Upisite m i n > 10 3
C(10, 3) = 120
Upisite m i n > 12 8
C(12, 8) = 495
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 4
Rješenje bez funkcije (1. dio)
#include <stdio.h>
int main(void) {
int m, n;
int i, mFakt, nFakt, mnFakt, binKoef;
printf ("Upisite m i n > ");
scanf ("%d %d", &m, &n);
...
prog.c
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 5
Rješenje bez funkcije (2. dio)
...
mFakt = 1; m!
for (i = 2; i <= m; ++i)
mFakt = mFakt * i;
nFakt = 1; n!
for (i = 2; i <= n; ++i)
nFakt = nFakt * i;
mnFakt = 1; (m - n)!
for (i = 2; i <= m - n; ++i)
mnFakt = mnFakt * i;
binKoef = mFakt / (nFakt * mnFakt);
printf("C(%d, %d) = %d", m, n, binKoef);
return 0;
}
prog.c (nastavak)
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 6
▪ Sličan programski odsječak ponavlja se tri puta
▪ Nedostaci:
▪ broj linija programskog koda raste
▪ povećava se mogućnost pogreške (kod pisanja i kod izmjene)
▪ Preporuka:
▪ program razdvojiti u logičke cjeline koje obavljaju određene, jasno
definirane poslove
Komentar prethodnog rješenja
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 7
Rješenje s korištenjem funkcije (1. dio)
#include <stdio.h> zbog printf u funkciji main
// Funkcija za racunanje n faktorijela
int fakt(int n) {
int i;
int umnozak = 1;
for (i = 2; i <= n; ++i)
umnozak = umnozak * i;
return umnozak;
}
...
prog.c
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 8
Rješenje s korištenjem funkcije (2. dio)
...
// kolokvijalno: glavni program
int main(void) {
int m, n;
int binKoef;
printf ("Upisite m i n > ");
scanf ("%d %d", &m, &n);
binKoef = fakt(m) / (fakt(n) * fakt(m - n));
printf("C(%d, %d) = %d", m, n, binKoef);
return 0;
}
prog.c (nastavak)
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 9
Alternativno: s funkcijom za binomni koeficijent
#include <stdio.h> zbog printf u funkciji main
// funkcija za racunanje n faktorijela
int fakt(int n) {
int i;
int umnozak = 1;
for (i = 2; i <= n; ++i)
umnozak = umnozak * i;
return umnozak;
}
// funkcija za racunanje binomnog keoficijenta
int binKoef(int m, int n) {
return fakt(m) / (fakt(n) * fakt(m - n));
}
...
// poziv funkcije u glavnom programu (funkciji main)
printf("C(%d, %d) = %d", binKoef(m, n));
prog.c
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 10
▪ domena funkcije fakt u prethodnoj varijanti je skup cijelih brojeva
iz intervala [0, 12] jer je 13! = 6 227 020 800
Varijanta s unsigned long long umjesto int
unsigned long long fakt(unsigned int n) {
unsigned int i;
unsigned long long umnozak = 1ULL;
for (i = 2U; i <= n; ++i)
umnozak = umnozak * i;
return umnozak;
}
unsigned long long binKoef(unsigned int m, unsigned int n) {
return fakt(m) / (fakt(n) * fakt(m - n));
}
// poziv funkcije u glavnom programu (funkciji main)
...
printf("C(%u, %u) = %llu", m, n, binKoef(m, n));
prog.c
▪ ovdje je domena funkcije fakt skup
cijelih brojeva iz intervala [0, 20].
Upisite m i n > 20 5
C(20, 5) = 15504
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 11
Korištenje boljeg algoritma
▪ Prethodni algoritam za izračunavanje binomnog koeficijenta je prikladan
za objašnjavanje koncepta funkcije, ali primjenom multiplikativne
formule dobilo bi se znatno bolje rješenje:
▪ izbjegava se veliki broj koraka pri zasebnom izračunavanju m!, n! i (m-n)!
▪ izbjegava se preliv koji može nastati zbog strmog rasta funkcije faktorijela
int binKoef(int m, int n) {
int rez = 1;
int i;
if (n < m - n)
for (i = 1; i <= n; ++i)
rez = rez * (m - n + i) / i;
else
for (i = 1; i <= m - n; ++i)
rez = rez * (n + i) / i;
return rez;
}
Upisite m i n > 20 5
C(20, 5) = 15504
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 12
Varijanta s unsigned long long umjesto int
unsigned long long
binKoef(unsigned int m,
unsigned int n) {
unsigned long long rez = 1ULL;
unsigned int i;
if (n < m - n)
for (i = 1U; i <= n; ++i)
rez = rez * (m - n + i) / i;
else
for (i = 1U; i <= m - n; ++i)
rez = rez * (n + i) / i;
return rez;
}
// poziv funkcije u glavnom programu (funkciji main)
...
printf("C(%u, %u) = %llu", m, n, binKoef(m, n));
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 13
▪ definicijom funkcije opisuje se
▪ tip rezultata funkcije
▪ naziv funkcije
▪ (opcionalno) lista parametara funkcije, za svaki parametar: tip i naziv
▪ tijelo funkcije: definicije i deklaracije, naredbe koje se obavljaju kad
se funkcija pozove
▪ (opcionalno) naredba za povratak rezultata i programskog slijeda
Definicija funkcije
tip_rezultata naziv_funkcije(lista_parametara) {
definicije, deklaracije i naredbe;
return rezultat;
}
Opći oblik
tijelo
funkcije
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 14
▪ tip rezultata (tip funkcije) mora biti naveden i može biti
▪ bilo koji tip podatka osim polja (array)
▪ osnovni tipovi, pokazivači, strukture
▪ npr. ako funkcija vraća rezultat tipa int, kažemo: funkcija je tipa int
▪ ako funkcija ne vraća rezultat (kažemo: funkcija je tipa void), kao
tip_rezultata mora se navesti ključna riječ void
Definicija funkcije: tip funkcije
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 15
▪ tip i naziv parametra trebaju biti navedeni za svaki parametar
(ako funkcija ima parametre)
▪ parametar može biti bilo kojeg tipa podatka osim polja (array)
▪ osnovni tipovi, pokazivači, strukture
▪ broj parametara nije ograničen (a može ih i ne biti)
▪ ako funkcija nema niti jedan parametar, tada se na mjestu
lista_parametara mora navesti ključna riječ void
▪ parametar je modifiable lvalue: u tijelu funkcije može se koristiti na isti
način kao svaka druga varijabla definirana u tijelu funkcije
▪ od varijable definirane u tijelu funkcije parametar se razlikuju samo po
tome što mu se na početku izvršavanja funkcije pridružuje vrijednost
argumenta s kojim je funkcija pozvana
Definicija funkcije: parametri
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 16
▪ povratak rezultata i programskog slijeda na pozivajuću razinu (na
mjesto u izrazu u kojem se nalazi poziv funkcije) obavlja se
naredbom return
▪ Opći oblik naredbe return izrazopcionalno;
▪ funkcija može vratiti najviše jednu vrijednost (ili niti jednu)
▪ rezultat (izraz) može biti bilo kojeg tipa podatka osim polja (array)
▪ ako se tip izraza razlikuje od tipa funkcije, obavlja se implicitna konverzija
vrijednosti rezultata u tip funkcije
▪ u funkciji koja ne vraća rezultat ova naredba se može
▪ izostaviti, u kojem slučaju će se povratak programskog slijeda
dogoditi na kraju tijela funkcije
▪ ili koristiti bez navođenja izraza koji predstavlja rezultat
▪ naredba se može navesti više puta unutar iste funkcije
▪ iako to nije sasvim u skladu sa strukturiranim programiranjem
Definicija funkcije: povratak rezultata
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 17
▪ funkcija x
n
, x ∈ R, n ∈ N0
Primjer: definicija funkcije
double eksp(float x, int n) {
int i;
double rez = 1.;
for (i = 0; i < n; ++i)
rez *= x;
return rez;
}
...
int main(void) {
...
Rezultat funkcije je tipa double.
Parametri funkcije
Varijable i, rez su lokalne varijable,
vidljive samo u tijelu funkcije
Naredba za povratak
(programski slijed i rezultat)
prog.c
▪ u programskom jeziku C funkcija se nikad ne
definira unutar definicije neke druge funkcije
definicija funkcije main
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 18
▪ argumenti funkcije su izrazi koji se navode pri pozivu funkcije, u
okruglim zagradama iza naziva funkcije, odvojeni zarezima
▪ argument može biti bilo koji tip podatka osim polja (array)
▪ osnovni tipovi, pokazivači, strukture
▪ broj i redoslijed argumenata treba odgovarati broju i redoslijedu
parametara u funkciji koja se poziva
▪ tipovi podataka argumenata moraju odgovarati tipovima podataka
odgovarajućih parametara ili mora biti moguća konverzija podatka iz
tipa podatka argumenta u tip podatka parametra
▪ npr. ako je parametar funkcije tipa double, funkcija se može pozvati s
argumentom tipa int (vodeći računa o mogućim gubicima informacija
koje mogu nastati pri konverziji tipova podataka)
▪ ako funkcija nema parametre, tada se pri pozivu funkcije na mjestu
liste argumenata ne piše ništa (ne piše se void)
Poziv funkcije: argumenti
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 19
Primjer: poziv funkcije
#include <stdio.h> zbog printf u funkciji main
double eksp(float x, int n) {
...
return rez;
}
...
int main(void) {
...
double y = eksp(3.f, 4);
printf("Tri na cetvrtu je %lf", y);
printf("Dva na petu je %lf", eksp(2.f, 5));
eksp(3.f, 2); ispravno, ali beskorisno
y = eksp(3.5f, 2) + 2 * eksp(2.1f, 3); 3.52 + 2 ∙ 2.13
y = eksp(eksp(2 * 3.f, 2), 4); (62
)
4
...
}
Argumenti
Parametri
prog.c
▪ argumenti mogu biti izrazi
▪ rezultat funkcije može se
koristiti u raznim izrazima
▪ za sada, definiciju funkcije main uvijek napisati na kraju. Kasnije će biti objašnjeno
na koji se način redoslijed pisanja definicija funkcija može promijeniti.
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 20
▪ funkcija koja nema parametre, ali vraća rezultat
Primjer
...
int prebroji(void) {
char c;
int brojac = 0;
do {
scanf("%c", &c);
++brojac;
} while (c != '#');
return brojac - 1;
}
...
int main(void) {
printf("%d\n", prebroji());
printf("%d\n", prebroji());
...
▪ broji koliko je znakova upisano preko
tipkovnice prije pojave prvog znaka #
koliko znakova?#a sada?#
15
7
##
0
0
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 21
▪ funkcija koja ima parametre, ali ne vraća rezultat
Primjer
...
void ispisXY(float x, float y) {
printf("(%.4f, %.4f)", x, y);
return; može se izostaviti
}
...
int main(void) {
float x1 = 3.25f, y1 = -12.f;
float x2 = 0.1f, y2 = 4.5f;
printf("Koordinate T1: ");
ispisXY(x1, y1);
printf("\nKoordinate T2: ");
ispisXY(x2, y2);
...
Koordinate T1: (3.2500, -12.0000)
Koordinate T2: (0.1000, 4.5000)
▪ ispisuje x, y koordinate unutar
okruglih zagrada, s 4 znamenke
iza decimalne točke
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 22
▪ funkcija koja nema parametre i ne vraća rezultat
Primjer
...
void preskoci(void) {
char c;
do {
scanf("%c", &c);
} while (c != '#');
return; može se izostaviti
}
...
int main(void) {
int prvi, drugi;
preskoci();
scanf("%d", &prvi);
preskoci();
scanf("%d", &drugi);
printf("prvi = %d, drugi = %d", prvi, drugi);
...
▪ preskače znakove upisane preko tipkovnice, do znaka #
▪ čita po jedan cijeli broj iza prva dva znaka #
preskoci sve ovo#567 preskoci i ovo#98765
prvi = 567, drugi = 98765
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 23
▪ funkcija u kojoj se na više mjesta koristi naredba return
Primjer
...
double apsolut(double x) {
if (x < 0) {
return -x;
} else {
return x;
}
}
...
int main(void) {
double x = -3.5;
printf("abs(%lf) = %lf", x, apsolut(x));
...
▪ izračunava apsolutnu vrijednost realnog broja
abs(-3.500000) = 3.500000
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 24
▪ implicitna konverzija argumenata
▪ slično, npr. funkcija sqrt iz <math.h>, čiji je parametar tipa double, vratit će ispravan
rezultat i onda kada se kao argument koristi cijeli broj
Primjer
...
double eksp(float x, int n) {
...
return rez;
}
...
int main(void) {
...
double y = eksp(3, 4);
printf("%lf", y);
...
bez konverzije, jer su
argument i parametar
istog tipa
int → float
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 25
▪ implicitna konverzija rezultata
Primjer
...
char malo_u_veliko(char c) {
if (c >= 'a' && c <= 'z')
return c - ('a' – 'A');
else
return c;
}
...
int main(void) {
printf("%c", malo_u_veliko('f')); F
printf("%c", malo_u_veliko('B')); B
printf("%c", malo_u_veliko('*')); *
bez konverzije, jer c već jest tipa char
int → char, jer c - ('a' – 'A') je tipa int
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 26
▪ funkcija ne može izmjenom vrijednosti parametara promijeniti
vrijednosti argumenata
▪ jer parametar sadrži kopiju vrijednosti argumenta
Primjer
#include <stdio.h>
void pokusajPromijenitiArgument(int n) {
n = 10;
printf("Funkcija je parametar promijenila u n = %d\n", n);
return;
}
int main(void) {
int n = 5;
printf("Funkcija je pozvana s argumentom n = %d\n", n);
pokusajPromijenitiArgument(n);
printf("Ali argument je ostao n = %d", n);
return 0;
}
Funkcija je pozvana s argumentom n = 5
Funkcija je parametar promijenila u n = 10
Ali argument je ostao n = 5
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 27
Funkcije
Mehanizmi
prijenosa argumenata i
povrata rezultata
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 28
▪ u trenutku poziva funkcije potrebno je rezervirati memoriju za
pohranu parametara i adrese instrukcije na koju se treba vratiti
(povratne adrese)
▪ za vrijeme izvršavanja funkcije potrebno je rezervirati memoriju
za varijable koje se definiraju u funkciji
▪ nakon završetka funkcije rezerviranu memoriju treba osloboditi
Mehanizam poziva funkcije
double eksp(float x, int n) {
double rez = 1.;
for (; n > 0; --n)
rez *= x;
return rez;
}
int main(void) {
double y;
y = eksp(3.f, 2)
+ eksp(2.f, 3);
...
return 0;
}
Operacijski
sustav
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 29
▪ svaka razina poziva funkcije zahtijeva rezervaciju memorije za
svoje parametre, varijable i povratnu adresu
▪ implementira se pomoću stoga. Osnovne operacije nad stogom su:
▪ dodavanje podatka na stog (push)
▪ uzimanje podatka s vrha stoga (pop)
▪ posljednji na stog postavljeni podatak prvi je na redu za uzimanje
▪ posljednji unutra, prvi van (last in, first out – LIFO)
Stog (stack) općenito
a a
b
a
b
c
a
b
c
d
a
b
c
a
b
a
b
e
a
b
a
push(a) push(b) push(c) push(d) pop() pop() push(e) pop() pop() pop()
dno
stoga
d c e b a
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 30
U programskom jeziku C (pojednostavljeno)
int main(void) {
int r, i = 2;
r = puta20(i);
...
return 0;
}
int puta20(int p) {
int rez;
rez = putaN(p, 20);
return rez;
}
int putaN(int p,
int n) {
int rez;
rez = p * n;
return rez;
}
p.a.2
p 2
n 20
rez ?
p.a.1
p 2
i 2
r ?
p.a.1 p.a.2
p.a.1
p 2
i 2
r ?
i 2
r ?
1
2
3
4
5
7 6 8
rez ?
p.a.1
p 2
i 2
r ?
rez ?
p.a.2
p 2
n 20
rez ?
p.a.1
p 2
i 2
r ?
5
6
4
6
3
2 7
7
1
p.a. = povratna adresa
dno
stoga
8
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 31
1. na stog: prostor za lokalne varijable r, i
2. na stog: vrijednost za parametar p i povratnu adresu p.a.1
3. na stog: prostor za lokalnu varijablu rez
4. na stog: vrijednosti za parametre p, n i povratnu adresu
p.a.2
5. na stog: prostor za lokalnu varijablu rez
6. uklanjanje lokalnih varijabli, parametara i povratne adrese
sa stoga nakon povratka na p.a.2
7. uklanjanje lokalnih varijabli, parametara i povratne adrese
nakon povratka na p.a.1
8. uklanjanje lokalnih varijabli sa stoga pri završetku programa
Objašnjenje
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 32
Funkcije
Rekurzivne funkcije
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 33
▪ Funkcija koja poziva samu sebe naziva se rekurzivnom funkcijom
▪ izravna rekurzija: npr. funkcija f sadrži poziv funkcije f
▪ neizravna rekurzija: npr. funkcija f sadrži poziv funkcije g koja sadrži
poziv funkcije f
▪ Primjer definicije i poziva rekurzivne funkcije
▪ Što će biti rezultat poziva funkcije? Koju veliku pogrešku sadrži
ova definicija funkcije?
Rekurzivna funkcija
void ispis(int n) {
printf("%d\n", n);
ispis(n - 1);
return;
}
... u funkciji main
int gg = 2;
ispis(gg);
2
1
0
... ? Kada će se ispisivanje
cijelih brojeva prekinuti?
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 34
▪ Zamislimo, radi vizualizacije, da postoji više instanci funkcije ispis
▪ Prije nego funkcija ispis pozvana s argumentom gg=2 završi,
poziva funkciju ispis s argumentom 1. Prije nego ova završi,
poziva funkciju ispis s argumentom 0, itd.
Redoslijed pozivanja
void ispis(int n) {
printf("%d\n", n);
ispis(n - 1);
return;
}
main
n n n
int gg = 2;
ispis(gg);
void ispis(int n) {
printf("%d\n", n);
ispis(n - 1);
return;
}
void ispis(int n) {
printf("%d\n", n);
ispis(n - 1);
return;
}
2 1 0 n -1 itd.
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 35
▪ Prije nego funkcija ispis pozvana s argumentom 2 završi (dakle, dok sa
stoga još nisu uklonjeni parametar n=2 i povratna adresa p.a.1 za
povratak u funkciju main), poziva funkciju ispis s argumentom 1. Prije
nego ova završi, poziva funkciju ispis s argumentom 0, itd.
▪ Smije li stog beskonačno rasti?
▪ kada se memorija inicijalno dodijeljena programu za stog potroši, program
će se prekinuti zbog pogreške tijekom izvršavanja.
Stog u loše definiranoj rekurzivnoj funkciji
p.a.2
n 1
p.a.1
n 2
gg 2
p.a.1
n 2
gg 2
p.a.4
n -1
p.a.3
n 0
p.a.2
n 1
p.a.1
n 2
gg 2
p.a.3
n 0
p.a.2
n 1
p.a.1
n 2
gg 2 gg 2
itd.
lokalna varijabla u
funkciji main
nakon poziva s
argumentom 2
nakon poziva s
argumentom 1
nakon poziva s
argumentom -1
nakon poziva s
argumentom 0
∞
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 36
▪ Rekurzivna funkcija se mora definirati tako da pod nekim uvjetima
prestane s daljnjim pozivanjem same sebe
Posljedica loše definirane rekurzivne funkcije
void ispis(int n) {
printf("%d\n", n);
ispis(n - 1);
return;
}
2
1
0
-1
...
-392858
-392859
Segmentation fault (core dumped)
void ispis(int n) {
printf("%d\n", n);
if (n > 0) {
ispis(n - 1);
}
return;
}
izvršavanje u operacijskom
sustavu Linux
2
1
0
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 37
▪ zamislimo, radi vizualizacije, da postoji više instanci funkcije ispis
Redoslijed pozivanja i povratka
void ispis(int n) {
printf("%d\n", n);
if (n > 0) {
ispis(n - 1);
}
return;
}
void ispis(int n) {
printf("%d\n", n);
if (n > 0) {
ispis(n - 1);
}
return;
}
void ispis(int n) {
printf("%d\n", n);
if (n > 0) {
ispis(n - 1);
}
return;
}
main
n 2 n 1 n 0
int gg = 2;
ispis(gg);
return 0;
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 38
Stog u ispravno definiranoj rekurzivnoj funkciji
p.a.2
n 1
p.a.1
n 2
gg 2
p.a.1
n 2
gg 2
p.a.2
n 1
p.a.1
n 2
gg 2
p.a.3
n 0
p.a.2
n 1
p.a.1
n 2
gg 2 gg 2
p.a.1
n 2
gg 2 gg 2
int gg = 2;
poziv
ispis(gg);
za gg=2
poziv
ispis(n-1);
za n=2
poziv
ispis(n-1);
za n=1
return;
return;
return;
return 0;
void ispis(int n) {
printf("%d\n", n);
if (n > 0) {
ispis(n - 1);
}
return;
}
int main(void) {
int gg = 2;
ispis(gg);
return 0;
}
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 39
▪ Rekurzivna definicija funkcije fact(n):
▪ 𝑓𝑎𝑐𝑡 𝑛 =
1 𝑧𝑎 𝑛 = 0
𝑛 ∙ 𝑓𝑎𝑐𝑡 𝑛 − 1 𝑧𝑎 𝑛 > 0
fact(4) =
4 ∙ (fact(3)) =
4 ∙ (3 ∙ (fact(2))) =
4 ∙ (3 ∙ (2 ∙ (fact(1)))) =
4 ∙ (3 ∙ (2 ∙ (1 ∙ (fact(0))))) =
4 ∙ (3 ∙ (2 ∙ (1 ∙ (1))))
Primjer: matematička definicija funkcije
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 40
▪ Matematički rekurzivni izrazi često se bez teškoća pretvaraju u
definiciju rekurzivne funkcije u programskom jeziku
Primjer: definicija funkcije u C-u
int fact(int n) {
int rez;
if (n == 0)
rez = 1;
else
rez = n * fact(n - 1);
return rez;
}
int fact(int n) {
if (n == 0)
return 1;
else
return n * fact(n - 1);
}
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 41
▪ Zamislimo, radi vizualizacije, da postoji više instanci funkcije fact
int fact(int n) {
int rez;
if (n == 0)
rez = 1;
else
rez = n * fact(n-1);
return rez;
}
Primjer: redoslijed pozivanja i povratka
int fact(int n) {
int rez;
if (n == 0)
rez = 1;
else
rez = n * fact(n-1);
return rez;
}
main
1
int f3;
f3 = fact(3);
2 1
6
int fact(int n) {
int rez;
if (n == 0)
rez = 1;
else
rez = n * fact(n-1);
return rez;
}
int fact(int n) {
int rez;
if (n == 0)
rez = 1;
else
rez = n * fact(n-1);
return rez;
}
n 3 n 2 n 1 n 0
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 42
Primjer: stog za poziv fact(3)
rez ?
p.a.3
n 1
rez ?
p.a.2
n 2
rez ?
p.a.1
n 3
f3 ?
fact(3);
return rez;
int fact(int n) {
int rez;
if (n == 0)
rez = 1;
else
rez = n * fact(n - 1);
return rez;
}
f3 ?
rez ?
p.a.1
n 3
f3 ?
rez ?
p.a.2
n 2
rez ?
p.a.1
n 3
f3 ?
rez ? → 1
p.a.4
n 0
rez ?
p.a.3
n 1
rez ?
p.a.2
n 2
rez ?
p.a.1
n 3
f3 ? f3 6
rez 1
p.a.3
n 1
rez ?
p.a.2
n 2
rez ?
p.a.1
n 3
f3 ?
rez 2
p.a.2
n 2
rez ?
p.a.1
n 3
f3 ?
rez 6
p.a.1
n 3
f3 ?
fact(2);
fact(1);
fact(0);
main
int f3;
f3 = fact(3);
*
return rez;
*
return rez;
*
return rez;
© ZPR-FER-UNIZG Uvod u programiranje 2022./2023. 43
▪ Korištenjem ovog tipa podatka, domena funkcije fact povećava se
na cijele brojeve iz intervala [0, 20]
Varijanta s unsigned long long umjesto int
unsigned long long
fact(unsigned int n) {
unsigned long long rez;
if (n == 0)
rez = 1ULL;
else
rez = n * fact(n - 1);
return rez;
}
unsigned long long
fact(unsigned int n) {
if (n == 0)
return 1ULL;
else
return n * fact(n - 1);
}
/*