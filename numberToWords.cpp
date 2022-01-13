#include<iostream>
#include<string>
#include<math.h>

using namespace std;

const string units[] = {"" ,"One ","Two ","Three ","Four ","Five ","Six ","Seven ","Eight ","Nine ","Ten ","Eleven ","Twelve ","Thirteen ","Fourteen ","Fifteen ", "Sixteen ","Seventeen ","Eighteen ","Nineteen "};
const string tens[] = {"" ,"" ,"Twenty ","Thirty ","Forty ","Fifty ","Sixty ","Seventy ","Eighty ","Ninety "};
const string deno[] = {"" ,"Thousand, " ,"Million, ","Billion, ","Trillion, ","Quadrillion, ","Quintillion, ","Sextillion, ","Septillion, " ,"Octillion, ","Nonillion, ","Decillion, ","Undecillion, ","Duodecillion, ","Tredecillion, ","Quattuordecillion, ","Quindecillion, ","Sexdecillion, ","Septendecillion, ","Octodecillion, ","Novemdecillion, ","Vigintillion, ","Centillion, " };

unsigned long long int num1;

string americanwords(int n, string words)
{
    string wordsString="";

    if (n == 0)
        return "";
    
    if ((n/100) > 0)
        wordsString += units[n/100] + "Hundred ";
          
    if ((n%100) > 19)
        return wordsString + tens[(n%100) / 10]  + units[(n%100) % 10] + words;
    else 
        return wordsString+ units[n%100] + words;
}

string convertIntoAmerican(unsigned long long int n)
{
    string equiWords;
    int i=0,flag=0;
    
    if(n==0)
      return "Zero";
    
    while(n)
    {
    	equiWords = americanwords(n%1000,deno[i++]) + equiWords;
    	n/=1000;
    }
    return equiWords;
}
 
int main()
{
    cout<<"\n\nEnter the Figure to Convert: ";
    cin>>num1;

    if(num1>pow(10,19))
    	cout<<"\nEntered Number is Out of Range!!!!\nCPP only supports Number till Range 10^20 i.e unsigned long long int datatype ";
    else
        cout<<"\n\nAMERICAN WORDS: "+convertIntoAmerican(num1);
        
    return 0;
}
