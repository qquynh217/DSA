/**************************************
  Name: 
	Copyright: (C) 2021
	Author: DevCP Fan
	Date: 1/11/21 19:36
	Description: 
  XauCohnChung

****************************************/

#include <bits/stdc++.h> 

using namespace std; 
string x;
string y;
const int MN = 2001;
int s[MN][MN];

// max len cua xau con chung
int XCC(int i, int j) {
  if (i < 0 || j < 0) return 0;
  if (i == 0 && j == 0) 
	   return (x[0] == y[0]) ? 1 : 0;
	return (x[i] == y[j])	? XCC(i-1, j-1) + 1
	       : max(XCC(i, j-1), XCC(i-1, j));
}

// Cai tien 1: Dung mang 2 chieu
// s[i][j] = XCC(i,j)
int CT1() {
  int lenx = x.length();
  int leny = y.length();
  // Dien mang s
  memset(s, 0, sizeof(s)); // lau bang
  // dien dong 0 so sanh x[0] voi moi y
  int i, j;
  i = 0;
  for (j = 0; j < leny; ++j) {
     if (x[i] == y[j]) {
       for (int k = j; k < leny; ++k) {
          s[i][k] = 1;
       }
     } // if
  } // for
  // dien cot 0 so sanh x[0] voi moi y
  j = 0;
  for (i = 1; i < lenx; ++i) {
     if (x[i] == y[j]) {
       for (int k = i; k < lenx; ++k) {
          s[k][j] = 1;
       }
     } // if
  } // for
  // Dien theo dong, trai qua phai
  for(i = 1; i < lenx; ++i) {
    for(j = 1; j < leny; ++j) {
		   s[i][j] = (x[i] == y[j]) ? s[i-1][j-1] + 1
		             : max(s[i][j-1], s[i-1][j]);
		} // for j
  } // for i
     
  return s[lenx-1][leny-1];   
}

int CT2() { // 2 mang 1D
  
  int lenx = x.length();
  int leny = y.length();
  int len = max(lenx, leny) + 1;
  int *a = new int[len];
  int *b = new int[len];
  int *c;
  
  // Dien mang s
  memset(a, 0, len*sizeof(int)); // lau bang
  memset(b, 0, len*sizeof(int)); // lau bang
  // dien dong a so sanh x[0] voi moi y
  int i, j;
  for (j = 0; j < leny; ++j) {
     if (x[i] == y[j]) {
       for (int k = j; k < leny; ++k) {
          a[k] = 1;
       }
     } // if
  } // for
  
  // Dien theo dong, trai qua phai
  for(i = 1; i < lenx; ++i) {
    b[0] = a[0];
    // dien dong b qua a    
    for(j = 1; j < leny; ++j) {
		   b[j] = (x[i] == y[j]) ? a[j-1] + 1
		             : max(a[j], b[j-1]);
		} // for j
		// chuyen b qua a
		c = a; a = b; b = c; 
  } // for i
     
  return a[leny-1];   

}

void Run() {
  x = "a012b345c678def9a012b345c678def9a012b345c678def9a012b345c678def9"; 
  y = "gh012i34j567k89nyzgh012i34j567k89nyzgh012i34j567k89nyzgh012i34j567k89nyzgh012i34j567k89nyzgh012i34j567k89nyzgh012i34j567k89nyzgh012i34j567k89nyzgh012i34j567k89nyzgh012i34j567k89nyzgh012i34j567k89nyzgh012i34j567k89nyz";
  cout << "\n " << x << "\n " << y;
  // cout << "\n " << XCC(x.length()-1, y.length()-1);
  cout << "\n " << CT2();
}

main() {
  Run();
  cout << "\n T h e   E n d";
  return 0;
}


