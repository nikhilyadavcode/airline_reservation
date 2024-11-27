#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
class Payment{
    public:
    bool processPayment(float amount){
        string cardNumber,expiryDate,cvv;
        cout<<"\nEnter your credit card number:";
        cin>>cardNumber;
        cout<<"Enter expiry date (MM/YY):";
        cin>>expiryDate;
        cout<<"Enter cvv:";
        cin>>cvv;

          cout << "Card Number Length: " << cardNumber.length() << endl;
    cout << "Expiry Date Length: " << expiryDate.length() << endl;
    cout << "CVV Length: " << cvv.length() << endl;

    if (cardNumber.length() != 16 || expiryDate.length() != 5 || cvv.length() != 3) {
        cout << "Invalid payment details. Please try again.\n";
        return false;
    }

    cout << "Processing payment of Rs." << amount << "\n";
    cout << "Payment successful!\n";
    return true;
    }
};

class Customer{
    public:
    static map<string,string> userDatabase;
    static map<string,int>userIdDatabase;
    string Username;
    string password;
    int customerId;

    void registerUser() {
    cout << "Enter a username: ";
    cin >> Username;
    cout << "Enter the password: ";
    cin >> password;

    if (userDatabase.find(Username) != userDatabase.end()) {
        cout << "Username already exists. Please try another.\n";
        return;
    }

    customerId = userDatabase.size() + 1;
    userDatabase[Username] = password;
    userIdDatabase[Username] = customerId;

    cout << "Registration successful! You can now log in.\n";
    cout << "Your customer ID is: " << customerId << "\n";
}

bool loginUser() {
    cout << "Enter username: ";
    cin >> Username;
    cout << "Enter password: ";
    cin >> password;

    if (userDatabase.find(Username) != userDatabase.end() && userDatabase[Username] == password) {
        cout << "Login Successfully\n";
        customerId = userIdDatabase[Username];
        return true;
    } else {
        cout << "Login failed! Please check your username and password\n";
        cout << "Stored username: " << Username << endl;
        cout << "Stored password: " << userDatabase[Username] << endl;
        return false;
    }
}
};
    map<string,string>Customer::userDatabase;
    map<string,int>Customer::userIdDatabase;
void mainMenu(Customer & Customer);

class Management {
public:
    Management(Customer & Customer) {
        mainMenu(Customer);
    }
};

class details {
public:
    static string name, gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information() {
        cout << "\nEnter the customer ID: ";
        cin >> cId;
        cout << "\nEnter the name: ";
        cin >> name;
        cout << "\nEnter the age: ";
        cin >> age;
        cout << "\nAddress: ";
        cin >> add;
        cout << "\nGender: ";
        cin >> gender;
        cout << "Your details are saved with us\n" << endl;
    }
};

int details::cId;
string details::name;
string details::gender;

    class SeatBooking{
        private:
        vector<vector<bool>>seats;
        int rows;
        int columns;

        public:
        SeatBooking(int r,int c):rows(r),columns(c){
            seats.resize(rows,vector<bool>(columns,false));
        }
        void displaySeats(){
            cout<<"Seat layout(0:Availabe,1:Booked):\n";
            for(int i=0;i<rows;i++){
                for(int j=0;j<columns;j++){
                    cout<<(seats[i][j]?"|__|":"|__|");
    
                }
                cout<<endl;
            }
        }
        bool bookSeat(int row,int col){
            if(row>=0 && row<rows && col>=0 && col<columns){
                if(!seats[row][col]){
                    seats[row][col]=true;
                    return true;
                }
                else{
                    cout<<"Seat already booked.\n";
                    return false;
                }
            }
            else{
                cout<<"Invalid seat number.\n";
                return false;
            }
        }
          };

class registration {
public:
    static int choice;
    int choice1;
    int back;
    static float charges;
    SeatBooking seatBooking;
    registration():seatBooking(5,6){

    }

    void flight(Customer &customer) {
        string flightN[] = { "Dubai", "Canada", "UK", "Australia", "Europe" };
        for (int i = 0; i < 5; i++) {
            cout << (i + 1) << ". Flight to " << flightN[i] << endl;
        }

        cout << "\nWelcome to the Airlines" << endl;
        cout << "Press the number of the country to which you want to book the flight: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "____________Welcome to Dubai Emirates_____________\n" << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;
            cout << "Following are the flights:\n" << endl;
            cout << "1. DUB-498\n\t07-08-2024 8:00 AM 10 hours Rs.14000" << endl;
            cout << "2. DUB-658\n\t08-08-2024 4:00 AM 12 hours Rs.10000" << endl;
            cout << "3. DUB-498\n\t09-08-2024 11:00 AM 11 hours Rs.9000" << endl;
            cout << "4. DUB-497\n\t10-08-2024 6:00 AM 13 hours Rs.17000" << endl;

            cout << "\nSelect the flight you want to book: ";
            cin >> choice1;

            if (choice1 == 1) {
                charges = 14000;
                cout << "\nYou have successfully booked the flight DUB-498" << endl;
            }
             else if (choice1 == 2) 
             {
                charges = 10000;
                cout << "\nYou have successfully booked the flight DUB-658" << endl;
            } 
            else if (choice1 == 3) 
            {
                charges = 9000;
                cout << "\nYou have successfully booked the flight DUB-498" << endl;
            } 
            else if (choice1 == 4)
             {
                charges = 17000;
                cout << "\nYou have successfully booked the flight DUB-497" << endl;
            } 
            else {
                cout << "Invalid input, shifting to the previous menu" << endl;
                flight(customer);
            }
            seatBooking.displaySeats();
            int row;
            int col;
            cout<<"Enter row number and column number for seat booking:";
            cin>>row>>col;
            if(seatBooking.bookSeat(row,col)){
                cout<<"Seat booked successfully.\n";
            }
            else{
                cout<<"Failed to book seat.\n";
            }
            break;
             Payment payment;
            if(payment.processPayment(charges)){
                seatBooking.displaySeats();
                int row,col;
                cout<<"Enter row number ans column number for seat booking:";
                cin>>row>>col;
                if(seatBooking.bookSeat(row,col)){
                    cout<<"Seat booked successfully.\n";
                }
                else{
                    cout<<"Failed to book seat.\n";
                }
            }
            else{
                cout<<"payment failed.please try again.\n";
                flight(customer);
            }
            break;

        case 2:
            cout << "__________Welcome to Canadian Airlines__________\n" << endl;
            cout << "Following are the flights:\n" << endl;
            cout << "1. CA-398\n\t11-03-2024 2:00 PM 20 hours Rs.34000" << endl;
            cout << "2. CA-258\n\t12-03-2024 8:00 PM 18 hours Rs.41000" << endl;
            cout << "3. CA-208\n\t03-04-2024 6:00 PM 18 hours Rs.37000" << endl;
            cout << "4. CA-258\n\t07-04-2024 9:00 PM 16 hours Rs.39000" << endl;

            cout << "\nSelect the flight you want to book: ";
            cin >> choice1;

            if (choice1 == 1) {
                charges = 34000;
                cout << "\nYou have successfully booked the flight CA-398" << endl;
            } 
            else if (choice1 == 2) {
                charges = 41000;
                cout << "\nYou have successfully booked the flight CA-258" << endl;
            } 
            else if (choice1 == 3) {
                charges = 37000;
                cout << "\nYou have successfully booked the flight CA-208" << endl;
            } 
            else if (choice1 == 4)
             {
                charges = 39000;
                cout << "\nYou have successfully booked the flight CA-258" << endl;
            } 
            else {
                cout << "Invalid input, shifting to the previous menu" << endl;
                flight(customer);
            }
            seatBooking.displaySeats();
            cout<<"Enter row number and column number for seat booking:";
            cin>>row>>col;
            if(seatBooking.bookSeat(row,col)){
                cout<<"Seat booked successfully.\n";
            }
            else{
                cout<<"Failed to book seat.\n";
            }
           if(payment.processPayment(charges)){
            cout<<"Flight to canada booked successfully!"<<endl;
           }
           else{
            cout<<"Payment failed.please try again.\n";
            flight(customer);
           }
            
            break;


        case 3:
            cout << "________Welcome to UK Airways_________\n" << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;
            cout << "Following is the flight:\n" << endl;
            cout << "1. UK-798\n\t12-07-2024 14 hours Rs.44000" << endl;
            cout<<"1.UK-668\n\t11-06-2024 12 hours Rs.47000"<<endl;
            cout<<"1.UK-651\n\t9-01-2024 11 hours Rs.41000"<<endl;
            cout<<"1.UK-657\n\t7-07-2024 12:30 hours Rs.45000"<<endl;


            cout << "\nSelect the flight you want to book: ";
            cin >> choice1;

            if (choice1 == 1) {
                charges = 44000;
                cout << "\nYou have successfully booked the flight UK-798" << endl;
            } 
            else if(choice1==2){
                charges==47000;
                cout<<"\nYou have successfully booked the flight UK-668"<<endl;
            }
            else if(choice1==3){
                charges==41000;
                cout<<"\nYou have successfully booked the flight UK-651"<<endl;
            }
            else if(choice1==4){
                charges==45000;
                cout<<"\nYou have successfully booked the flight UK-657"<<endl;
            }
            else {
                cout << "Invalid input, shifting to the previous menu" << endl;
                flight(customer);
            }
            seatBooking.displaySeats();
           
            cout<<"Enter row number and column number for seat booking:";
            cin>>row>>col;
            if(seatBooking.bookSeat(row,col)){
                cout<<"Seat booked successfully.\n";
            }
            else{
                cout<<"Failed to book seat.\n";
            }
            if(payment.processPayment(charges)){
                cout<<"Flight to Uk booked successfully!"<<endl;
            }
            else{
                cout<<"Payment failed.please try again.\n";
                flight(customer);
            }
            break;

        case 4:
            cout << "____________Welcome to US Airways____________\n" << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;
            cout << "Following are the flights:\n" << endl;
            cout << "1. US-567\n\t10-01-2024 9:00 AM 22 hours Rs.31000" << endl;
            cout << "2. US-658\n\t09-01-2024 3:30 PM 24 hours Rs.34000" << endl;
            cout << "3. US-508\n\t12-01-2024 10:00 AM 21 hours Rs.42000" << endl;

            cout << "\nSelect the flight you want to book: ";
            cin >> choice1;

            if (choice1 == 1) {
                charges = 31000;
                cout << "\nYou have successfully booked the flight US-567" << endl;
            }
             else if (choice1 == 2) {
                charges = 34000;
                cout << "\nYou have successfully booked the flight US-658" << endl;
            }
             else if (choice1 == 3) {
                charges = 42000;
                cout << "\nYou have successfully booked the flight US-508" << endl;
            }
             else {
                cout << "Invalid input, shifting to the previous menu" << endl;
                flight(customer);
            }
           seatBooking.displaySeats();

            cout<<"Enter row number and column number for seat booking:";
            cin>>row>>col;
            if(seatBooking.bookSeat(row,col)){
                cout<<"Seat booked successfully.\n";
            }
            else{
                cout<<"Failed to book seat.\n";
            }
           if(payment.processPayment(charges)){
            cout<<"Flight to US booked successfully!"<<endl;
            }
            else{
                cout<<"Payment failed.please try again.\n";
                flight(customer);
            }

            break;


        case 5:
            cout << "___________Welcome to Australia Airlines__________\n" << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;
            cout << "Following are the flights:\n" << endl;
            cout << "1. As-698\n\t18-07-2024 8:45 PM 10 hours Rs.15000" << endl;
            cout << "2. As-678\n\t21-07-2024 9:30 AM 11 hours Rs.17000" << endl;
            cout << "3. As-638\n\t23-07-2024 7:45 AM 13 hours Rs.19000" << endl;

            cout << "\nSelect the flight you want to book: ";
            cin >> choice1;

            if (choice1 == 1) {
                charges = 15000;
                cout << "\nYou have successfully booked the flight As-698" << endl;
            } 
            else if (choice1 == 2)
             {
                charges = 17000;
                cout << "\nYou have successfully booked the flight As-678" << endl;
            }
             else if (choice1 == 3) {
                charges = 19000;
                cout << "\nYou have successfully booked the flight As-638" << endl;
            }
             else {
                cout << "Invalid input, shifting to the previous menu" << endl;
                flight(customer);
            }
          seatBooking.displaySeats();
            cout<<"Enter row number and column number for seat booking:";
            cin>>row>>col;
            if(seatBooking.bookSeat(row,col)){
                cout<<"Seat booked successfully.\n";
            }
            else{
                cout<<"Failed to book seat.\n";
            }
             if(payment.processPayment(charges)){
                cout<<"Flight To Australia booked successfully"<<endl;

             }
             else{
                cout<<"Payment failed.Please try again.\n";
                flight(customer);
             }
            break;
        case 6:
            cout << "_____________Welcome to European Airlines____________\n" << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;
            cout << "Following are the flights:\n" << endl;
            cout << "1. EU-898\n\t02-06-2024 6:45 AM 11 hours Rs.41000" << endl;
            cout << "2. EU-868\n\t07-07-2024 7:30 AM 12 hours Rs.45000" << endl;
            cout << "3. EU-837\n\t03-07-2024 11:45 AM 13 hours Rs.43000" << endl;

            cout << "\nSelect the flight you want to book: ";
            cin >> choice1;

            if (choice1 == 1) {
                charges = 41000;
                cout << "\nYou have successfully booked the flight EU-898" << endl;
            }
             else if (choice1 == 2) {
                charges = 45000;
                cout << "\nYou have successfully booked the flight EU-868" << endl;
            }
             else if (choice1 == 3) {
                charges = 43000;
                cout << "\nYou have successfully booked the flight EU-837" << endl;
            } 
            else {
                cout << "Invalid input, shifting to the previous menu" << endl;
                flight(customer);
            }
           seatBooking.displaySeats();
            cout<<"Enter row number and column number for seat booking:";
            cin>>row>>col;
            if(seatBooking.bookSeat(row,col)){
                cout<<"Seat booked successfully.\n";
            }
            else{
                cout<<"Failed to book seat.\n";
            }
            break;
        if(payment.processPayment(charges)){
            cout<<"Flight to Europe booked successfully!"<<endl;
        }
        else{
            cout<<"Payment failed.Please try again.\n";
            flight(customer);
            break;
        }
        default:
            cout << "Invalid input, shifting you to the main menu" << endl;
            mainMenu(customer);
            break;
        }
      cout << "\nPress any key to go back to the main menu: ";
        cin >> back;
        if(back==1){
            mainMenu(customer);
        }
        else{
            mainMenu(customer);
        }
        
    }
};

float registration::charges;
int registration::choice;

class ticket : public registration, public details {
public:
    void Bill() {
        string destination = "";
        ofstream outf("record.txt");
        {
            outf << "_____________XYZ Airlines_____________" << endl;
            outf << "______________Ticket___________________" << endl;
            outf << "_______________________________________" << endl;

            outf << "Customer ID: " << details::cId << endl;
            outf << "Customer Name: " << details::name << endl;
            outf << "Customer Gender: " << details::gender << endl;
            outf << "\tDescription" << endl << endl;

            if (registration::choice == 1) {
                destination = "Dubai";
            }
             else if (registration::choice == 2) {
                destination = "Canada";
            } 
            else if (registration::choice == 3) {
                destination = "UK";
            }
             else if (registration::choice == 4) {
                destination = "USA";
            } 
            else if (registration::choice == 5) {
                destination = "Australia";
            }
             else if (registration::choice == 6) {
                destination = "Europe";
            }

            outf << "Destination:\t\t" << destination << endl;
            outf << "Flight cost:\t\t" << registration::charges << endl;
        }
        outf.close();
    }

    void disBill() {
        ifstream ifs("record.txt");
        {
            if (!ifs) {
                cout << "File error!" << endl;
                return;
            }

            while (!ifs.eof()) {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};

void mainMenu(Customer & Customer) {
    int lchoice;
    int schoice;
    int back;

    cout << "\t              XYZ Airlines\n" << endl;
    cout << "\t_____________Main Menu_______________" << endl;

    cout << "\t_____________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;

    cout << "\t| Press 1 to add the Customer Details\t\t|" << endl;
    cout << "\t| Press 2 for Flight Registration\t\t\t|" << endl;
    cout << "\t| Press 3 for Ticket and Charges\t\t\t|" << endl;
    cout << "\t| Press 4 to Exit\t\t\t\t\t\t|" << endl;

    cout << "\t|\t\t\t\t\t\t\t|" << endl;
    cout << "\t_____________________________________" << endl;

    cout << "Enter the choice: ";
    cin >> lchoice;

    details d;
    registration r;
    ticket t;

    switch (lchoice) {
    case 1:
        cout << "_____________Customers_____________\n" << endl;
        d.information();
        cout << "Press any key to go back to the Main menu: ";
        cin >> back;
        mainMenu(Customer);
        break;

    case 2:
        cout << "__________Book a flight using this system__________\n" << endl;
        r.flight(Customer);
        break;

    case 3:
        cout << "________Get your ticket________\n" << endl;
        t.Bill();
        cout << "Your ticket is printed, you can collect it\n" << endl;
        cout << "Press 1 to display your ticket: ";
        cin >> schoice;

        if (schoice == 1) {
            t.disBill();
            cout << "Press any key to go back to the main menu: ";
            cin >> back;
            mainMenu(Customer);
        }
         else {
            mainMenu(Customer);
        }
        break;

    case 4:
        cout << "\n\n\t____________Thank you_____________" << endl;
        break;

    default:
        cout << "Invalid input, please try again\n" << endl;
        mainMenu(Customer);
        break;
    }
}

int main() {
    Customer customer;
    customer.registerUser(); 

    if (customer.loginUser()) {  
        Management Mobj(customer); 
    }
    
    return 0;
} 