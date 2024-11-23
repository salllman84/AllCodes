/* 
Qno1:
write a programe in c++ to input four intergers.
Find out the largest vlaue and then print it on
 the screen by using nested if structure */


/*
note
#include<iostream>
using namespace std;
int main()
{
	return 0;
}
this is used only onece for all.
*/



#include<iostream>
#include <iomanip>
using namespace std;

int main()
{

	
	int num1, num2, num3, num4;

	cout << "Enter your first number= ";
	cin >> num1;
	cout << "Enter your second number= ";
	cin >> num2;
	cout << "Enter your third number= ";
	cin >> num3;
	cout << "Enter your fourth number= ";
	cin >> num4;

	if (num1>num2)
	{
		cout << "the greatest number is =" << num1;
	}
	else if (num2>num3)
	{
		cout << "the greatest number is = " << num2;
	}
	else if (num3>num4)
	{
		cout << "the greatest number is = " << num3;
	}
	else
	{
		cout << "the greatest number is = " << num4;
	}
	



	                    /*  #######################################*/

	/* Qno 2 */
	/* write a programe to input marks obtained
	 by a student in a subject. the total marks are 100
	find out the grade of the student by using the
	 if-else nested structure. the grade is;
	marks>=90=A+
	makrs>=70 and less than 90=A
	makrs>=50 and less than 70= B
	marks < 50=F
	*/



	

	string name;
	int marks_obtain;

	cout << "Enter name of the student: ";
	cin >> name;

	cout << "Enter marks obtian by " << name << " out of 100: " << endl;
	cin >> marks_obtain;

	if (marks_obtain >= 90)
	{
		cout << "A+";
	}
	else if (marks_obtain >= 70)
	{
		cout << "A";
	}
	else if (marks_obtain >= 50)
	{
		cout << "B";
	}
	else
	{
		cout << "F";
	}

	
       /*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*/


	           /* Qno3 */

	/* wirte a program to input a single character and print a
	message "it is a vowel" if it is vowel otherwise
	print message "it is a consonant. use if-else and OR || operator only*/


	
	char alphabet;


	cout << "Enter an alphabet: ";
	cin >> alphabet;

	if (alphabet == 'a'|| alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'o')

	{
		cout << alphabet << " is a vowel"<<endl;
	}
	else
	{
		cout << alphabet << " is a consonant" << endl;
	}
	

	                      /* NNNNNNNNNNNNNNNNNNNNNNNNNNNNN */

			/* Qno 4;
			write a program to input single digit from 0 to 9
			and print the input value in words. using switch statement
			*/


			
			int integer;

			cout << "Enter an integer from 0 to  9: ";
			cin >> integer;

			switch (integer)
			{
			case 0:
				cout << "Zero";
				break;
			case 1:
				cout << "one";
				break;
			case 2:
				cout << "two";
				break;
			case 3:
				cout << "three";
				break;
			case 4:
				cout << "four";
				break;
			case 5:
				cout << "five";
				break;
			case 6:
				cout << "six";
				break;
			case 7:
				cout << "seven";
				break;
			case 8:
				cout << "eight";
				break;
			case 9:
				cout << "nine";
				break;

			}
				cout << endl;
				cout << "completed with switch case";

			{

			}

			


				/* ######################################### */


											   /*loops*/
				/* Qno 5 write a program to print the sum of odd numbers
				of first ten natural numbers using " for " loop.*/


	int sum = 0;

	for (int i = 1; i <= 9; i += 2)

	{
		sum += i;
	}
	cout << "sum of odd numbers in first ten natural numbers is: " << sum << endl;



                   /*********************************************/

                      /*Qno6*/
					  /* Writ a programme to calculate and print the product of the even number from
					  1 to 12 by using [while-loop]*/


int product,even;

product=1;
even=2;
cout<<"The product of even number from 1 to 12 is: "<<endl;
while(even<=12)

{
	cout<<even<<" * "<<product<<"= "<<product * even <<endl;
    product = product * even;
	even+=2;
	cout<<endl;
}




                          /* #############################################*/

						  /*Qno 7 
						  */

						            
/*

    for (int i = 0; i < 6; ++i) 
        {
         cout << setw(i) << "";

         for (int j = 0; j < 6 - i; ++j) 
              {
                cout << "X";
              }

               cout << endl;
    }

*/


					/* ################################## */ 

					/* Qno 8
					write a program to calculate (a- square 'b') without using
					any built-in function */


int base, exponent;
    int result= 1;

    cout<<"Enter base value: ";
    cin>>base;
    cout<<endl;

    cout<<"Enter the power of "<<base<<" = ";
    cin>>exponent;
    cout<<endl;


    for (int guesspower = 0; guesspower < exponent; ++guesspower)
       {
        result *= base;
       
       cout << base << " raised to the power " << guesspower << " is= "<<base<<" * " << guesspower <<" = " << result <<endl;


       }


	return 0;
}

