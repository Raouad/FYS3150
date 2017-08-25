/*This code is copied from the lectures
http://compphysics.github.io/ComputationalPhysics/doc/pub/languages/pdf/languages-print.pdf
and is a simple hello world program that will say Hello
and calculate sine of a given number*/

#include <iostream>  //input output
#include <cmath>    //math functions
//#include <cstdio>
using namespace std;   /*amespaces provide a method for preventing name
conflicts in large projects. Symbols declared inside a namespace block are placed
in a named scope that prevents them from being mistaken for identically-named
symbols in other scopes*/
int main (int argc, char* argv[])
{
  double r, s;        // declare variables
  r = atof(argv[1]);  // convert the text argv[1] to double
  s = sin(r);
  cout << "Hello, World! sin(" << r << ") =" << s << endl;
  return 0;           // success execution of the program
}
