// Modify the bubble sort algorithm to sort an array of strings in lexicographical order (alphabetically).

#include<iostream>
using namespace std;

int main(){

    int s_str;
    cout<<"Enter sixe of string : ";
    cin>>s_str;
    string str[s_str];
    
    for (int i = 0; i < s_str; i++) {
        cout << "String " << (i + 1) << ": ";
        if (cin >> str[i]) {
            // Input successful
            continue;
        } else {
            // End of input
            break;
        }
    }

    for(int counter = 1; counter<s_str-1; counter++){
        for(int i=0; i<s_str-counter; i++){
            if(str[i]>str[i+1]){
                string temp= str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
            }
        }
    }
cout<<"\nSorted String is : ";
    for(int i=0; i<s_str ; i++){
        cout<<str[i];
    }


    return 0;
}