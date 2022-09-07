#include <iostream>

using namespace std;

int main() 
{
	char alphabets; 
	cout<<"\n\n\t\t\tAlphabets Identifiers"<<endl<<endl;  //title of program
	cout<<"\t      ****************************************";
	cout<<"\n\n\t\tPlease Enter The Alphabet: "; cin>>alphabets;  
	
	if (alphabets=='a'||alphabets=='e'||alphabets=='i'||alphabets=='o'||alphabets=='u'   //user may enter small alphabets
	  || alphabets=='A'||alphabets=='E'||alphabets=='I'||alphabets=='O'||alphabets=='U') //user may enter capital alphabets
	{
	cout<<"\n\n\t\tYour Entered Alphabet is a VOWEL";
	}
	
	else
	cout<<"\n\n\t\tYour Entered Alphabet is a CONSONANT";
	return 0;
}
