#include <iostream>

using namespace std;

int main()
{
    float a,b,hasil;
    char aritmatika;

    // Pembukaan
    cout << "\tSelamat Datang Di Program Permainan Calculator Sederhana" << endl;

    // User memasukan nilai
    cout << "\nMasukan nilai pertama \t: ";
    cin >> a;
    cout << "Masukan salah satu operator di bawah ini !!\n+\n-\n*\n/ \nOperator: ";
    cin >> aritmatika;
    cout << "Masukan nilai kedua \t: ";
    cin >> b;

    // code
    switch(aritmatika){
        case '+':
            hasil = a+b;
            cout << a << " + " << b << " = " << hasil << endl;
            break;
        case '-':
            hasil = a-b;
            cout << a << " - " << b << " = " << hasil << endl;
            break;
        case '*':
            hasil = a*b;
            cout << a << " * " << b << " = " << hasil << endl;
            break;
        case '/':
            hasil = a/b;
            cout << a << " / " << b << " = " << hasil << endl;
            break;

        default:
            cout << "\n\nOperator anda tidak di temukan!!\n";
    }

    cout << "\n\nTerimakasih telah bermain!!" << endl;


    return 0;
}
