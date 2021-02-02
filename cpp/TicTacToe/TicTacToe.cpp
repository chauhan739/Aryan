#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

int n = 1, x = 0, y;
char mark, arr[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void print(string, string);
char chance();
void move(string, string);
int win();

int main(){
	
	string player1, player2;
	cout << "Enter name of Player 1: ";
	cin >> player1;
	cout << "Enter name of Player 2 : ";
	cin >> player2; cout << endl;
	
	while (x == 0){
	system("CLS");
	
	print(player1, player2);
	move(player1, player2);
	win();
	}
	
	system("CLS");
	
	print(player1, player2);
	
	if(x == 1){
		if(n % 2 == 1){
			cout << endl << player2 << " Wins" << endl;
		}
		else{
			cout << endl << player1 << " Wins" << endl;
		}
	}
	else
		cout << "Match Tied Up";
	
	return 0;
}

void print(string a, string b){
	
	
	cout << "TicTacToe\n\n";
	
	cout << a << ": X" << endl;
	cout << b << ": O" << endl << endl;

	cout << "   |   |   " << endl;
	cout << " " << arr[0][0] << " " << "|" << " " << arr[0][1] << " " << "|" << " " << arr[0][2] << " " << endl;
	cout << "___|___|___" << endl;
	cout << "   |   |   " << endl;
	cout << " " << arr[1][0] << " " << "|" << " " << arr[1][1] << " " << "|" << " " << arr[1][2] << " " << endl;
	cout << "___|___|___" << endl;
	cout << "   |   |   " << endl;
	cout << " " << arr[2][0] << " " << "|" << " " << arr[2][1] << " " << "|" << " " << arr[2][2] << " " << endl;
	cout << "   |   |   " << endl;
}

char chance(){
	if(n % 2 == 1){
		n++;
		return mark = 'X';
	}
	else{
		n++;
		return mark = 'O';
	}
}

void move(string a, string b){
	if(n % 2 == 1){
		cout << a << " enter position: ";
	}
	else if(n % 2 == 0){
		cout << b << " enter position: ";
	}
	cin >> y;
	
	if(y > 9 || y < 1)
		cout << "Enter valid position" << endl;
	else{
		int a = (y - 1)/3;
		int b = (y - 1)%3;
		
		if(arr[a][b] == 'X' || arr[a][b] == 'O'){
			cout << "Position already occupied. Please try again.\n";
			Sleep(2500);
		}
		else
			arr[a][b] = chance();
	}
}

int win(){
	if(arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][2] == arr[0][0]){
		return x = 1;
	}
	else if(arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][2] == arr[1][0]){
		return x = 1;
	}
	else if(arr[2][0] == arr[2][1] && arr[2][1]== arr[2][2] && arr[2][2] == arr[2][0]){
		return x = 1;
	}
	else if(arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] && arr[2][0] == arr[0][0]){
		return  x = 1;
	}
	else if(arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[2][1] == arr[0][1]){
		return x = 1;
	}
	else if(arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[2][2] == arr[0][2]){
		return x = 1;
	}
	else if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] == arr[0][0]){
		return x = 1;
	}
	else if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] == arr[0][2]){
		return x = 1;
	}
	else if(arr[0][0] != '1' && arr[0][1] != '2' && arr[0][2] != '3' && arr [1][0] != '4' && arr[1][1] != '5' && arr[1][2] != '6' && arr[2][0] != '7' && arr[2][1] != '8' && arr[2][2] != '9'){
		return x = 2;
	}
}
