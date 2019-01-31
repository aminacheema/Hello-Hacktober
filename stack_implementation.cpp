#include<iostream>
#include<stack>
using namespace std;


void  enque(stack<int>* s,int a);
void  dequ(stack<int>* s);


int main(){
	
	stack<int> q;
	enque(&q,12);
	enque(&q,24);
	enque(&q,36);
	cout<<q.top()<<endl;
	dequ(&q);
	cout<<q.top()<<endl;
	dequ(&q);
	cout<<q.top()<<endl;
	dequ(&q);
	cout<<q.empty()<<endl;
	return 0;
	
}


void  dequ(stack<int> *s){
	stack<int> temp;
	int c;
	while(!s->empty()){
		c=s->top();
		temp.push(c);
		s->pop();
	}
	temp.pop();
	while(!temp.empty()){
		c=temp.top();
		s->push(c);
		temp.pop();	
	}
	
}

void enque(stack<int> *s,int a){
	s->push(a);
}


