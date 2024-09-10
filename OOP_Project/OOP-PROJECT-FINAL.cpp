#include <iomanip>
#include <iostream>

#include <fstream>
#include <sstream>

using namespace std;
class Vehicle {
protected:
  string make;
  string model;
  int days;

public:
  Vehicle(string m, string m1, double d) {
    make = m;
    model = m1;
    days = d;
  }
  virtual double Rentalcost() = 0;

  virtual void display() = 0;
  string getMake() { return make; }

  string getModel() { return model; }
};
class hatchBack : public Vehicle {
public:
  hatchBack(string m, string m1, double d) : Vehicle(m, m1, d) {}
  double Rentalcost() override { return 1000.0 * days; }
  void display() override {
    cout << "CAR:  " << endl;
    cout << "Make: " << make << endl;
    cout << "Model " << model << endl;
  }
  void hatchBackshow() {

    cout << "\n\n\n\t\t........ Hatchback Vehicles .......... \t\t\t\t\n\n\n\n";
    cout << left << setw(10) << "code" << left << setw(20) << "Company" << left
         << setw(15) << "Make" << right << setw(20) << "Year" << right
         << setw(15) << "Rent" << endl;
    cout << left << setw(10) << "01 ." << left << setw(15) << "Suzuki" << left
         << setw(15) << "Cultus" << right << setw(20) << "2016" << right
         << setw(15) << "2000" << endl;
    cout << left << setw(10) << "02 ." << left << setw(15) << "Suzuki" << left
         << setw(15) << "Swift" << right << setw(20) << "2014" << right
         << setw(15) << "2000" << endl;
    cout << left << setw(10) << "03 ." << left << setw(15) << "Suzuki" << left
         << setw(15) << "Alto" << right << setw(20) << "2018" << right
         << setw(15) << "2000" << endl;
    cout << left << setw(10) << "04 ." << left << setw(15) << "Honda" << left
         << setw(15) << "City" << right << setw(20) << "2015" << right
         << setw(15) << "2000" << endl;
    cout << left << setw(10) << "05 ." << left << setw(15) << "Toyota" << left
         << setw(15) << "Vitz" << right << setw(20) << "2013" << right
         << setw(15) << "2000" << endl;
    cout << left << setw(10) << "06 ." << left << setw(15) << "KIA" << left
         << setw(15) << "Picanto" << right << setw(20) << "2022" << right
         << setw(15) << "2000" << endl;
    cout << left << setw(10) << "07 ." << left << setw(15) << "Diahatsu" << left
         << setw(15) << "Mira" << right << setw(20) << "2002" << right
         << setw(15) << "2000" << endl;
    cout << left << setw(10) << "08 ." << left << setw(15) << "Prince Pearl"
         << left << setw(15) << "Prince" << right << setw(20) << "2001" << right
         << setw(15) << "2000" << endl;
    cout << left << setw(10) << "09 ." << left << setw(15) << "United " << left
         << setw(15) << "Bravo" << right << setw(20) << "2017" << right
         << setw(15) << "1000" << endl;
  }
};
class sedan : public Vehicle {
public:
  sedan(string m, string m1, double d) : Vehicle(m, m1, d) {}
  double Rentalcost() override { return 1500.0 * days; }
  void display() override {
    cout << "CAR:  " << endl;
    cout << "Make: " << make << endl;
    cout << "Model " << model << endl;
  }
  void sedanshow() {

    cout << "\n\n\n\t\t........ Sedan Vehicles .......... \t\t\t\t\n\n\n\n";
    cout << left << setw(10) << "code" << left << setw(20) << "Company" << left
         << setw(15) << "Make" << right << setw(20) << "Year" << right
         << setw(20) << "Rent" << endl;
    cout << left << setw(10) << "01 ." << left << setw(15) << "Toyota" << left
         << setw(15) << "Yaris" << right << setw(20) << "2016" << right
         << setw(20) << "2000" << endl;
    cout << left << setw(10) << "02 ." << left << setw(15) << "Toyota " << left
         << setw(15) << "Prius" << right << setw(20) << "2018" << right
         << setw(20) << "2000" << endl;
    cout << left << setw(10) << "03 ." << left << setw(15) << "Honda" << left
         << setw(15) << "Civic" << right << setw(20) << "2015" << right
         << setw(20) << "2000" << endl;
    cout << left << setw(10) << "04 ." << left << setw(15) << "Toyota" << left
         << setw(15) << "Corolla" << right << setw(20) << "2013" << right
         << setw(20) << "2000" << endl;
    cout << left << setw(10) << "05 ." << left << setw(15) << "KIA" << left
         << setw(15) << "Cerato" << right << setw(20) << "2022" << right
         << setw(20) << "2000" << endl;
    cout << left << setw(10) << "06 ." << left << setw(15) << "Changan" << left
         << setw(15) << "Alsvin" << right << setw(20) << "2001" << right
         << setw(20) << "2000" << endl;
    cout << left << setw(10) << "07 ." << left << setw(15) << "Proton " << left
         << setw(15) << "Saga" << right << setw(20) << "2017" << right
         << setw(20) << "1000" << endl;
    cout << "\n\n\n\t\t........ Special Sedan Vehicles .......... "
            "\t\t\t\t\n\n\n\n";
    cout << left << setw(10) << "08 ." << left << setw(15) << "Hyundai" << left
         << setw(15) << "Ioniq" << right << setw(20) << "2014" << right
         << setw(20) << "2000" << endl;
    cout << left << setw(10) << "09 ." << left << setw(15) << "Hyundai" << left
         << setw(15) << "Elantra" << right << setw(20) << "2002" << right
         << setw(20) << "2000" << endl;
    cout << left << setw(10) << "10 ." << left << setw(15) << "Hyundai " << left
         << setw(15) << "Sonata" << right << setw(20) << "2017" << right
         << setw(20) << "1000" << endl;
  }
};
class SUV : public Vehicle {
public:
  SUV(string m, string m1, double d) : Vehicle(m, m1, d) {}
  double Rentalcost() override { return 1800.0 * days; }
  void display() override {
    cout << "SUV: " << endl;
    cout << "Make: " << make << endl << "Model: " << model << endl;
  }
  void suvshow() {

    cout << "\n\n\n\t\t........ SUV Vehicles .......... \t\t\t\t\n\n\n\n";
    cout << left << setw(10) << "code" << left << setw(20) << "Company" << left
         << setw(15) << "Make" << right << setw(20) << "Year" << right
         << setw(20) << "Rent" << endl;
    cout << left << setw(10) << "01 ." << left << setw(15) << "MG" << left
         << setw(15) << "HS" << right << setw(20) << "2016" << right << setw(20)
         << "2000" << endl;
    cout << left << setw(10) << "02 ." << left << setw(15) << "Cherry" << left
         << setw(15) << "Tiggo pro 6" << right << setw(20) << "2014" << right
         << setw(20) << "2000" << endl;
    cout << left << setw(10) << "03 ." << left << setw(15) << "KIA" << left
         << setw(15) << "Sorento" << right << setw(20) << "2018" << right
         << setw(20) << "2000" << endl;
    cout << left << setw(10) << "04 ." << left << setw(15) << "KIA" << left
         << setw(15) << "Santa FE" << right << setw(20) << "2015" << right
         << setw(20) << "2000" << endl;
    cout << left << setw(10) << "05 ." << left << setw(15) << "Changan" << left
         << setw(15) << "Oshan X7" << right << setw(20) << "2013" << right
         << setw(20) << "2000" << endl;
    cout << left << setw(10) << "06 ." << left << setw(15) << "Honda" << left
         << setw(15) << "HR-V" << right << setw(20) << "2022" << right
         << setw(20) << "2000" << endl;
    cout << left << setw(10) << "07 ." << left << setw(15) << "KIA" << left
         << setw(15) << "Sportage" << right << setw(20) << "2002" << right
         << setw(20) << "2000" << endl;
    cout << "\n\n\n\t\t........  Special  SUV Vehicles .......... \t\t\t\t\n\n";
    cout << left << setw(10) << "08 ." << left << setw(15) << "Hyundai" << left
         << setw(15) << "Tucson" << right << setw(20) << "2001" << right
         << setw(20) << "2000" << endl;
    cout << left << setw(10) << "09 ." << left << setw(15) << "Toyota" << left
         << setw(15) << "Land Cruiser" << right << setw(20) << "2017" << right
         << setw(20) << "1000" << endl;
    cout << left << setw(10) << "10 ." << left << setw(15) << "Toyota" << left
         << setw(15) << "Fortuner" << right << setw(20) << "2017" << right
         << setw(20) << "1000" << endl;
  }
};
class Truck : public Vehicle {
public:
  Truck(string m, string m1, double d) : Vehicle(m, m1, d) {}
  double Rentalcost() override { return 2000.0 * days; }
  void display() override {
    cout << "Truck:" << endl;
    cout << "Make:" << make << endl;
    cout << "Model: " << model << endl;
  }
  void truckshow() {

    cout << "\n\n\n\t\t........ Truck Vehicles .......... \t\t\t\t\n\n\n\n";
    cout << left << setw(10) << "code" << left << setw(20) << "Company" << left
         << setw(15) << "Make" << right << setw(15) << "Year" << right
         << setw(15) << "Rent" << endl
         << endl
         << endl;
    cout << left << setw(10) << "01 ." << left << setw(15) << "Toyota" << left
         << setw(15) << "Hilux" << right << setw(20) << "2016" << right
         << setw(15) << "2000" << endl;
    cout << left << setw(10) << "02 ." << left << setw(15) << "ISUZU" << left
         << setw(15) << "D-MAX" << right << setw(20) << "2014" << right
         << setw(15) << "2000" << endl;
    cout << left << setw(10) << "03 ." << left << setw(15) << "RAM" << left
         << setw(15) << "1500 Limited" << right << setw(20) << "2018" << right
         << setw(15) << "2000" << endl;
    cout << left << setw(10) << "04 ." << left << setw(15) << "Chevrolet"
         << left << setw(15) << "Silverado" << right << setw(20) << "2015"
         << right << setw(15) << "2000" << endl;
    cout << left << setw(10) << "05 ." << left << setw(15) << "Nissan" << left
         << setw(15) << "Titan platinium" << right << setw(20) << "2013"
         << right << setw(15) << "2000" << endl;
    cout << left << setw(10) << "06 ." << left << setw(15) << "Ford" << left
         << setw(15) << "F-150 Limited" << right << setw(20) << "2022" << right
         << setw(15) << "2000" << endl;
    cout << "\n\n\n\t\t........ LUXURY and special Truck Vehicles  .......... "
            "\t\t\t\t\n\n";
    cout << left << setw(10) << "07 ." << left << setw(15) << "Cadililac"
         << left << setw(15) << "Escalade" << right << setw(20) << "2002"
         << right << setw(15) << "2000" << endl;
    cout << left << setw(10) << "08 ." << left << setw(15) << "Toyota" << left
         << setw(15) << "Tundra" << right << setw(20) << "2001" << right
         << setw(15) << "2000" << endl;
    cout << left << setw(10) << "09 ." << left << setw(15) << "Range Rover"
         << left << setw(15) << "RR SV" << right << setw(20) << "2017" << right
         << setw(15) << "1000" << endl;
    cout << left << setw(10) << "09 ." << left << setw(15) << "GMC " << left
         << setw(15) << "Sierra Denali" << right << setw(20) << "2017" << right
         << setw(15) << "1000" << endl;
  }
};
class motorcycle : public Vehicle {
public:
  motorcycle(string m, string m1, double d) : Vehicle(m, m1, d) {}
  double Rentalcost() override { return 500 * days; }
  void display() override {
    cout << "Motor Cycle:" << endl;
    cout << "Make:" << make << endl;
    cout << "Model: " << model << endl;
    cout << "Total Vehicle Rent= " << Rentalcost() << endl;
  }
  void motorcycleshow() {

    cout << "\n\n\n\t\t........ Motorcycles Vehicles .......... "
            "\t\t\t\t\n\n\n\n";
    cout << left << setw(10) << "code" << left << setw(20) << "Company" << left
         << setw(15) << "Make" << right << setw(20) << "Year" << right
         << setw(15) << "Rent" << endl;
    cout << left << setw(10) << "01 ." << left << setw(15) << "Suzuki" << left
         << setw(15) << "100cc" << right << setw(20) << "2016" << right
         << setw(15) << "2000" << endl;
    cout << left << setw(10) << "02 ." << left << setw(15) << "Suzuki" << left
         << setw(15) << "150cc" << right << setw(20) << "2014" << right
         << setw(15) << "2000" << endl;
    cout << left << setw(10) << "03 ." << left << setw(15) << "Yamaha" << left
         << setw(15) << "YBR-350cc" << right << setw(20) << "2018" << right
         << setw(15) << "2000" << endl;
    cout << left << setw(10) << "04 ." << left << setw(15) << "Honda" << left
         << setw(15) << "CG-125" << right << setw(20) << "2015" << right
         << setw(15) << "2000" << endl;
  }
};
class Luxury : public Vehicle {
public:
  Luxury(string m, string m1, double d) : Vehicle(m, m1, d) {}
  double Rentalcost() override { return 6000.0 * days; }
  void display() override {
    cout << "CAR:  " << endl;
    cout << "Make: " << make << endl;
    cout << "Model " << model << endl;
  }
  void Luxuryshow() {

    cout << "\n\n\n\t\t........ Luxury Vehicles .......... \t\t\t\t\n\n\n\n";
    cout << left << setw(10) << "code" << left << setw(20) << "Company" << left
         << setw(15) << "Make" << right << setw(20) << "Year" << right
         << setw(15) << "Rent" << endl
         << endl
         << endl;
    cout << left << setw(10) << "01 ." << left << setw(15) << "Rolls Royce"
         << left << setw(15) << "Phantom" << right << setw(20) << "2016"
         << right << setw(15) << "6000" << endl;
    cout << left << setw(10) << "02 ." << left << setw(15) << "Bentley" << left
         << setw(15) << "Continental GT" << right << setw(20) << "2014" << right
         << setw(15) << "6000" << endl;
    cout << left << setw(10) << "03 ." << left << setw(15) << "Audi" << left
         << setw(15) << "A8" << right << setw(20) << "2018" << right << setw(15)
         << "6000" << endl;
    cout << left << setw(10) << "04 ." << left << setw(15) << "BMW" << left
         << setw(15) << " 7 series" << right << setw(20) << "2015" << right
         << setw(15) << "6000" << endl;
    cout << left << setw(10) << "05 ." << left << setw(15) << "Mercedes" << left
         << setw(15) << "Benz S-class" << right << setw(20) << "2013" << right
         << setw(15) << "6000" << endl;
    cout << left << setw(10) << "06 ." << left << setw(15) << "Lexus" << left
         << setw(15) << "LS-sedan" << right << setw(20) << "2022" << right
         << setw(15) << "6000" << endl;
    cout << left << setw(10) << "07 ." << left << setw(15) << "Range Rover"
         << left << setw(15) << "RR Autiobiography" << right << setw(20)
         << "2002" << right << setw(15) << "6000" << endl;
    cout << left << setw(10) << "08 ." << left << setw(15) << "Jaguar" << left
         << setw(15) << "XJ" << right << setw(20) << "2001" << right << setw(15)
         << "6000" << endl;
    cout << left << setw(10) << "09 ." << left << setw(15) << "Rolls Royce "
         << left << setw(15) << "Cullian" << right << setw(20) << "2017"
         << right << setw(15) << "6000" << endl;
  }
};
class choice {
public:
  int userChoice() {
    int c;
    string c1;
    cout << "\t\t**************************************************************"
         << endl;
    cout << "\t\t|                                                            |"
         << endl;
    cout << "\t\t|              Welcome to the XYZ Vehicle Rental System      |"
         << endl;
    cout << "\t\t|                                                            |"
         << endl;
    cout << "\t\t|              Your journey starts here! Rent your dream car |"
         << endl;
    cout << "\t\t|              quickly and easily with our simple system.    |"
         << endl;
    cout << "\t\t|                                                            |"
         << endl;
    cout << "\t\t|               Press Enter to continue......                |"
         << endl;
    cout << "\t\t|                                                            |"
         << endl;
    cout << "\t\t**************************************************************"
         << endl
         << endl;
    cin.get();
    cout << "\n\n We have discount packages to help you save during these "
            "times of inflation."
         << endl;
    cout << "\n Would you like to see them? \n\n\t\t Type 'Yes'  or  'No'."
         << endl;
    cin >> c1;
    cin.ignore();
    if (c1 == "YES" || c1 == "Yes" || c1 == "yes") {

      cout << "\t\t**************************************************" << endl;
      cout << "\t\tAvailable Packages based on the number of days:  *" << endl;
      cout << "\t\t*  1. Basic (5% discount for 3 days)             *" << endl;
      cout << "\t\t*  2. Standard (10% discount for 4-7 days)       *" << endl;
      cout << "\t\t*  3. Premium (15% discount for more than 7 days *" << endl;
      cout << "\t\tThese Packages will be applied automatcially      *" << endl;
      cout << "\t\tPress Enter to continue......                     *" << endl;
      cout << "\t\t***************************************************" << endl
           << endl;
      cin.get();

    } else {
      cout << "Al'right, Let's Start!!" << endl << endl;
    }

    cout << " \t\t**********************************************************"
         << endl;
    cout << " \t\t*                                                        *"
         << endl;
    cout << " \t\t* Let's start! What type of vehicle are you looking for? *"
         << endl;
    cout << " \t\t*                                                        *"
         << endl;
    cout << " \t\t**********************************************************"
         << endl;
    cin.get();
    cout << "\t\t Select Vehicle Category(1,2,3...): " << endl;
    cout << "\n\t\t1. HatchBack" << endl;
    cout << "\n\t\t2. Sedan" << endl << "\n\t\t3. SUV" << endl;
    cout << "\n\t\t4.Truck" << endl
         << "\n\t\t5.Motorcycle" << "\n\t\tLuxury vehicles" << endl;
    cout << "\n\nYour Input: ";
    cin >> c;
    cout << endl << endl;
    return c;
  }
};
class Package {
public:
  string name;
  double discount;
  Package(string n, double d) {
    name = n;
    discount = d;
  }
  double applyDiscount(double cost) { return cost - (cost * discount / 100); }
  void display() {
    cout << "Package:" << name << "(" << discount << "% discount)" << endl;
  }
};

class customerdata {
private:
  string name, fathername, address, city;
  int age;
  float cnic;

public:
  customerdata();
  void input();
  void show();

  // void saveToFile();
  // void readFromFile();
  string toCSV();
};

customerdata::customerdata() {
  name = "0";
  fathername = "0";
  address = "0";
  age = 0;
  cnic = 0;
}

void customerdata::input() {
  cout << "\n\n\t\t\t Customer Personal information \t\t\t\n\n\n";
  cout << "\n Enter your name :";
  getline(cin, name);
  cin.ignore();
  cout << "\n Enter your Father Name :";
  getline(cin, fathername);
  cin.ignore();
  cout << "\n Enter your Residential Address :";
  getline(cin, address);
  cin.ignore();
  cout << "\n Enter city name :";
  getline(cin, city);
  cin.ignore();
  cout << "\n Enter your Age :";
  cin >> age;
  cout << "\n Enter your CNIC :";
  cin >> cnic;
  cin.ignore();
}

void customerdata::show() {
  cout << "\n\n\t\t\t Customer Personal information \t\t\t\n\n\n";
  cin.ignore();
  cout << "\n  Customer name :" << name;
  cout << "\n  Customer Father Name :" << fathername;
  cout << "\n Customer Residential Address :" << address;
  cout << "\n Customer Age :" << age;
  cout << "\n Customer CNIC :" << cnic;
}

string customerdata::toCSV() {
  stringstream ss;
  ss << name << "," << fathername << "," << address << "," << city << ","
     << age;
  return ss.str();
}

class bankdetail : public customerdata {
private:
  string bankname, bankbranch, bankcity;
  float accnumber, totalincome;

public:
  bankdetail();
  void input();
  void show();
  // void saveToFile();
  // void readFromFile();
  string toCSV();
};

bankdetail::bankdetail() {
  bankname = "0";
  bankbranch = "0";
  bankcity = "0";
  accnumber = 0;
  totalincome = 0;
}

void bankdetail::input() {
  cin.ignore();
  cout << "\n\n\n\t\t Customer Bank details \t\t\t\n\n";
  cout << "\n Enter Bank name :";
  getline(cin, bankname);
  cin.ignore();
  cout << "\n Enter Bank Branch name :";
  getline(cin, bankbranch);
  cin.ignore();
  cout << "\n Enter Bank Account number :";
  cin >> accnumber;
  cin.ignore();
  cout << "\n Enter Total income :";
  cin.ignore();
  cin >> totalincome;
  cin.ignore();
}

void bankdetail::show() {
  cout << "\n\n\n\t\t Customer Bank details \t\t\t\n\n";
  cout << "\n Bank name :" << bankname;
  cout << "\n Bank Branch name :" << bankbranch;
  cout << "\n Bank Account number :" << accnumber;
  cout << "\n Your total income :" << totalincome;
}

string bankdetail::toCSV() {
  stringstream ss;
  ss << bankname << "," << bankbranch << "," << accnumber << "," << totalincome;
  return ss.str();
}
class vehicleSelection {
  double cost;
  choice c;
  int days;
  Vehicle *v;

public:
  vehicleSelection() : cost(0.0), days(0), v(nullptr) {}

  void selectVehicle() {
    int x = c.userChoice();
    if (x >= 1 && x <= 6) {
      int modelChoice;
      switch (x) {
      case 1: {
        hatchBack h1(" ", " ", 0);
        h1.hatchBackshow();
        cout << "Your Input: ";
        cin >> modelChoice;
        if (modelChoice >= 1 && modelChoice <= 9) {
          cout << "Enter the Number of days: ";
          cin >> days;
          switch (modelChoice) {
          case 1:
            v = new hatchBack("Suzuki", "Swift", days);
            break;
          case 2:
            v = new hatchBack("Suzuki", "Cultus", days);
            break;
          case 3:
            v = new hatchBack("Suzuki", "Alto", days);
            break;
          case 4:
            v = new hatchBack("Honda", "City", days);
            break;
          case 5:
            v = new hatchBack("Toyota", "Vitz", days);
            break;
          case 6:
            v = new hatchBack("KIA", "Picanto", days);
            break;
          case 7:
            v = new hatchBack("Daihatsu", "Mira", days);
            break;
          case 8:
            v = new hatchBack("Prince", "Pearl", days);
            break;
          case 9:
            v = new hatchBack("United", "Bravo", days);
            break;
          }
        } else {
          cout << "Invalid Choice" << endl;
        }
        break;
      }
      case 2: {
        sedan s1(" ", " ", 0);
        s1.sedanshow();
        cout << "Your Input: ";
        cin >> modelChoice;
        if (modelChoice >= 1 && modelChoice <= 9) {
          cout << "Enter the Number of days: ";
          cin >> days;
          switch (modelChoice) {
          case 1:
            v = new sedan("Toyota", "Yaris", days);
            break;
          case 2:
            v = new sedan("Toyota", "Prius", days);
            break;
          case 3:
            v = new sedan("Honda", "Civic", days);
            break;
          case 4:
            v = new sedan("KIA", "Cerato", days);
            break;
          case 5:
            v = new sedan("Changan", "Alsvin", days);
            break;
          case 6:
            v = new sedan("Proton", "Saga", days);
            break;
          case 7:
            v = new sedan("Hyundai", "Ioniq", days);
            break;
          case 8:
            v = new sedan("Hyundai", "Elantra", days);
            break;
          case 9:
            v = new sedan("Hyundai", "Sonata", days);
            break;
          }
        } else {
          cout << "Invalid Choice" << endl;
        }
        break;
      }
      case 3: {
        SUV u1(" ", " ", 0);
        u1.suvshow();
        cout << "Your Input: ";
        cin >> modelChoice;
        if (modelChoice >= 1 && modelChoice <= 10) {
          cout << "Enter the Number of days: ";
          cin >> days;
          switch (modelChoice) {
          case 1:
            v = new SUV("MG", "HS", days);
            break;
          case 2:
            v = new SUV("Cherry", "Tiggo Pro 6", days);
            break;
          case 3:
            v = new SUV("KIA", "Sorento", days);
            break;
          case 4:
            v = new SUV("KIA", "Santa FE", days);
            break;
          case 5:
            v = new SUV("Changan", "Oshan X7", days);
            break;
          case 6:
            v = new SUV("Honda", "HR-V", days);
            break;
          case 7:
            v = new SUV("KIA", "Sportage", days);
            break;
          case 8:
            v = new SUV("Hyundai", "Tucson", days);
            break;
          case 9:
            v = new SUV("Toyota", "Land Cruiser", days);
            break;
          case 10:
            v = new SUV("Toyota", "Fortuner", days);
            break;
          }
        } else {
          cout << "Invalid Choice" << endl;
        }
        break;
      }
      case 4: {
        Truck t1(" ", " ", 0);
        t1.truckshow();
        cout << "Your Input: ";
        cin >> modelChoice;
        if (modelChoice >= 1 && modelChoice <= 10) {
          cout << "Enter the Number of days: ";
          cin >> days;
          switch (modelChoice) {
          case 1:
            v = new Truck("Toyota", "Hilux", days);
            break;
          case 2:
            v = new Truck("ISUZU", "DMAX", days);
            break;
          case 3:
            v = new Truck("RAM", "1500 limited", days);
            break;
          case 4:
            v = new Truck("Chevrolet", "Silverado", days);
            break;
          case 5:
            v = new Truck("Nissan", "Titan Platinum Reserve", days);
            break;
          case 6:
            v = new Truck("Ford", "F-150 limited", days);
            break;
          case 7:
            v = new Truck("Cadillac", "Escalade", days);
            break;
          case 8:
            v = new Truck("Toyota", "Tundra", days);
            break;
          case 9:
            v = new Truck("Range Rover", "RR SV", days);
            break;
          case 10:
            v = new Truck("GMC", "Sierra Denali", days);
            break;
          }
        } else {
          cout << "Invalid Choice" << endl;
        }
        break;
      }
      case 5: {
        motorcycle m1(" ", " ", 0);
        m1.motorcycleshow();
        cout << "Your Input: ";
        cin >> modelChoice;
        if (modelChoice >= 1 && modelChoice <= 4) {
          cout << "Enter the Number of days: ";
          cin >> days;
          switch (modelChoice) {
          case 1:
            v = new motorcycle("Suzuki", "100cc", days);
            break;
          case 2:
            v = new motorcycle("Suzuki", "150cc", days);
            break;
          case 3:
            v = new motorcycle("Yamaha", "YBR-350cc", days);
            break;
          case 4:
            v = new motorcycle("Honda", "CG-125", days);
            break;
          }
        } else {
          cout << "Invalid Choice" << endl;
        }
        break;
      }
      case 6: {
        Luxury L1(" ", " ", 0);
        L1.Luxuryshow();
        cout << "Your Input: ";
        cin >> modelChoice;
        if (modelChoice >= 1 && modelChoice <= 9) {
          cout << "Enter the Number of days: ";
          cin >> days;
          switch (modelChoice) {
          case 1:
            v = new Luxury("Rolls Royce", "Phantom", days);
            break;
          case 2:
            v = new Luxury("Bentley", "Continental GT", days);
            break;
          case 3:
            v = new Luxury("Audi", "A8", days);
            break;
          case 4:
            v = new Luxury("BMW", "7 series", days);
            break;
          case 5:
            v = new Luxury("Mercedes", "Benz s-class", days);
            break;
          case 6:
            v = new Luxury("Lexus", "LS-sedan", days);
            break;
          case 7:
            v = new Luxury("Range Rover", "RR Autobiography", days);
            break;
          case 8:
            v = new Luxury("Jaguar", "XJ", days);
            break;
          case 9:
            v = new Luxury("Rolls Royce", "Cullinan", days);
            break;
          }
        } else {
          cout << "Invalid Choice" << endl;
        }
        break;
      }
      default:
        cout << "Invalid Choice" << endl;
        return;
      }
      cost = v->Rentalcost();
      cout << "Total Vehicle Rent= " << cost << endl;
    } else {
      cout << "Invalid Choice" << endl;
    }
  }

  int getDays() { return days; }
  Vehicle *getVehicle() { return v; }
  double getCost() { return cost; }
  void setCost(double newCost) { cost = newCost; }

  ~vehicleSelection() { delete v; }
};

int main() {
  vehicleSelection vs;
  vs.selectVehicle();

  Package packages[] = {Package("Basic", 5.0), Package("Standard", 10.0),
                        Package("Premium", 15.0)};

  int packageIndex = -1;
  if (vs.getDays() == 3) {
    packageIndex = 0;
  } else if (vs.getDays() > 3 && vs.getDays() <= 7) {
    packageIndex = 1;
  } else if (vs.getDays() > 7) {
    packageIndex = 2;
  }

  if (packageIndex != -1) {
    Package selectedPackage = packages[packageIndex];
    selectedPackage.display();
    double discountedCost = selectedPackage.applyDiscount(vs.getCost());
    vs.setCost(discountedCost);
  } else {
    cout << "No package applied" << endl;
  }

  customerdata customer;
  customer.input();
  customer.show();

  bankdetail bankDetails;
  bankDetails.input();
  bankDetails.show();

  ofstream csvFile("data.csv");
  if (!csvFile.is_open()) {
    cout << "Error opening file for writing!" << endl;
    return 1;
  }
  csvFile << "Customer Name,Father Name,Address,City,Age,Bank Name,Bank "
             "Branch,Bank Account Number,Total Income,Vehicle "
             "Type,Make,Model,Days,Rental Cost\n";
  csvFile << customer.toCSV() << "," << bankDetails.toCSV() << ","
          << vs.getVehicle()->getMake() << "," << vs.getVehicle()->getModel()
          << "," << vs.getDays() << "," << vs.getCost() << "\n";
  csvFile.close();

  cout << endl << endl << "Final Summary : " << endl << endl;

  ifstream file("data.csv");
  if (!file.is_open()) {
    cout << "Error opening file for reading!" << endl;
    return 1;
  }
  string line;
  while (getline(file, line)) {
    stringstream ss(line);
    string token;
    while (getline(ss, token, ',')) {
      cout << token << " | ";
    }
    cout << left << setw(15) << endl;
  }
}
