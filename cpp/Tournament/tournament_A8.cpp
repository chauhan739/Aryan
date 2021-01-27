#include<iostream>
#include<time.h>
using namespace std;

class Racer
{
    private:
        char  name[30];
    public:
        void getDetails(void);
        void putDetails(void);
};

void Racer::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
}

void Racer::putDetails(void){
    cout << name;
}

void printMatch(Racer arr[], int);
 
int main()
{
  cout << "Enter total number of racers participating in this tournament: ";
    int n;
    cin >> n;
    Racer players[n];
    
    for(int i=0;i< n;i++){
        players[i].getDetails();
    }
     
    cout << endl << "Players participating in tournament:-\n";
    
    for(int i=0;i< n;i++){
      cout << i+1 << ". ";
        players[i].putDetails();
        cout << endl;
    }
  
  int x = sizeof(players) / sizeof(players[0]);
  srand(time(0));
  printMatch(players, n);
  

  
    return 0;
}

void printMatch(Racer a[], int n){

    cout << "\nMatches for round 1 for this tournament are:- " << endl;
  for(int i = 0;i < n; i+=2){
    cout << (i+2)/2 << ". ";
    a[i].putDetails();
    cout << " versus ";
    a[i+1].putDetails();
    cout << endl;
  }
  cout << "\n\nThis Match Making is done by a computer program (made by chauhan739IN).\nThis program is completly fair and unbiased\n";
  cout << "You cab check the program authenticity if you havon any doubt on it.\n";
  cout << "This program is avaiable on GitHub.";
}
