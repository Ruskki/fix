//  Made by Ruskki. You can find me over on GitHub! :)

#include <iostream>
#include <fstream>
#include <istream>
using namespace std;

int main() {
    char ch; int c=1;
    fstream out("Out.txt", ios::out);  
    fstream in("In.txt", fstream::in);
    while (in.get(ch)){
        if(c%2==0){out <<ch;}
        if(ch=='\n'){c++;};
    }
    out.close();
	in.close();
}