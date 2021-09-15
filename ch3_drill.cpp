#include "std_lib_facilities.h"

int main ()
{
	cout << "Please enter your first name:\n";
	string first_name;
	cin >> first_name;
	cout << "Hello, " << first_name << "!\n";
	
	cout << "Enter the name of the person you want to write to:\n";
	string friend_name;
	cin >> friend_name;
	
	cout << "Enter the name of another friend of yours:\n";
	string friend_name2;
	cin>> friend_name2;
	
	cout << "Enter the sex of this friend (m = male, f = female)\n";
	char friend_sex = 0;
	cin >> friend_sex;
	
	cout << "Enter the age of " << friend_name << ":\n";
	int age;
	cin >> age;
	if( age <= 0 || age >= 110)
	{
		simple_error("You're kidding!\n");
		return 0;
	}
	
	cout << "Dear " <<friend_name<< ",\n";
	cout << "How are you? I was thinking about you a lot. I miss you!\n";
	cout << "Have you seen " <<friend_name2<< " lately?\n";
	if( 'f' == friend_sex )
	{
		cout << "If you see " <<friend_name2<< " please ask her to call me.\n";
	}
	else
	{
		cout << "If you see " <<friend_name2<< " please ask him to call me.\n";
	}
	
	cout  << "I hear you just had a birthday and you are " <<age<< " years old.\n";
	if( age < 12)
	{
		cout << "Next year you will be " << age+1 << ".\n";
	}
	else if( age > 70)
	{
		cout << "I hope you enjoying retirement.\n";
	}
	else if( age == 17)
	{
		cout << "Next year you will be able to vote.\n";
	}
	
	cout << "Yours sincerely,\n\n" <<first_name<< "\n";
	return 0;
}
