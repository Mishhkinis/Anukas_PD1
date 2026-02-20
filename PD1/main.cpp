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
      if (n==1){ // Palyginimas
    cout<<"Pasirinkite valiuta(1. GBP, 2. USD, 3. INR)"<<endl;
    cout<<"Iveskite skaiciu (1-3): "<<endl;
    cin >>m;}
     if ((n==1)&&(m==1)){
    cout <<"1EUR= "<<fixed << setprecision(2) << GBP_Bendras<<" GBP"<<endl;
    }
    else if (m==2){
    cout <<"1EUR= "<<fixed << setprecision(2) << USD_Bendras<<" USD"<<endl;
    }
    else if (m==3){
    cout <<"1EUR= "<<fixed << setprecision(2) << INR_Bendras<<" INR"<<endl;
    } if (n==2)
    cout <<"Kokia valiuta norite isigyti?(1. GBP, 2. USD, 3. INR)"<<endl; // PIRKIMAS
    int valiutaPIRKTI;
    cin>>valiutaPIRKTI;
    cout<<"Iveskite euru kieki"<< endl;
    int eurKIEKIS;
    cin>>eurKIEKIS;
    int pirkti;
    if (valiutaPIRKTI==1){
    pirkti=eurKIEKIS*GBP_Pirkti;
    cout<<"Jus gausite: "<<fixed << setprecision(2) <<pirkti<<" GBP"<<endl;
    }
    else if (valiutaPIRKTI==2){
    pirkti=eurKIEKIS*USD_Pirkti;
    cout<<"Jus gausite: "<<fixed << setprecision(2) <<pirkti<<" USD"<<endl;
    }
    else if (valiutaPIRKTI==3){
    pirkti=eurKIEKIS*INR_Pirkti;
    cout<<"Jus gausite: "<<fixed << setprecision(2) <<pirkti<<" INR"<<endl;
    }
    return 0;
}
