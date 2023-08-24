#include<iostream>
using namespace std;

int static MAX_NUMBER = 1000;
int specialization[MAX_NUMBER];
string patient[MAX_NUMBER];
int status[MAX_NUMBER];
int added = 0;

// bool check_specialization(int s){
//     if(specialization[s][4])
//     {
//         return true;
//     }
// }

void add_patient(){
    
}

void print_patients(){

}

void next_patient(){

}

int interface()
{
    while(true){
        cout<<"inter your choice : "<<"\n";
        cout<<"1) Add patient  "<<"\n";
        cout<<"2) Print all patients "<<"\n";
        cout<<"3) Next patient"<<"\n";
        cout<<"4) exit "<<"\n";
        int choice;
        cin>>choice;
        if (choice == 1)
            add_patient();
        else if(choice == 2)
            print_patients();
        else if(choice == 3)
            next_patient();
        else if(choice == 4)
            break;
        else
            cout<<"sorry that is not an option "; 
    }
    return 0;
}

int main() {
	
    interface();
    
	return 0;
}

