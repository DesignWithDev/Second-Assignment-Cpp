// Q1 - Write a program to check whether two numbers (entered by user) are equal or not.
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    cout<<(a == b) ? 1:0;
}

//-----------------------------------------------------------------------------------------------------------
// Q2 - Write a program to take the values of two variables a and b from the keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    cout<<((a<50) && (a<b)) ? 1:0;
}

//-----------------------------------------------------------------------------------------------------------
// Q3 - There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grades "A" if 17 boys made up 80% of the students that received grades "A".
#include<iostream>
using namespace std;

int main(){
    int total, boys, girls;

    boys = 17;
    total = (80*45)/100;
    girls = total - boys;

    cout<<"Number of girls getting grade A is: "<<girls<<endl;
}

//-----------------------------------------------------------------------------------------------------------
// Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
#include<iostream>
using namespace std;

int main(){
    int num = 55555, first, second, third, fourth, fifth;
    first = num%/0000;
    num = num%10000;

    second = num/1000;
    num = num%1000;

    third = num/100;
    num = num%100;

    fourth = num/10;
    num = num%10;

    fifth = num/1;
    num = num%1;

    cout<<"Sum of First and Second last digit is: "<<first+fourth<<endl;
}

//-----------------------------------------------------------------------------------------------------------
// Q5 - Write a program to calculate the sum of digits of a 3 digit number.
#include<iostream>
using namespace std;

int main(){
    int  n = 145;

    int first = n/100;
    n = n%100;

    int second = n/10;
    n = n%10;

    int third = n/1;
    n = n%1;

    cout<<"Sum of all three digits of number is: "<<first+second+third<<endl;
}

//-----------------------------------------------------------------------------------------------------------
// Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*,%)
#include<iostream>
using namespace std;

int main(){
    int a, b;
    
    cout<<"Enter first number: "<<endl;
    cin>>a;

    cout<<"Enter second number: "<<endl;
    cin>>b;

    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<a+b<<endl;
    cout<<"The difference of "<<a<<" and "<<b<<" is: "<<a-b<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is: "<<a*b<<endl;
    cout<<"The division of "<<a<<" and "<<b<<" is: "<<a/b<<endl;
    cout<<"The remainder of "<<a<<" and "<<b<<" is: "<<a%b<<endl;
}