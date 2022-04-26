#include<iostream>
using namespace std;
#define n 100
class Stack{
	int *arr;
	int top;
	public:
		Stack(){
			arr=new int[n];
			top=-1;
		}
	void push(int x){
		if(top==n-1){
		 cout<<"stack is overflow"<<endl;
	    }
	    else{
		
			top++;
			arr[top]=x;
			
		}

	}
	void pop(){
		if(top==-1){
			cout<<"stack is empty"<<endl;
		}
		else
		  top--;
	}
	int Top(){
		if(top==-1){
			cout<<"stack is empty"<<endl;
		}
		else
	    	return arr[top];
	}
	bool empty(){
		return top==-1;
	}
};
int main(){
	Stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	cout<<st.Top()<<endl;
	st.pop();  
	st.pop();
	cout<<st.Top()<<endl;
	st.pop();
	st.pop();
	cout<<st.empty()<<endl;
	return 0;
}








