/*
	Name: NTCD.CPP
	Copyright: 
	Author: 
	Date: 20/03/22 18:21
	Description: 
	So nguyen to duoc goi la cat duoc neu
	Ban than la ng to
	Moi nhat cat deu tao ra 2 so ng to
	Tim cac NTCD 2..1M
*/

#include <bits/stdc++.h>

using namespace std;
const int MN = 1000000 + 1; // 9999
bitset<MN> s; // sang
const int DEG[] = {10, 100, 1000, 10000, 100000}; 

void Go() {
  cout << " ? ";
  fflush(stdin);
  if (cin.get() == '.') exit(0);
} 

void Sieve(int n) {
   s.set(); // all bits = 1
   s[0] = s[1] = 0;
   int sn = (int)sqrt(n); 
   // xoa moi boi cua 2 ke tu 4
	 for(int i = 4; i <= n; i += 2) s[i] = 0;
	 // duyet cac so le
	 for(int i = 3; i <= sn; i += 2) 
	    if (s[i]) // i chua bi xoa
	      // xoa cac boi cua i ke tu i^2
	      for(int j = i*i; j <= n; j += i) 
	         s[j] = 0;
}

// x = abc|sdf : p / 10, 100, 1000, 10000
bool CatDuoc(int x) {
  int p;
  for(int i = 0; i < 5; ++i) {
    p = x / DEG[i];
    if (p == 0) break;
    if (!s[p]) return false;    
    if (!s[x % DEG[i]]) return false;
  }
  return true;
}

void Run() {
  Sieve(MN-1);
	cout << "\n " << 2;
	int d = 1;
	for(int i = 3; i < MN; i += 2) {	  
	  if (s[i] && CatDuoc(i)) {
	      ++d;
	      cout << "\n " << i;
	      Go();	    
	  }
	} // for
	cout << "\n Total " << d << " numbers."; 	
}
// cai tien: Doan truoc mot so nhat cat hong
// Ruot chua chan, 5 bo
// 1* bo
// *1 bo
 
main() {  
  Run();
  // ----------------------------
  cout << "\n T H E   E N D."; 
  return 0;       
}


