/**************************************
  Name: Rome.CPP  
	Copyright: (C) 2021
	Author: DevCP Fan
	Date: 1/11/21 19:36
	Description: 
	Chu so La Ma
	Int -> <- Rome
	123 -> CXXIII
	MMXXII -> 2022
	46 -> XLVI 
	Data type: Int -> <- string
	Form 
	int 10 digits
	rome: M D C L X V I 7 digit
	Cong AB A>=B 
	   VIII = 8
	Tru 49  A < B
	  4 = IV,  9 = IX
	  40 = XL, 90 = XC
	  400 = CD, 900 = CM	
	  Anh xa 1-1
****************************************/

#include <bits/stdc++.h> 

using namespace std; 
const int MN = 13;
const int ival[] =   { 1000, 900, 500, 400, 100, 90,    50,  40,   10,  9,    5,    4,   1 }; 
const string rval[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"}; 

// rot nuoc 3869 = MMMDCCCLXIX
// Dung = Dep = Tao nha / trong sang
string IntToRome(int t) {
   string r = "";
   for(int i = 0; i < MN; ++i) {
      while (t >= ival[i]) {
         t -= ival[i];
         r += rval[i];
      }   
   }
   return r;
}

// Tim vi ti xuat hien cua w trong rval
// Truyen theo bien truyen theo tri
// com(&gao, nuoc &)
int Find(string w) { // theo bien: dat ong dan
  for(int i = 0; i < MN; ++i)
     if (rval[i] == w) return i;
  return -1;   
}

// Tao string 2 ki tu tu 
string Sub2(string & r, int i) {
   string w = "";
   //w += r[i];
   //w += r[i+1];
   return w+r[i]+r[i+1]; 
} 
 
// Tao string 2 ki tu tu 
string Sub1(string & r, int i) {
   string w = "";
   //w += r[i];
   //w += r[i+1];
   return w+r[i]; 
} 

// uu tien cap Tru: 2 ki tu
// neu khong co cap tru: Tim 1 ki tu
// r = MXLVI.
int RomeToInt(string r) {
  int len = r.length();
  r += ".";
  int v = 0;  
  int i = 0;
  int j;   
  for(i = 0; i < len; ++i) {
    // Tim cap 2 ki tu
    // Tim duoc lay
    //p = Find(w2) 
    j = Find(Sub2(r, i));
    if (j >= 0) {
        v += ival[j];
        i += 1;
    }
    else { // Tim 1 ki tu
      v += ival[Find(Sub1(r, i))];
    }
  }
  return v;
}

void Run() {
  string w;   
  int y;
	 for(int i = 1; i < 399; ++i) {
      w = IntToRome(i);
      y = RomeToInt(w);
	    cout << "\n " << i << " -> " << w << " -> " << y;
	    if (y == i) cout << " CORRECT.";
	    else {
			  cout << " ERROR.";
			  break;
			}
	   
	 }
}

main() {
  Run();
  cout << "\n T h e   E n d";
  return 0;
}


