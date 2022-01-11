#include<iostream>
#include<string>
#include<math.h>

using namespace std;

const string units[] = {"" ,"One ","Two ","Three ","Four ","Five ","Six ","Seven ",
                "Eight ","Nine ","Ten ","Eleven ","Twelve ","Thirteen ","Fourteen ","Fifteen ",
                "Sixteen ","Seventeen ","Eighteen ","Nineteen "};
 
const string tens[] = {"" ,"" ,"Twenty ","Thirty ","Forty ","Fifty ","Sixty ","Seventy ","Eighty ","Ninety "};

unsigned long long int num1;
 
string americanwords(int n, string words)
{
    string wordsString="";

    if (n == 0)
    {
        return "";
    }

    if ((n/100) > 0)
    {
        wordsString += units[n/100] + "Hundred ";
    }
          
    if ((n%100) > 19)
    {
        return wordsString + tens[(n%100) / 10]  + units[(n%100) % 10] + words;
    }
    else 
    {
        return wordsString+ units[n%100] + words;
    }
}

string convertIntoAmerican(unsigned long long int n)
{
    string equiWords;
    
    if(n==0)
      return "Zero";
  
    equiWords = americanwords((n % 1000), "");
    equiWords = americanwords(((n / 1000) % 1000), "Thousand, ") + equiWords;
    equiWords = americanwords(((n / 1000000) % 1000), "Million, ") + equiWords;
    equiWords = americanwords(((n / 1000000000) % 1000), "Billion, ") + equiWords;
    equiWords = americanwords(((n / 1000000000000) % 1000), "Trillion, ") + equiWords;
    equiWords = americanwords(((n / 1000000000000000) % 1000), "Quadrillion, ") + equiWords;
    equiWords = americanwords(((n / 1000000000000000000) % 1000), "Quintillion, ") + equiWords;
    equiWords = americanwords(((n / 1000000000000000000000) % 1000), "Sextillion, ") + equiWords;
   
    return equiWords;
}
 
int main()
{
	cout<<"\n\nEnter the Figure to Convert: ";
    cin>>num1;

    if(num1>pow(10,19))
    	cout<<"Entered Number is Out of Range!!!!";
    else
        cout<<"\n\nAMERICAN WORDS: "+convertIntoAmerican(num1);
        
    return 0;
}
