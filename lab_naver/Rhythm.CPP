/*
	Name: Rhytm.CPP
	Copyright: 
	Author: 
	Date: 20/03/22 18:21
	Description: 
	1. =
	2. <
	3. <=
	4. >
	5. >=
	0. ~	
*/

#include <bits/stdc++.h>

using namespace std;

const int MN = 200;
int a[] = {1, 3, 7, 10, 15, 20, 25, 30, 40, 100};
int n = 10;

void Go() {
  cout << " ? ";
  fflush(stdin);
  if (cin.get() == '.') exit(0);
} 

void Print(int a[], int d, int c, const char * msg = "") {
   cout << msg;
   for (int i = d; i <= c; ++i) 
      cout << " " << a[i];
}


void Print(int a[][MN], int d, int c, const char * msg = "") {
   cout << msg;
   for (int i = d; i <= c; ++i) 
      Print(a[i], d, c, "\n");
}

int Rhythm() {
  int g = 0, t = 0, b = 0;
  for(int i = 1; i < n; ++i) {
     if (a[i] == a[i-1]) ++b;
     else if (a[i] > a[i-1]) ++t;
     else ++g;
  }
  if (b > 0) b = 1;
  if (t > 0) t = 1;
  if (g > 0) g = 1;
  int v = 4*g + 2*t + b;
  if (v > 5) v = 0;
  return v;
}

// Lat mang a
// a = 12345
//     54321
void Rev() {
  int d = 0, c = n-1;
  int x;
  while(d < c) {
    x = a[d]; a[d] = a[c]; a[c] = x;
    ++d; --c;
  }
}

// 1= , 2 >, 3 >=, 4<. 5<= 
void Run() {
  cout << "\n " <<  Rhythm(); // > 2
  Rev();
  cout << "\n " << Rhythm(); //< 4
  
  a[2] = a[1];
  cout << "\n " <<  Rhythm(); // <=
  
	Rev();
  cout << "\n " << Rhythm(); // >= 3
  
  for(int i = 0; i < n; ++i) a[i] = 5;
  cout << "\n " << Rhythm(); // = 1
  
  a[1] = 7; a[3] = 9;
  cout << "\n " << Rhythm(); // = 1
  
  
}

main() {  
  Run();
  // ----------------------------
  cout << "\n T H E   E N D."; 
  return 0;       
}


