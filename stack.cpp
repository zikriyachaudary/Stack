/* CPP Program which can perfrom Stack Functions using Array. push, pop, display, show_top, factorial, display even, display odd, reverse, display the sum of array, sort the stack array. */
#include<iostream>
using namespace std;
#define SIZE 8
int top = -1;
int Stack[SIZE];
int sum = 0;
void push(int value)
{
	if(top==SIZE-1)
	{
		cout << "Stack is Full" << endl;
	}
	else
	{
		top++;
		Stack[top] = value;
		sum = sum + value;
	}
}

void pop()
{
	if(top==-1)
	{
		cout << "Stack is empty." << endl;
	}
	else
	{
		top--;
	}
}

void display()
{
	if(top==-1)
	{
		cout << "Stack is Empty." << endl;
	}
	else
	{
		for(int i=0; i<=top; i++)
		{
			cout << Stack[i] << endl;
		}
	}
}

void show_top()
{
	if(top==-1)
	{
		cout << "Stack is Empty." << endl;
	}
	else
	{
		cout << Stack[top] << endl;
	}
}

void factorial()
{
	if(top==-1)
	{
		cout << "Stack is Empty." << endl;
	}
	else
	{
		for(int i=0; i<=top; i++)
		{
		    double fact = 1;
			for(int j=1; j<=Stack[i]; j++)
			{
				fact = fact * j;
			}
			cout << fact << endl;
		}
	}
}

void display_even()
{
	if(top==-1)
	{
		cout << "Stack is Empty." << endl;
	}
	else
	{
		for(int i=0; i<=top; i++)
		{
			if(Stack[i]%2==0)
			{
				cout << Stack[i] << endl;
			}
		}
	}
}

void display_odd()
{
	if(top==-1)
	{
		cout << "Stack is Empty." << endl;
	}
	else
	{
		for(int i=0; i<=top; i++)
		{
			if(Stack[i]%2==1)
			{
				cout << Stack[i] << endl;
			}
		}
	}
}

void reverse()
{
	if(top==-1)
	{
		cout << "Stack is Empty." << endl;
	}
	else
	{
		for(int i=top; i>=0; i--)
		{
			cout << Stack[i] << endl;
		}
	}
}

void display_sum()
{
	if(top==-1)
	{
		cout << "Stack is Empty." << endl;
	}
	else
	{
		cout << "The sum of Stack is : " << sum << endl;
	}
}

void sort()
{
	if(top==-1)
	{
		cout << "Stack is Empty." << endl;
	}
	else
	{
		for(int j=0; j<=top; j++)
		{
			for(int k=0;k<=top-1;k++)
			{
				if(Stack[k]>Stack[k+1])
				{
					Stack[k] = Stack[k] + Stack[k+1];
					Stack[k+1] = Stack[k] - Stack[k+1];
					Stack[k] = Stack[k] - Stack[k+1];
				}
			}
		}
	}
	cout << "Stack is Sorted" << endl;
}

int main()
{
	int element, choice;
	Again:
	cout << "1. PUSH Element." << endl;
	cout << "2. POP Element." << endl;
	cout << "3. Show Top Element." << endl;
	cout << "4. Display Stack." << endl;
	cout << "5. Factorial of Stack Elements." << endl;
	cout << "6. Display Even Numbers from Stack." << endl;
	cout << "7. Display Odd Numbers from Stack." << endl;
	cout << "8. Sort the Stack." << endl;
	cout << "9. Reverse the Stack." << endl;
	cout << "10. Display the Sum of Stack Elements." << endl;
	cout << "99. Exit." << endl;
	cout << "  ==>  ";
	cin >> choice;
	switch(choice)
	{
		case 1:
			cout << "Enter Element ==> ";
			cin >> element;
			push(element);
			goto Again;
		case 2:
			pop();
			cout << "Element Popped." << endl;
			goto Again;
		case 3:
			show_top();
			goto Again;
		case 4:
			display();
			goto Again;
		case 5:
			factorial();
			goto Again;
		case 6:
			display_even();
			goto Again;
		case 7:
			display_odd();
			goto Again;
		case 8:
			sort();
			goto Again;
		case 9:
			reverse();
			goto Again;
		case 10:
			display_sum();
			goto Again;
		case 99:
			goto exit;
		default:
		cout << "Enter the Correct Input." << endl;
		goto Again;
	}
	exit:
	return 0;
}
