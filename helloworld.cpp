// my first C++ programm

#include <iostream>  // input/output
#include <string> // include strings
#include <vector> // vecotor paket

using namespace std; // standard libary (standard 98)

// main function
int main () 
{
   cout << "Hello World" << endl; // assignment (today rarely used) // endl = end of line
   cout.flush(); // Ausgabe focieren

//	map<string, set<string>>	myIdHash; // define hash for saving ID -> genes

	// read input from STDIN
	string line;
	while (getline (cin, line))
	{
		// cout << line << "\n";
		
		// get positions of \t
		size_t pos = line.find('\t'); // size_t int (32/64bit)
		// size_t find (const string& str, size_t pos = 0) const
		
		// cout << pos << "\n";

		// use substr to get ID (first element)
		string ID = line.substr (0, pos);
		cout << "ID\t" << ID << "\n";
		
		// use for & substr. to get genes (other elements)
		if (pos == string::npos)
			continue; // skip
		do
		{
			cout << pos << "\n";
			
			// get gene from coordinates
			string gene = line.substr (pos+1, line.find('\t', pos+1) - pos);
			cout << "gene\t" << gene << endl;
		} while ((pos = line.find('\t', pos+1)) != string::npos);

//		set<string> genes;

		// save hash
//		myIdHash.insert(pair<string, set<string>>("key","value")); 
	}

	return 0; // return code null -> mistake
}
