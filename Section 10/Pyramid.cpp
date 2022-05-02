#include <iostream>
#include <cstring>

using namespace std;

/*  PROGRAM DESIGNED TO PRINT THE ELEMENTS OF A STRING IN A MIRRORED WAY, HAVING 
THE FIRST ELEMENT IN THE CENTRE AS THE CURRENT INDEX OF THE ARRAY 
INDEXED WAY:
   0   
  010   
 01210 
 
 ETC.*/

int main(){
	
	string word {"abcd"};  // test string
	int i {}, j {}, k {}, count {0}, len = word.length();
	for(i=len;i>0;--i){
		//first n spaces
		for(j=0;j<i;++j){
			cout << " ";
		}
		//Central body print
		
		//from 0 to n index print
		for(k=0;k<count;++k){
			cout << word[k];
		}
		//from n index to 0 print
		for(k=count;k>=0;--k){
			cout << word[k];
		}
		
		//last n spaces
		for(j=0;j<i;++j){
			cout << " ";
		}
		count++;    // variables that take care about the actual index of the string
		cout << endl;
	}
	
	return 0;
}
