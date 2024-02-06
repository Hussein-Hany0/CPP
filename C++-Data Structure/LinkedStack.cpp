#include <iostream>
#include <assert.h>
#include <stack>
#include <cmath>

using namespace std;


template<class datatype>
class Node
{
public:
    Node(int);
    ~Node();

    datatype data;

    Node* next = nullptr;

    Node(datatype data) : data(data) {}

private: 

};

template<class datatype>
class LinkedStack {

public:

    void push(datatype value){

    Node<datatype>* item = new Node<datatype>(value);

    item->next = head;

    head = item;
    }

    datatype isEmpty(){
        return !head;
    }

    datatype peek(){

        assert(!isEmpty());

        datatype item = head -> data;

        return item;
    }
    
    datatype pop(){

        assert(!isEmpty());

        datatype item = head -> data;

        Node<datatype>* temp = head;

        head = head -> next;

        delete temp;

        return item;
    }

    void display(){

        for(Node<datatype>* cur = head ; cur ; cur = cur->next)
            cout<<cur->data<<" ";

        cout<<"\n";
    }

private:
    Node<datatype>* head {};
};

int precedence(char op){


    if(op == '+' || op == '-')
        return 1;

    if(op == '*' || op == '/')
        return 2;

    if(op == '^')
        return 3;

    return 0;
}

string infixToPostfix_v1(string infix) {
	stack<char> operators;
	string postfix;

	infix += '-';			
	operators.push('#');	

	for (int i = 0; i < (int) infix.size(); ++i) {

		if (isdigit(infix[i]))
			postfix += infix[i];

		else if (infix[i] == '(')
			operators.push(infix[i]);

		else if (infix[i] == ')') {

			while (operators.top() != '(')
				postfix += operators.top() , operators.pop();

			operators.pop();
		} 
        else {
			while (precedence(operators.top()) >= precedence(infix[i]))
				postfix += operators.top() , operators.pop();

			operators.push(infix[i]);
		}
	}

	return postfix;
}

string infixToPostfix_v2(string infix) {
	stack<char> operators;
	string postfix;

	infix += '-';			
	operators.push('#');	

	for (int i = 0; i < (int) infix.size(); ++i) {

		if (isdigit(infix[i]) || isalpha(infix[i]))
			postfix += infix[i];

        else if(operators.top() == '^' && infix[i] == '^')
            operators.push(infix[i]);

		else if (infix[i] == '(')
			operators.push(infix[i]);

		else if (infix[i] == ')') {

			while (operators.top() != '(')
				postfix += operators.top() , operators.pop();

			operators.pop();
		} 
        else {
			while (precedence(operators.top()) >= precedence(infix[i]))
				postfix += operators.top() , operators.pop();

			operators.push(infix[i]);
		}
	}

	return postfix;
}

double evaluate_postfix(string postfix){

    stack<double> digit;
    double value = 0;

    for(int i = 0 ; i < postfix.size() ; i++){

        if(!isdigit(postfix[i])){
            
            double y = digit.top() ; digit.pop();
            double x = digit.top() ; digit.pop();

            char c = postfix[i];

            if(c == '/')
                value += x / y;
            
            else if(c == '*')
                value += x * y;

            else if(c == '+')
                value += x + y;

            else if(c == '-')
                value += x - y;

            else if(c == '^')
                value += pow(x , y);

            digit.push(value);
        }

        else
            digit.push(postfix[i] - '0');
    }

    return value;

}



int main(){

    cout<<evaluate_postfix("135*+");

}