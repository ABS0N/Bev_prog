#include "std_lib_facilities.h"

int main()
try {
    int birth_year = 2000;

    cout << "decimal\t\t" << birth_year << '\n' << hex
         << "hexadecimal\t" << birth_year << '\n' << oct
         << "octal\t\t" << birth_year << '\n';

    cout << dec << 39 << '\n';

    cout << '|' << setw(8) << "Asd" << '|' << setw(8) << "Asdasd" 
         << '|' << setw(24) << "asdasdasd@gmail.com"
         << '|' << setw(16) << "(30) 123-1234" << "|\n"
         << '|' << setw(8) << "Dsa" << '|' << setw(8) << "Dsadsa"
         << '|' << setw(24) << "dsadsadsa@gmail.com"
         << '|' << setw(16) << "(40) 321-4321" << "|\n";
}
catch(exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Something troubling occurred..\n";
    return 2;
}