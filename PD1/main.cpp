#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{ int n, m;
double GBP_Bendras=0.8729;
double GBP_Pirkti=0.8600;
double GBP_Parduoti=0.9220;
double USD_Bendras=1.1793;
double USD_Pirkti=1.1460;
double USD_Parduoti=1.2340;
double INR_Bendras=104.6918;
double INR_Pirkti=101.3862;
double INR_Parduoti=107.8546;
    cout << "Pasirink veiksma" << endl;
    cout << "1. Valiutos kurso palyginimas su kita valiuta" << endl;
    cout << "2. Galimybe isigyti valiutos (t. y. pirkti valiuta)" << endl;
    cout << "3. Galimybe parduoti valiuta (t. y. parduoti valiuta)." << endl;
    cout << "Iveskite skaiciu (1-3): ";
    cin >>n;
    return 0;
}
