
/*  Solid Diamond  */
/*
 // FULL PYRAMID   

#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	for(int i = 0; i<n; i++){
		
		//space
		for(int j = 0; j< n-i-1; j++) {
			
			cout << " ";
		}
		
		//star
		for(int j = 0;j<i+1; j++){
			cout << "* ";
		}
		
		cout << endl;
	}
	
for(int i = 0; i < n; i++ ){
	
	for(int j =0;j < i;j++){
		//spaces
		cout << " ";
		
	}
	for(int j =0; j<n-i; j++){
		cout << "* ";
	}
	cout << endl;
}
}
*/

/* Hollow Diamond */

#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	for(int i = 0; i< n; i++){
		//space
		for(int j = 0; j< n-i-1 ;j++){
       cout << " ";
	   }
	   //star
	   
	   //2*n --> even & odd --> (2*N-1 ) OR (2N+1)
	   
	   for(int j = 0; j< 2*n+1; j++){
	   	
	   //fist character
	   if(j == 0){
	   	cout << "*";
	   }
	   //last character
	   else if(j == 2*i){
	   	cout << "*";
	   }
	   else{
	   	cout << " ";
	   }
	   }
	   cout << endl;
	}
	
for(int i = 0; i<n;i++){
	//space
	for(int j =0;j<i;j++){
		cout << " ";
	}
	
	//star
for(int j = 0; j<(2*n-2*i-1); j++){
	if(j == 0 || j == 2*n - 2*i -2){
		cout << "*";
	}
	else{
		cout << " ";
	}
	
}
cout << endl;
}	

}
 
