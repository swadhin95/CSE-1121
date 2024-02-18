#include <stdio.h>

int main ()
{
char c = 'X';
char s[] = "abcdefghijklmnopqrstuvwxyz";
int i = 425;
short int j = 17;
unsigned int u = 0xf179U;
long int l = 75000L;
float f = 12.978F;
double d = -97.4583;
int c1, c2;
printf ("Integers:\n");
printf ("%i %o %x %u\n", i, i, i, i);
printf ("%x %X %#x %#X\n", i, i, i, i);
printf ("%+i % i %07i %.7i\n", i, i, i, i);
printf ("%i %o %x %u\n", j, j, j, j);
printf ("%i %o %x %u\n", u, u, u, u);
printf ("%ld %lo %lx %lu\n", l, l, l, l);
printf ("\n\nFloats and Doubles:\n");
printf ("%f %e %g\n", f, f, f);
printf ("%.2f %.2e\n", f, f);
printf ("%.0f %.0e\n", f, f);
printf ("%7.2f %7.2e\n", f, f);
printf ("%f %e %g\n", d, d, d);
printf ("%.*f\n", 3, d);
printf ("%*.*f\n", 8, 2, d);
printf ("\n\nCharacters:\n");
printf ("%c\n", c);
printf ("%3c%3c\n", c, c);
printf ("%x\n", c);
printf ("\n\nStrings:\n");
printf ("%s\n", s);
printf ("%.5s\n", s);
printf ("%30s\n", s);
printf ("%20.5s\n", s);
printf ("%-20.5s\n", s);
return 0;
}
