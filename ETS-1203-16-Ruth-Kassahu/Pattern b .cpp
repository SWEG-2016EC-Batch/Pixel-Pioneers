#include <iostream>
using namespace std;

int main(){
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of columns: ";
    cin >> col;

    for(int i = 1; i <=row; i++){
        for(int j =1; j <=col; j++){
            cout << j << " ";
        } 
         cout << endl;
    }

    cout << "\n\n";

    for(char ch = 'A'; ch <= 'X'; ch++){
    
        cout << ch << " ";
         if(ch == 'F' || ch == 'L' || ch == 'R'){
            cout << endl;
            }   
    }

    cout << "\n\n";

    for(int i = 1; i <=row; i++){
        for(int j = 1; j <=i ;j++){
            cout << j << " ";
        }
         cout << endl;
    }

    cout << "\n\n";

for(int i = 1; i<= row; i++){
    for(int j = i; j<=col; j++){
        cout << " ";
    }
    for(int j = 1; j <= i; j++){
        cout  << j ;
    }
    cout << endl;
}
cout << "\n\n";

for(char ch ='A'; ch <= 'E'; ch++){
    for(char c = 'A'; c <= ch; c++){
        cout << c << " ";
    }
    cout << endl;
}
cout << "\n\n";
for(char ch = 'a'; ch <= 'e'; ch++){
    for(char c = 'a'; c <= 'e'; c++){
        cout << c << " ";
    }
    cout << endl;
}
cout << "\n\n";

for(int i = 1; i <= row; i++){
    for(int j =1; j<=col;j++){
        if(i == 1 || i == row || j == 1 || j == col){
            cout << "* ";

        }else{
            cout << "  ";
        }
    }
    cout << endl;
}

cout << "\n\n";

for(int i = 1; i <= row; i++){
    for(int j = i; j <=col; j++){
        cout << "* ";
    }
    cout << endl;
}

cout << "\n\n";

    for(int i =1; i<=row; i++){
        for(int j=i; j<=col; j++){
            cout << " ";
        }

        for(int j = 1; j <=i; j++){
            cout << "*";
        }

        for(int j = 1; j <= i-1; j++){
            cout << "*";
        }

        cout<< endl;
    }

    cout << "\n\n";

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= i; j++){
            cout << " ";
        } 
        for(int j=i;j<=col;j++){
            cout << "*";
        }
        for(int j=i;j<=col-1;j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n\n";

        for(int i = 1; i <= row; i++){
        for(int j = col; j >= 1; j--){
            if(i==1 || j == col || i == j){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "\n\n";

    
    for(int i = 1; i <=row; i++){
        for(int j = i; j<=col; j++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            if(j == 2 || (i == row && j != 1)){
                cout << "*";
            }else{
                cout << " ";
            }            
        }

        for(int j = 1; j <= i; j++){
            if(j == i || i == row){
                cout << "*";
            }else{
                cout << " ";
            }
        }

        cout << endl;
    }

}