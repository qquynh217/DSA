/**************************************
  Name: XauAB.CPP
	Copyright: (C) 2021
	Author: DevCP Fan
	Date: 22/03/22 19:25
	Description: 
	len = n, duy nhat	k chu A lien tiep nhau 
	n = 5, k = 3
	AAABB
	AAABA
	BAAAB
	BBAAA
	ABAAA	

****************************************/

#include <bits/stdc++.h> 

using namespace std; // su dung vung lam viec chuan
const string DIGIT = "BA";
int n;
int k;
int maxk;
int maxn;

/*---------------------------------
 xet n bit trong so nhi phan x
 x chi chua duy nhat doan k bit 1 ?
---------------------------------*/
bool Test(int x) {
  int d = 0;
  while (x > 0) {
    if ((x & maxk) == maxk) ++d;
    x >>= 1;
  }
  return d == 1;
}

// chuyen n bit cua x sang dang string 1->A, 0->B
// 0111011 -> BAAABAA
string ToAB(int x) {
  string w = "";
  for(int i = 0; i < n; ++i) {
     w = DIGIT[x%2] + w;
     x >>= 1;
  }
  return w;
}

void AB(int inpn, int inpk) {
  // dung bien int xet n bit 0..(n-1)
  // (n-1)...3210
  n = inpn; k = inpk;
  maxk = (1 << k) - 1; //     111
  maxn = (1 << n); // 100000
  cout << "\n maxk = " << maxk;
  cout << "\n maxn = " << maxn;  
  int d = 0;
  for(int x = maxk; x < maxn; ++x) {
	   // x la so bin chi chua 01 
	   if (Test(x)) {
	     ++d;
	     cout << "\n " << ToAB(x); // cout << "\n " << x;
	   }
	} 
	cout << "\n Total " << d;
}

void Run() {
   AB(5, 3);  
   AB(10, 4);  
   
}

main() {
   Run();
  cout << "\n T h e   E n d";
  return 0;
}


