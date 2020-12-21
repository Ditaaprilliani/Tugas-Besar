#include <iostream>

using namespace std;

int main() {
	int arr[10000];
	int temp;
	int i;
	int j;
	int n;
	int option;
	
	cout<<"Masukan banyak bilangan: ";
	cin>>n;
	cout<<"Masukan bilangan: "<<endl;
	for (i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Pilih 1 untuk ascending dan 2 untuk descending:"<<endl;
	cout<<"Masukan pilihan:"<<endl;
	cin>>option;
	
	if (option==1){
		for (i=0; i<n; i++){
			for (j=0; j<n; j++){
				if (arr[i] < arr[j]){ 
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		cout<<"Sorting elemen secara ascending: ";
		for (int i=0; i<n; i++){
			cout<<arr[i]<<", ";
		}	
	} else if (option==2){
		for (i=0; i<n; i++){
			for (j=0; j<n; j++){
				if (arr[i] > arr[j]){ 
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		cout<<"Sorting elemen secara descending: ";
		for (int i=0; i<n; i++){
			cout<<arr[i]<<", ";
		}	
	}
	return 0;
}

