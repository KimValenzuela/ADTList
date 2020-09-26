#include <bits/stdc++.h>
#include "LinkedList.h"
#include "ArrayList.h"

using namespace std;

int main(){

	srand(time(NULL));
	ADTList *ll = new LinkedList();
	ADTList *al = new ArrayList();

	int n;
	cout<<"Ingrese cantidad de numeros a insertar: "<<endl;
	cin>>n;

	vector<int> vec;
	for(int i=0 ; i<n ; i++){
		int num = rand()%n;	
		vec.push_back(num);
	}

	double time1, time2;

	cout<<"Metodo PUSH_BACK"<<endl;

	//LinkedList
	clock_t start = clock();
	for(vector<int>::iterator it=vec.begin() ; it!=vec.end() ; ++it){
  		ll->push_back(*it);
	}
	time1 = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("LinkedList: %.10f\n\n", time1);

	//ArrayList
	start = clock();
	for(vector<int>::iterator it=vec.begin() ; it!=vec.end() ; ++it){
		al->push_back(*it);
	}
	time2 = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("ArrayList: %.10f\n\n", time2);
	
	cout<<endl<<endl;

	cout<<"Metodo AT"<<endl;
	int pos;
	cout<<"Ingrese posicion: "<<endl;
	cin>>pos;

	double time3, time4;
	
	//LinkedList
	start = clock();
	int pos1 = ll->at(pos);
	time3 = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("LinkedList: %.10f\n\n", time3);
	
	//ArrayList
	start = clock();
	int pos2 = al->at(pos);
	time4 = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("ArrayList: %.10f\n\n", time4);
	
	cout<<endl<<endl;

	cout<<"Metodo SIZE"<<endl;
	
	double time5, time6;
	
	//LinkedList
	start = clock();
	int size1 = ll->size();
	time5 = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("LinkedList: %.10f\n\n", time5);
	
	//ArrayList
	start = clock();
	int size2 = al->size();
	time6 = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("ArrayList: %.10f\n\n", time6);
	
	return 0;
}
