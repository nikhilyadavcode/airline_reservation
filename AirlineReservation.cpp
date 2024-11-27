#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void mainMenu();
class Management{
    public:
    Management(){
        mainMenu();
    }
};
class details{
    public:
    static string name,gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];
    void information(){
        cout<<"\n Enter the customer ID:";
        cin>>cId;
        cout<<"\n Enter the name:";
        cin>>name;
        cout<<"\n Enter the age:";
        cin>>age;
        cout<<"\n Address:";
        cin>>add;
        cout<<"\n Gender:";
        cin>>gender;
        cout<<"Your details are saved with us\n"<<endl;
    }
};
int details :: cId;
string details::name;
string details::gender;
class registration{
    public:
    static int choice;
    int choice1;
    int back;
    static float charges;
    void flight(){
        string flightN[]={"Dubai","Canada","Uk","Australia","Europe"};
        for(int i=0;i<6;i++){
            cout<<(i+1)<<".flight to"<<flightN[i]<<endl;
        }
        cout<<"\n Welcome to the aielines"<<endl;
        cout<<"Press the number of the country of which you want to back the flight:";
        cin>>choice;
        switch(choice){
            case1:
            {
                cout<<"____________Welcome to Dubai Emirates_____________\n"<<endl;
                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flight\n"<<endl;
                cout<<"1.DUB-498"<<endl;
                cout<<"\t 07-08-2024 8:00AM 10hours Rs.14000"<<endl;
                cout<<"1.DUB-658"<<endl;
                cout<<"\t 08-08-2024 4:00AM 12hours Rs.10000"<<endl;
                cout<<"1.DUB-498"<<endl;
                cout<<"\t 09-08-2024 11:00AM 11hours Rs 9000"<<endl;
                cout<<"\n Select the flight you want to book:"<<endl;
                cout<<"1.DUB-497"<<endl;
                cout<<"\t 10-08-2024 6:00AM 13hours Rs.17000"<<endl;
                cin>>choice1;

                if(choice==1){
                    charges==14000;
                    cout<<"\n You have successfully booked the flight DUB-498"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==2){
                    charges==10000;
                    cout<<"\n You have sucessfully booked the flight DUB-658"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==3){
                    charges=10000;
                    cout<<"\n You have sucessfully booked the flight DUB-498"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==4){
                    charges==17000;
                    cout<<"\n You have sucessfully booked the flight DUB-497"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input ,shifting to the previous menu"<<endl;
                    flight();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case 2:
            {
                cout<<"__________Welcome to canadian Airlines__________\n"<<endl;
                cout<<"Following are the flight \n"<<endl;
                cout<<"1.CA-398"<<endl;
                cout<<"\t 11-03-2024 2:00PM 20hours Rs.34000"<<endl;
                cout<<"1.CA-258"<<endl;
                cout<<"\t 12-03-2024 8:00PM 18hours Rs.41000"<<endl;
                cout<<"1.CA-208"<<endl;
                cout<<"\t 3-04-2024 6:00PM 18hours Rs.37000"<<endl;
                cout<<"1.CA-258"<<endl;
                cout<<"\t 7-04-2024 9:00PM 16hours Rs.39000"<<endl;

                cout<<"\n Select the flight you want to book:";
                cin>>choice1;

                if(choice==1){
                    charges==34000;
                    cout<<"\n You have successfully booked the flight CA-398"<<endl;
                    cout<<"You can go to menu and take the ticket"<<endl;
                }
                else if(choice1==2){
                    charges==41000;
                    cout<<"\n You can successfully booked the flight CA-258"<<endl;
                    cout<<"You can go to menu and take the ticket"<<endl;
                }
                else if(choice1==3){
                    charges==37000;
                    cout<<"\n You can successfully booked the flight CA-208"<<endl;
                    cout<<"You can go to menu and take the ticket"<<endl;
                }
                else if(choice1==4){
                    charges==39000;
                    cout<<"\n You can successfully booked the flight CA-258"<<endl;
                    cout<<"You can go to menu and take the ticket"<<endl;
                }
                else {
                    cout<<"Invalid input,shifting to the previous menu"<<endl;
                    flight();
                }
                cout<<"Press any key to go tha main menu:"<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case 3:
            {
                cout<<"________welcome to UK Airways_____________\n"<<endl;
                cout<<"Your comfort is your priority.Enjoy the journey"<<endl;
                cout<<"Following are the flight\n"<<endl;
                cout<<"1.UK-798"<<endl;
                cout<<"\t12-07-2024 14hours rs.44000"<<endl;
                cout<<"\n Select the flight you want to book:";
                cin>>choice1;


                if(choice1==1){
                    charges==44000;
                    cout<<"\n You have the successfully booked the flight UK-798"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input,shifting to the previous menu"<<endl;
                    flight();
                }
                cout<<"Press any key to go back to the main menu"<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case 4:
            {
                cout<<"____________Welcome to US Airways____________\n"<<endl;
                cout<<"your comfort is our priority.Enjoy the journey"<<endl;
                cout<<"Folloing are the flight \n"<<endl;
                cout<<"1.US-567"<<endl;
                cout<<"\t10-01-2024 9:00AM 22hours RS.31000"<<endl;
                cout<<"1.US-658"<<endl;
                cout<<"\t09-01-2024 3:30PM 24hours RS.34000"<<endl;
                cout<<"1.US-508"<<endl;
                cout<<"\t12-01-2024 10:00AM 21hours RS.42000"<<endl;

                cout<<"\n Select the flight you want to book"<<endl;
                cin>>choice1;

                if(choice1==1){
                    charges==31000;
                    cout<<"\n You have successfully booked the flight US-567"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==2){
                    charges==34000;
                    cout<<"\n You have successfully booked the flight US-658"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==3){
                    charges==42000;
                    cout<<"\n You have successfully booked the flight US-509"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input,shifting to the previous menu"<<endl;
                    flight();
                }
                cout<<"Press any to go back to the main menu"<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
                
                }
                case 5:
                {
                    cout<<"___________Welocome to Australia Airlines__________\n"<<endl;
                    cout<<"Your comfort is our priority.Enjoy the journey"<<endl;

                    cout<<"Following are the flight\n"<<endl;
                    cout<<"1.As-698"<<endl;
                    cout<<"\t18-07-2024 8:45PM 10hours RS.15000"<<endl;
                    cout<<"1.As-678"<<endl;
                    cout<<"\t21-07-2024  9:30AM 11hours RS.17000"<<endl;
                    cout<<"1.As-638"<<endl;
                    cout<<"\t23-07-2024 7:45AM 13hours RS.19000"<<endl;

                    cout<<"\t Select the flight you want to book"<<endl;
                    cin>>choice1;
                    if(choice1==1){
                        cout<<"You have successfully the flight As-698"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2){
                        cout<<"You have successfully the flight As-678"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3){
                        cout<<"You have the successfully the flight As-638"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input,shifting to the previous menu"<<endl;
                        flight();
                    }
                    cout<<"Press any key to go back to the main menu"<<endl;
                    cin>>back;
                    if(back==1){
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }
                    }
                    case 6:
                    {
                        cout<<"_____________Welcome to European Airlines____________\n"<<endl;
                        cout<<"Your comfort is our priority.Enjoy the journey"<<endl;
                        cout<<"Following are the flight \n"<<endl;

                        cout<<"1.EU -898"<<endl;
                        cout<<"\t02-6-2024  6:45AM 11hours RS.41000"<<endl;
                        cout<<"1.EU-868"<<endl;
                        cout<<"\t07-07-2024  7:30AM 12hours RS.45000"<<endl;
                        cout<<"1.EU-837"<<endl;
                        cout<<"\t03-07-2024 11:45AM 13hours RS.43000"<<endl;
                        cout<<"\t Select the flight you wany to book"<<endl;
                        cin>>choice1;
                        if(choice1==1){
                        cout<<"You have successfully the flight EU-898"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        if(choice1==2){
                            cout<<"You have the successfully the flight EU-868"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        if(choice1==3){
                            cout<<"You have the successfully the flight EU-837"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else{
                            cout<<"invalid input,shifting to the prevoius menu"<<endl;
                            flight();
                        }
                        cout<<"Press any key to go back the main menu"<<endl;
                        cin>>back;
                        if(back==1){
                            mainMenu();
                        }
                        else{
                            mainMenu();
                        }
                    }
                    default:{
                        cout<<"Invaid input,shifting you to the main menu"<<endl;
                        mainMenu();
                        break;
                    }
        }
    }
};
float registration::charges;
int registration:: choice;

class ticket:public registration,details{
    public:
    void Bill()
    {
        string destination="";
        ofstream outf("record.txt");
        {
            outf<<"_________XYZ Airlines_________"<<endl;
            outf<<"_________Ticket____________"<<endl;
            outf<<"_______________________"<<endl;
            outf<<"Customer ID:"<<details::cId<<endl;
            outf<<"Customer Name:"<<details::name<<endl;
            outf<<"Customer Gender:"<<details::gender<<endl;
            outf<<"\tDescripyion"<<endl<<endl;

            if(registration::choice==1){
                destination=="Dubai";
            }
            else if(registration::choice==2){
                destination=="Canada";
            }
            else if(registration::choice==3){
                destination=="UK";
            }
            else if(registration::choice==4){
                destination=="USA";
            }
            else if(registration::choice==5){
                destination=="Australia";
            }
            else if(registration::choice==6){
                destination=="Europe";
            }
            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Flight cost:\t\t"<<registration::charges<<endl;
        }
        outf.close();
}
void disBill()
{
    ifstream ifs("records.txt");
    {
        if(!ifs){
            cout<<"File error!"<<endl;
        }
        while(!ifs.eof()){
            ifs.getline(arr,100);
            cout<<arr<<endl;
        }
    }
    ifs.close();
}

};


void mainMenu(){
    int lchoice;
    int schoice;
    int back;

    cout<<"\t     XYZ Airlines \n"<<endl;
    cout<<"\t__________Main Menu________"<<endl;

    cout<<"\t_________________"<<endl;
    cout<<"\t|\t\t\t\t |"<<endl;

    cout<<"\t|\t Press 1 to add customer details \t|"<<endl;
    cout<<"\t|\t Press 2 for the flight registration   \t|"<<endl;
    cout<<"\t|\t Press 3 for ticket and changes        \t|"<<endl;
    cout<<"\t|\t Press 4 to Exit  \t|"<<endl;
    cout<<"\t|\t\t\t\t\t\t|"<<endl;
    cout<<"\t___________________"<<endl;

    cout<<"Enter the choice:";
    cin>>lchoice;

    details d;
    registration r;
    ticket t;

    switch(lchoice){
        case 1:
        {
            cout<<"____________Customers_________\n"<<endl;
        d.information();
        cout<<"Pree 1 to go back to main menu";
        cin>>back;

        if(back==1){
            mainMenu();
        }
        else{
            mainMenu();
        }
        break;
        }
        case 2:
        {
            cout<<"__________Book a flight using this system________\n"<<endl;
            r.flight();
            break;
        }
        case 3:
        {
        cout<<"____Get your Ticket___\n"<<endl;
        t.Bill();

        cout<<"Your ticket is printed you can collect it\n"<<endl;
        cout<<"Press 1 to display your ticket";
        cin>>back;

        if(back==1){
            t.Bill();
            cout<<"Press any key to go back to main menu:";
            cin>>back;
            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }
        }
        else{
            mainMenu();
        }
        break;
    }
    case 4:
    {
        cout<<"\n\n\t______Thank you____"<<endl;
        break;
    }
    default:
    {
        cout<<"Invalid input Please try again!\n"<<endl;
        mainMenu();
        break;
    }
    }


}
int main(){
    Management Mobj;
    return 0;
}