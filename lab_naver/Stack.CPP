/**************************************
  Name: Expression.CPP
  Copyright: (C) 2021
  Author: DevCPP Fan
  Date: 15/03/22 19:01
  Description: Stack
  P1. Olypic SV
     value of expression:
    var a:0, b:1, ...z:25, operators: +,-,*,/
    x = (c + d*g)*(e*k-b*d)
    x = (2 + 3*6) * (4*10-1*3) =
    x = (2 + 18) *(40 - 3) = 20*37 = 540
  2 ca
  2 Phase: nam duoc cac IT Knowledge
   Phase 2: Exe Polish Phep toan sau
   Phase 1:
   Do uu tien cua cac phep toan
      f () 1 ngoi ! > <  2 ngoi: * / %, + -
   e = sin(3x+y - z*t) + a*(b!-c*e)
   nho se duoc uu tien
   Algorithm
      e = ((c*d-v/k)*(a+b+d*e))
      st:
      pol = cd*vk/-ab+de*+*
      Duyet tung ki tu c in e
         c la bien: -> pol
         c la op: nap st de doi
         c = (: mnap st
         c = ):  tim noi trong st

   Phase 1: Compiler Dich
      Phat hien loi cu phap syntax
      To chuc thuc hien
      x = (c + d*g)*(e*k-b*d)
  -> dang de thuc hien Polish Lukasiewics
     Phep toan sau Prefix Infix Posfix
     a+b  ab+ 49
      x = (c + d*g)*(e*k-b*d)
      -> cdg*+ek*bd*-*
   Phase 2 Exe(pol)
   cdg*+ek*bd*-*
   st:740
  P2. Them so
    x = (c + d*g + 2)*(e*k-b*d - 3*5)
  P3. Them so La Ma
    x = (c + d*g + 2*VI)*(e*XI-b*d - III*5)
IBM Vua Ramsel IV tri vi bao lau o noi nao ?
The ki XXI
Them !><
e = "((d>!+c)*(e<-bd))>>"
pol

****************************************/
#include <bits/stdc++.h>
using namespace std;
const string OP = "+-*/%><!";

void Err(int e)
{
  cout << "\n ERROR No " << e << ": ";
  switch (e)
  {
  case 1:
    cerr << "Divide by zero.";
    break;
  case 2:
    cerr << " Negative parameter.";
    break;
  case 3:
    cerr << " Expected (";
    break;
  case 4:
    cerr << " Syntax Error.";
    break;
  } // switch
  exit(0);
}

// Degree : do uu tien
int Deg(char c)
{
  switch (c)
  {
  case '!':
  case '>':
  case '<':
    return 50;
    break;
  case '*':
  case '/':
  case '%':
    return 100;
    break;
  case '+':
  case '-':
    return 200;
    break;
  default:
    return 1000;
    break;
  } // switch
}

bool Var(char c)
{
  return 'a' < c && c <= 'z';
}
// c la phep toan ?
bool Op(char c)
{
  for (int i = 0; i < OP.length(); ++i)
    if (OP[i] == c)
      return true;
  return false;
}

int Factorial(int n)
{ // n!
  int r = 1;
  for (int i = 2; i <= n; ++i)
    r *= i;
  return r;
}

// Phase 2: Thuc hien BT Polisf tren st
int Exe(string pol)
{
  cout << "\n Exe " << pol;
  // e = "(c + d*g)*(e*k-b*d)"
  // pol = "c dg * + ek*bd*-*"
  int len = pol.length();
  int st[len];
  int p = -1; // con tro ngan duoi day
  for (int i = 0; i < len; ++i)
  {
    char c = pol[i];
    // if pol[i] la bien: nap val st
    if (Var(c))
    {
      st[++p] = (c - 'a');
      continue;
    }
    if (Op(c))
    {
      switch (c)
      {
      case '>':
        ++st[p];
        break;
      case '<':
        --st[p];
        break;
      case '!':
        if (st[p] < 0)
          Err(2);
        st[p] = Factorial(st[p]);
        break;
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
        if (st[p] == 0)
        {
          Err(1);
        }
        st[p - 1] /= st[p];
        --p;
        break;
      case '%':
        if (st[p] == 0)
        {
          Err(1);
        }
        st[p - 1] %= st[p];
        --p;
        break;
      } // switch
      continue;
    } // if
  }   // for
  return st[p];
}

// Phase 1
// e = ((c*d-v/k)*(a+b+d*e))
//   pol = cd*vk/-ab+de*+*
string Compiler(string e)
{
  cout << "\n " << e << " -> ";
  int len = e.length();
  char st[len];
  int p = -1;
  st[++p] = '@';
  string pol = "";
  char c;
  for (int i = 0; i < len; ++i)
  {
    c = e[i];
    cout << "\n c " << c;
    if (Var(c))
    {
      pol += c;
      continue;
    }
    if (c == '(')
    {
      st[++p] = c;
      continue;
    }
    if (c == ')')
    {
      while (st[p] != '(')
      {
        if (st[p] == '@')
          Err(3);
        if (Op(st[p]))
        {
          pol += st[p];
          --p;
        }
      }
      --p;
      continue;
    }
    if (Op(c))
    {
      while (Deg(st[p]) <= Deg(c))
      {
        pol += st[p];
        --p;
      }
      st[++p] = c;
      continue;
    }
  } // for
  // vet st
  while (Op(st[p]))
  {
    pol += st[p];
    --p;
  }
  if (p > 0)
    Err(4);
  // e = a*b + c*d*e
  // +*
  // ab*cd*e*+
  cout << "\n " << pol;
  return pol;
}

void Test()
{
  string e = "(d> - c<*f)>>"; // 1
  string pol = Compiler(e);
  cout << "\n " << Exe(pol);
}

main()
{
  Test();

  cout << "\n T h e   E n d";
  return 0;
}
