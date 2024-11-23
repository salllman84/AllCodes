#include<iostream>
using  namespace std;

int main()
{

	/*int sum = 0;

	for (int i = 0; i <= 40; i += 2)

	{
		sum += i;
		cout << endl;
		cout << sum;
	}

	
	*/

	// int result, table, a;

	// table = 5;
	// a = 1;

	// while (a <= 10)

	// {
    //    result = table * a;
	// 	cout << "table of " << table << "*" << a << "= " << result<<endl;
	// 	a++;
	// }

	return 0;
}


#include<iostream>
using namespace std;

int main () {
    
    int array[7];

    for(int i=0; i<7; i++)
    
    {
        cout<<"Enter the value of array ["<<i<<"]= ";
        cin>>array[i];
        cout<<endl;
    }

    cout<<"The array will store in= "<<endl;

    for(int i=0; i<7; i++)
    {
        cout<<array[i]<<endl;
    }
    
        return 0;
}
