/*
   Name: Expression.CPP
   Copyright: (C)2022
   Author: Devcpp Fan
   Date: 02/03/22 15:45
   Description:
  Olympic SV
  Given an expresson e
  variables: a:0, b:1, c:2, ...
  operators: +, -, *, /
  Compute the value of e
  E1: e = "((d+k)*(k-c))-(f+x)"
  val(e) = (3+10)*(10-2) = 13*8 = 104
Two Phase Algorithm
Phase 1: Compiler e -> Balan nguoc (Lukasievwics) phep toan sau
    Phat hien loi : sai cu phap

e = ((dk)*(k-c))-(f+x)
Polish = dk+kc-*fx+-
  1. posfix operator
  2. ko dung ngoac
Phase 2: Execution Use a stack
Polish = dk+kc-*fx+-
Phase 2
input: Polish
output: val int

Rule Ham, (), 1 ngoi, 2 ngoi, * /, + -
z + t*sin(0.3 + x*y) + v! - (a-(b*c))
Them cac ph toan
n! > tang 1, < giam 1


*/
#include <bits/stdc++.h>
// #include<stack>

using namespace std;

const string OP = "+-*/!><";

bool Var(char c)
{
   return (c >= 'a' && c <= 'z');
}

int Op(char c)
{
   for (int i = 0; i < OP.length(); ++i)
      if (OP[i] == c)
         return i;
   return -1;
}

// Phase 2
// input: string polish pol
// output: val(pol)
// using stack<int>
int Exe(string pol)
{
   int n = pol.length();
   int st[n];
   int p = -1; // stck ponter
   for (int i = 0; i < n; ++i)
   {
      // xet ki tu pol[i]
      if (Var(pol[i]))
      {
         // la bien: nap val vao st
         st[++p] = pol[i] - 'a';
         continue;
      }
      int j = Op(pol[i]);
      if (j != -1)
      {
         // la phep toan
         switch (pol[i])
         {
         case '>':
            ++st[p];
            break;
         case '<':
            --st[p];
            break;
         //   case '!': st[p] = Factorial(st[p]);
         //             break;
         case '+':
            st[p - 1] += st[p];
            --p;
            break;
         case '-':
            st[p - 1] -= st[p];
            --p;
            break;
         case '*':
            st[p - 1] *= st[p];
            --p;
            break;
         case '/':
            st[p - 1] /= st[p];
            --p;
            break;
         } // switch
      }    // if
   }       // for
   return st[p];
}

// Moi buoi hoc co biet bao dieu la

void Test()
{
   // e = z+(d+k)*(k-c) - (d+k)*(k-c)
   // string pol = "zdk+kc-*+dk+kc-*-"; // 25
   // a bcdef ghijk lmnop qrstu vwxyz
   // cout << "\n " << Exe(pol);
   // e = "(b!> + x<) * (d>>> - c<*v) "
   string pol = "b!>x<+d>>>c<v*-*";
   cout << "\n " << Exe(pol);
}

int main()
{
   Test();
   cout << "\n T h e   E n d";
   return 0;
}
