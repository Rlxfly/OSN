#include <iostream>

using namespace std;


int main(){
    int a, b, c, d, x;
    cin >> a >> b >> c >> d; // memasukkan angka ke console/data
    a = a + a; // variabel a isinya a + a
    b = a + b; // variabel b isimya a + b
    c = a + b + c; // variabel c isinya a + b + c 
    d = a + b + c + d; // variabel d isinya a + b + c + d 
    x = a + b + c + d; // variabel x isinya a + b + c + d
    cout << x;
    return 0;
}
/*

Misal: 2 2 2 2 
Maka 
- variabel a isinya 4 (2+2)
- variabel b isinya 6(2+4)
- variabel c isinya 12(2+4+6)
- variabel d isinya 24(12+6+4+2)
- variabel x isinya 46(24+12+6+4)

*/
