#include<iostream>
#include<conio.h>
using namespace std;
int main() {

   char str[100], *ptr;
   int i = 0;

   cout << "Enter the string : ";
   cin>>str;

   ptr = str;
   while (*ptr != '\0') {
      i++;
      ptr++;
   }
   cout << "\nLength of String : " << i;
   return 0;
}
