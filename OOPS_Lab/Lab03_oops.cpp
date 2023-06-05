// #include <iostream>
// using namespace std;
 
// // first base class
// class Parent1
// {  
    
//     public:
     
//     // first base class's Constructor   
//     Parent1()
//     {
//         cout << "Inside first base class" << endl;
//     }
// };
 
// // second base class
// class Parent2
// {
//     public:
     
//     // second base class's Constructor
//     Parent2()
//     {
//         cout << "Inside second base class" << endl;
//     }
// };
 
// // child class inherits Parent1 and Parent2
// class Child : public Parent1, public Parent2
// {
//     public:
     
//     // child class's Constructor
//     Child()
//     {
//         cout << "Inside child class" << endl;
//     }
// };
 
// // main function
// int main() {
     
//     // creating object of class Child
//     Child obj1;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
template <typename T> 
void bubbleSort(vector<T>&a, int n){ 
	for (int i = 0; i < n - 1; i++){
		for (int j = n - 1; i < j; j--){
			if (a[j] < a[j - 1]){
			    T temp = a[j];
			    a[j] = a[j-1];
			    a[j-1] = temp;
			}
		}
	}
}
template <typename t> 
t larget(vector<t>vec,int n){
    t temp = vec[0];
    for(auto x:vec){
        if(temp <= x)
            temp = x;
    }
    return temp;
}
template <typename k> 
k smallest(vector<k>vec,int n){
    k temp = vec[0];
    for(auto x:vec){
        if(temp >= x)
            temp = x;
    }
    return temp;
}
int main()
{
    vector<int> vec = {23,12,56,1,2,3,67,8,9,90,12,34};
    cout<<"Array : ";
    for(auto x:vec){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Largest number : "<<larget(vec,vec.size())<<endl;
    cout<<"Smallest number : "<<smallest(vec,vec.size())<<endl;
    cout<<"Sorted Array : ";
    
    //Calling template function 
    bubbleSort(vec,vec.size());
    for(auto x:vec){
        cout<<x<<" ";
    }
    cout<<endl;
	return 0;
};