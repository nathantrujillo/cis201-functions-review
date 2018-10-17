/*
File: main.cpp
Description: Count the a's in a string. 
Author: Nathan Trujillo
Email: trujillon@student.vvc.edu
Date Created: 10/16/18
*/

#include<iostream>
#include<string>



using namespace std;




// The function counts a's in a string
int count_a_s(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++) 
    {
        char character = s.at(i);
        //cout << i << "s.at(" << i <<") = " << s.at(i) << endl;
        if (character == 'a' || character == 'A')
        {
            count++;
        }
    }
   
    return count;
}



int main()
{

    string input;
    cout << "Please type a string: ";
    getline(cin, input);
    cout << "There are " << count_a_s(input) << " letter 'a's." << endl;
    



}
