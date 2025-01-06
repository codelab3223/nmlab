#include<iostream>
using namespace std;

int main(){
	int diff_table[100][100],n,i,j,y;
	cout<<"Enter the size of table";
	cin>>n;

	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			diff_table[i][j]=0;
		}
	}
	
	
	for(i=0;i<n;i++){
		cout<<"Enter y- value"<<endl;
		cin>>y;
		diff_table[i][0]=y;
	}
	for(j=1;j<n;j++){
		for(i=0;i<n-j;i++){
			diff_table [i][j] = diff_table[i+1][j-1]- diff_table[i][j-1];
		}
	}
	
	
	
	cout<<"y \t del_y \t del_sq_y \t del_cub_y"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			
			cout<<diff_table[i][j]<<"\t\t";
		}
		cout<<endl;
	}
	cout<<"Name: Aayush Dhakal "<<endl;
	cout<<"RollNo: SEC079BEI001"<<endl;
}
