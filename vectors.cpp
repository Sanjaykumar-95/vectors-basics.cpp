#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>n;
	n.assign(9,1);
	cout<<"the contents are :";
	for(int i=0;i<n.size();i++){
		cout<<n[i]<<" ";
		cout<<endl;
	}

	n.push_back(2); //add 2 at the last
	int no=n.size();
	cout<<"elements are :";
	for(int i=0;i<no;i++){
		cout<<n[i]<<" "<<endl;
		cout<<endl;
	}
	cout<<"last element :"<<n[no-1]<<endl;

	n.pop_back(); //delet the elements from end
	cout<<"now elements are :"<<endl;
	for(int i=0;i<n.size();i++){
		cout<<n[i]<<" ";
		cout<<endl;
	}

	n.insert(n.begin(),7); //inserting element at begening
		cout<<"elements are :"<<endl;;
	for(int i=0;i<no;i++){
		cout<<n[i]<<" ";
		cout<<endl;
	}
	cout<<"first element is :"<<n[0]<<endl;
 n.clear();
 cout<<"now the size is :"<<n.size()<<endl;

 for(int i=1;i<5;i++){
	n.push_back(i); //prints the elements from 1 to 5
 }
 cout<<"elements from begining to end :";
 for(auto a=n.begin();a!=n.end();a++){ //prints from beginig to end
	cout<<*a<<" "<<endl;
 }
n.clear();
 for(int x=1;x<=10;x++){
	n.push_back(x);
 }
 cout<<"elements are :";
 for(auto a=n.begin();a!=n.end();a++){
	cout<<*a<<" "<<endl;
 }
 cout<<"vector size :"<<n.size()<<endl;
 cout<<"Capacity of vector :"<<n.capacity()<<endl;
 cout<<"Maximum size of vector :"<<n.max_size()<<endl;
 n.resize(5);
 cout<<"vector size after resizing is :"<<n.size()<<endl;
 if(n.empty()==false){
	cout<<"vector is not empty";
 }
 else{
	cout<<"vector is empty";
 }
}