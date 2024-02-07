// #include <iostream>
// #include <stack>
// using namespace std;
// void reverseSentence(string s){
//     stack<string>st;
//     for(int i = 0; i<s.length(); i++){
//         string word = "";
//         while(s[i] != ' ' && i<s.length()){
//         word += s[i];
//         i++;
//         }
//     st.push(word);
//     }
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
//     cout<<endl;
// }

//  int main(){
//     string s = "What are you talking?";
//     reverseSentence(s);
//     return 0;
//  }


#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverseString(string& input)
{
    stack<char> charStack;

    // Push each character onto the stack
    for (char ch : input)
    {
        charStack.push(ch);
    }

    // Pop characters from the stack to form the reversed string
    string reversedString;
    while (!charStack.empty())
    {
        reversedString += charStack.top(); //: This line appends the character at the top of the stack to the reversedString. The += operator is used for string concatenation here.
        charStack.pop();
    }

    return reversedString;
}

int main()
{
    cout << "Enter a string: ";
    string inputString;
    getline(cin, inputString); //for taking input in string syntax- getline(cin, str);
    //This line uses the getline function to read a line of text from the standard input (cin) and stores it in the inputString variable. This allows the user to enter a string with spaces.

    string reversed = reverseString(inputString);

    cout << "Reversed string: " << reversed << endl;

    return 0;
}
