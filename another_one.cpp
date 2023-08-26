#include<iostream>
using namespace std;

int const MAX_NUMBER = 1000;
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


void add_patient(){
    cout<<"enter specialization, name, status :";
    int s;
    cin>>s;
    if (s >= 1 && s <= 20)
    {
        if (count_paitents(s) == 5)
        {
             cout<<"sorry you can not add patients to this specialization ";
        }
        else
        {
            specialization[added] = s;
            cin>>patient[added];
            cin>>status[added];
            added++;
        }
        
    } else
    {
        cout<<"we don't have this specialization ";
    }
    
}


void print_patients(){
    
    
    for (int i = 1; i < 20; i++)
    {
        for (int k = added; k >= 0; k--)
        {
            if (specialization[k] == i)
            {
                cout<<"There are "<<count_paitents(specialization[k])<<" patients in specialization "<<i<<"\n";
                break;
            }
            
        }
        
        for (int j = added; j >= 0; j--)
        {
            if (specialization[j] == i && status[j] == 1)
            {
                cout<<patient[j]<<" ";
                cout<<status[j]<<"\n";
            }
            
        }

        for (int j = 0; j < added; j++)
        {
            if (specialization[j] == i && status[j] == 0)
            {
                cout<<patient[j]<<" ";
                cout<<status[j]<<"\n";
            }
            
        }
        
    }
    
}

void next_patient(){
    int n;
    bool found = false;
    cin>>n;
    for (int i = added ;i >= 0 ; i--)
    {
        if(specialization[i] == n && status[i] == 1){
            cout<<patient[i]<<" please go with Dr. ";
            found = true;
            specialization[i] = -1;
            break;
        }
    }

    if (!found)
    {
        for (int i = 0 ;i <= added ; i++ )
        {
            if(specialization[i] == n && status[i] == 0){
                cout<<patient[i]<<" please go with Dr. ";
                found = true;
                specialization[i] = -1;
                break;
            }
        }
    }

    if (!found)
    {
        cout<<" there is not patients in these specialization take a rest Dr :) ";
    }
            
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

