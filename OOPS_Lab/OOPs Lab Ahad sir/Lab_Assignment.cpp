// #include <iostream>
// using namespace std;

// int main()
// {
    
//     int a, b;
//     cin >> a>>b;


//     cout << "Before swapping." << endl;
//     cout << "a = " << a << ", b = " << b << endl;

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     cout << "\nAfter swapping." << endl;
//     cout << "a = " << a << ", b = " << b << endl;

//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
 

// int kthSmallest(int arr[], int N, int K)
// {
    
//     sort(arr, arr + N);
//     return arr[K - 1];
// }
 

// int main()
// {
//     int arr[] = { 12, 3, 5, 7, 19 };
//     int N = sizeof(arr) / sizeof(arr[0]), K;
//     cout<<"Enter the number of K: ";
//     cin >> K;
 
//     // Function call
//     cout << "K'th smallest element is "
//          << kthSmallest(arr, N, K);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num, rev=0, rem, temp;
//     cout<<"Enter the Number: ";
//     cin>>num;
//     temp = num;
//     while(temp>0)
//     {
//         rem = temp%10;
//         rev = (rev*10)+rem;
//         temp = temp/10;
//     }
//     if(rev==num)
//         cout<<"\nIt is a Palindrome Number";
//     else
//         cout<<"\nIt is not a Palindrome Number";
//     cout<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
 

// void findWinner(int n)
// {

//     if ((n - 1) % (n-1) == 0) {
//         cout << "Second Player wins the game";
//     }
//     else {
//         cout << "First Player wins the game";
//     }
// }
 
// // Driver function
// int main()
// {
 
//     int n;
//     cin >> n;
//     findWinner(n);
// }

//  #include<iostream>
//  using namespace std;

//  int sum(int x, int y)
//  {
//      return x+y;
//  }
//  double sum(double x, double y)

//  {
//      return x+y;
//  }

//  int sum (int x, int y, int z)
//  {
//      return x+y+z;
//  }

//  int main()
//  {
//      cout <<"The Sum of two integers: "<<sum(10, 20)<<endl;
//      cout <<"The Sum of two floats: "<<sum(10.5, 20.7)<<endl;
//      cout <<"The Sum of three integers: "<<sum(10, 20, 30)<<endl;
//  }

// #include<iostream>
// using namespace std;
// #define N 8
// void printBoard(int board[N][N]) {
//    for (int i = 0; i < N; i++) {
//       for (int j = 0; j < N; j++)
//          cout << board[i][j] << " ";
//          cout << endl;
//    }
// }
// bool isValid(int board[N][N], int row, int col) {
//    for (int i = 0; i < col; i++) //check whether there is queen in the left or not
//       if (board[row][i])
//          return false;
//    for (int i=row, j=col; i>=0 && j>=0; i--, j--)
//       if (board[i][j]) //check whether there is queen in the left upper diagonal or not
//          return false;
//    for (int i=row, j=col; j>=0 && i<N; i++, j--)
//       if (board[i][j]) //check whether there is queen in the left lower diagonal or not
//          return false;
//    return true;
// }
// bool solveNQueen(int board[N][N], int col) {
//    if (col >= N) //when N queens are placed successfully
//       return true;
//    for (int i = 0; i < N; i++) { //for each row, check placing of queen is possible or not
//       if (isValid(board, i, col) ) {
//          board[i][col] = 1; //if validate, place the queen at place (i, col)
//          if ( solveNQueen(board, col + 1)) //Go for the other columns recursively
//             return true;
//          board[i][col] = 0; //When no place is vacant remove that queen
//       }
//    }
//    return false; //when no possible order is found
// }
// bool checkSolution() {
//    int board[N][N];
//    for(int i = 0; i<N; i++)
//    for(int j = 0; j<N; j++)
//    board[i][j] = 0; //set all elements to 0
//    if ( solveNQueen(board, 0) == false ) { //starting from 0th column
//       cout << "Solution does not exist";
//       return false;
//    }
//    printBoard(board);
//    return true;
// }
// int main() {
//    checkSolution();
// }

// #include <bits/stdc++.h>
// using namespace std;
 
// // A function to generate odd sized magic squares
// void generateSquare(int n)
// {
//     int magicSquare[n][n];
 
//     // set all slots as 0
//     memset(magicSquare, 0, sizeof(magicSquare));
 
//     // Initialize position for 1
//     int i = n / 2;
//     int j = n - 1;
 
//     // One by one put all values in magic square
//     for (int num = 1; num <= n * n;) {
//         if (i == -1 && j == n) // 3rd condition
//         {
//             j = n - 2;
//             i = 0;
//         }
//         else {
//             // 1st condition helper if next number
//             // goes to out of square's right side
//             if (j == n)
//                 j = 0;
 
//             // 1st condition helper if next number
//             // is goes to out of square's upper side
//             if (i < 0)
//                 i = n - 1;
//         }
//         if (magicSquare[i][j]) // 2nd condition
//         {
//             j -= 2;
//             i++;
//             continue;
//         }
//         else
//             magicSquare[i][j] = num++; // set number
 
//         j++;
//         i--; // 1st condition
//     }
 
//     // Print magic square
//     cout << "The Magic Square for n=" << n
//          << ":\nSum of "
//             "each row or column "
//          << n * (n * n + 1) / 2 << ":\n\n";
//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++)
 
//             cout << setw(4) << magicSquare[i][j] << " ";
//         cout << endl;
//     }
// }
 
// int main()
// {
 
//     int n = 7;
//     generateSquare(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// float absolute(float var){
//     if (var < 0.0)
//         var = -var;
//     return var;
// }

// int absolute(int var) {
//      if (var < 0)
//          var = -var;
//     return var;
// }

// int main() {
    
//     cout << "Absolute value of -5 = " << absolute(-5) << endl;
//     cout << "Absolute value of 5.5 = " << absolute(5.5f) << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

class Base {
   public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1;
    derived1.print();
    return 0;
}