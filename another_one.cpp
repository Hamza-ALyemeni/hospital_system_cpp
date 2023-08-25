#include<iostream>
using namespace std;

int const MAX_NUMBER = 1000;
int specialization[MAX_NUMBER];
string patient[MAX_NUMBER];
bool status[MAX_NUMBER];
int added = 0;

// bool check_specialization(int s){
//     if(specialization[s][4])
//     {
//         return true;
//     }
// }

void add_patient(){
    cout<<"enter specialization, name, status :";
    int s;
    cin>>s;
    if (s >= 1 && s <= 20)
    {
        specialization[added] = s;
        cin>>patient[added];
        cin>>status[added];
        added++;
    } else
    {
        cout<<"we don't have this specialization ";
    }
    
}

int count_paitents(int p)
{
    int counter = 0;
    for (int i = 0; i < added; i++)
    {
        if(specialization[i] == p)
            counter++;
    }
    
    return counter;
}

void print_patients(){
    
    for (int i = 1; i < 20; i++)
    {
        for (int k = 0; k < added; k++)
        {
            if (specialization[k] == i)
            {
                cout<<"There are "<<count_paitents(specialization[k])<<" patients in specialization "<<i<<"\n";
                break;
            }
            
        }
        
        for (int j = 0; j < added; j++)
        {
            if (specialization[j] == i)
            {
                cout<<patient[j]<<" ";
                cout<<status[j]<<"\n";
            }
            
        }
        
    }
    
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

