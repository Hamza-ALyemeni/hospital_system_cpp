#include<iostream>
using namespace std;

int specialization[19][5]{0};
string patient[1000];
int status[1000];
int added = 1;
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
    if (specialization[s][4]){
       cout<<"you can't add patients to this specialization "<<"\n";
    }else{      
        cin>>patient[added];
        cin>>status[added];
        for (int i = 0; i < 5; i++)
        {
            if(!(specialization[s][i])){
                specialization[s][i] = added;
                break;
            }
        }
        added++;
    }
}


void print_patients(){
    for (int i = 0; i < 19; i++)
    {

         for (int j = 4; j == 0; j--)
        {
            int the_patient_data = specialization[i][j];
            if(specialization[i][j] != 0 && status[the_patient_data] == 1){
                if(j == 0)
                    cout<<"the specializtion with "<<i << " has those 1patients "<<"\n";

                cout<<patient[the_patient_data]<<" ";
                cout<<status[the_patient_data]<<"\n";
            }
        }

        for (int j = 4; j == 0; j--)
        {
            if(specialization[i][j] != 0){
                int the_patient_data = specialization[i][j];
                if(j == 0)
                    cout<<"the specializtion with "<<i << " has those patients "<<"\n";
                
                cout<<patient[the_patient_data]<<" ";
                cout<<status[the_patient_data]<<"\n";
            }
        }
        
    }
}

void next_patient(){

}
int interface()
{
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
        return 0;
    else
        cout<<"sorry that is not an option "; 
}

int main() {
	while(true)
        interface();
    
	return 0;
}

