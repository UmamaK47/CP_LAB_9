/*
//TASK 1
#include<iostream>
using namespace std;
int main()
{
    int array[10], evenCounter = 0, oddCounter = 0;
    cout << "Enter 10 integers: \n";
    for (int i = 0; i < 10; i++) {
        cin >> array[i];

    }
    for (int j = 0; j < 10; j++) {
        if (array[j] % 2 == 0) {
            evenCounter++;
        }
        else {
            oddCounter++;
        }
    }
    cout << "\nNumber of Even numbers: " << evenCounter;
    cout << "\nNumber of Odd numbers: " << oddCounter;
    return 0;
}

//TASK 2
#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,9,1,3}, temp=0;
    cout<<"\nUnsorted Array: ";
    for(int i=0; i<4; i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"\nSorted Array: ";
    for(int j=0; j<4;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}

//TASK 3

#include<iostream>
using namespace std;
int main()
{
    int arr[4][3]={{1,2,3},{2,4,6},{3,5,-7},{-1,4,8}}, temp=0;
    cout<<"Given Array: \n";
    for(int i=0; i<4; i++){
       for(int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<"\nNegative numbers are: ";
    for(int i=0; i<4; i++){
       for(int j=0; j<3; j++){
        if(arr[i][j]<0){
            cout<<arr[i][j]<<" ";
        }
    }
    }

    return 0;
}

//TASK 4
#include<iostream>
using namespace std;
void maxint(int arr[], int size);
int main()
{
    int max_size;
    cout<<"Enter maximum size of array: ";
    cin>>max_size;
    int arr[max_size];
    cout<<"\nEnter "<<max_size<<" values in array: ";
    for(int i=0; i<max_size; i++){
        cin>>arr[i];
    }
    maxint(arr, max_size);

    return 0;
}
void maxint(int arr[], int size){
    int i, max_element_index=0;
    for(i=0; i<size; i++){

            if(arr[i]>arr[max_element_index]){
            max_element_index=i;
        }
    }
    cout<<"\nLargest number is: "<<arr[max_element_index];
    cout<<"\nIndex: "<<max_element_index;
}

//EXTRA TASK 1
#include<iostream>
#include<string>
using namespace std;
void reverseString(string input);
int main()
{
    string user_input="";
    cout<<"Enter a string to reverse it: ";
    getline(cin, user_input);
    reverseString(user_input);

    return 0;
}
void reverseString(string input){
    if(input.length()==0){
        return;
    }
    string remaining=input.substr(1);
    reverseString(remaining);
    cout<<input[0];
}
//EXTRA TASK 2
#include <iostream>
#include <string>
using namespace std;

void Permutations(string& str, int start, int end) {
    if (start == end) {
        cout << str << endl;  // Print the current permutation
        return;
    }

    for (int i = start; i <= end; i++) {
        // Swap characters at positions start and i
        swap(str[start], str[i]);

        // Recursively generate permutations for the remaining substring
       Permutations(str, start + 1, end);

        // Backtrack by swapping the characters back to their original positions
        swap(str[start], str[i]);
    }
}


int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "Permutations of the string '" << input << "':" << endl;
    Permutations(input, 0, input.length() - 1);

    return 0;
}

//EXTRA TASK 3
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void palindromeChecker(string& userInput);
int main()
{
    string userInput="";
    cout<<"-----Welcome to Palindrome Checker-----\nEnter a string to check whether it's a Palindrome or not: ";
    getline(cin, userInput);
    palindromeChecker(userInput);

    return 0;
}
void palindromeChecker(string& userInput){
    string reverseInput=userInput;
    reverse(reverseInput.begin(), reverseInput.end());//using reverse function to reverse the user input
    if(userInput==reverseInput){ //checking if the reversed input matches original input
        cout<<"\nIt's a Palindrome!";
    }
    else{
        cout<<"\nNot a Palindrome";
    }
}
*/