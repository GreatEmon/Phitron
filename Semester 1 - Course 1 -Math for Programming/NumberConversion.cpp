// 3 October 2022
// Decimal <=> Binary <=> Decimal

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int decimalToBinary(double decimal)
{
   int dec = floor(decimal);
   int x = 1;
   int count = 0;
   while (dec >= x)
   {
      count++;
      x = x * 2;
   }
   int answer[count];
   int i = 0;
   while (i < count)
   {
      answer[i] = dec % 2;
      dec = dec / 2;
      i++;
   }

   dec = int(decimal);
   int dsize = 0;
   if (decimal != dec)
   {
      double pointVal = decimal - dec;
      while (pointVal != 0)
      {
         pointVal = pointVal * 2;
         if (pointVal >= 1)
         {
            pointVal = pointVal - floor(pointVal);
         }
         dsize++;
      }
      // pointval = 0
      int danswer[dsize];
      pointVal = decimal - dec;

      for (int i = 0; i < dsize; i++)
      {
         pointVal = pointVal * 2;
         danswer[i] = floor(pointVal);
         if (pointVal >= 1)
         {
            pointVal = pointVal - floor(pointVal);
         }
      }
      for (int j = --count; j >= 0; j--)
      {
         cout << answer[j];
      }
      cout << ".";
      for (int i = 0; i < dsize; i++)
      {
         cout << danswer[i];
      }
   }
   else
   {
      for (int j = --count; j >= 0; j--)
      {
         cout << answer[j];
      }
   }
}

// int decimalToOctal(int dec){
//   int size=0;
//   int x=1;
//   while(x<dec){
//     size++;
//     x=x*8;
//   }
//   int octal[size];
//   for(int i=0;i<size;i++){
//     octal[i]=dec%8;
//     dec=dec/8;
//   }
//   for(int j=--size;j>=0;j--){
//      cout<<octal[j];
//    }
// }

int decimalToHexadecimal(double decimal)
{
   int dec = floor(decimal);
   int x = 1;
   int count = 0;
   while (dec >= x)
   {
      count++;
      x = x * 16;
   }

   int answer[count];
   int i = 0;
   while (i < count)
   {
      int remainder = dec % 16;
      if (remainder <= 9)
      {
         answer[i] = remainder;
      }
      else
      {
         answer[i] = 55 + remainder;
      }
      dec = dec / 16;
      i++;
   }
   for (int j = --count; j >= 0; j--)
   {
      if (answer[j] <= 9)
      {
         cout << answer[j];
      }
      else
      {
         cout << char(answer[j]);
      }
   }
}

int main()
{
   double input;
   cin >> input;
   // decimalToBinary(input);
   //  decimalToOctal(input);
   decimalToHexadecimal(input);
}