#include <bits/stdc++.h>
#include "ArrayList.h"

using namespace std;

ArrayList::ArrayList(){
	tam = 10;
	it = 0;
	arr = (int*) malloc(tam*sizeof(int));
}

ArrayList::~ArrayList(){
	free(arr);
}

void ArrayList::push_back(int num){
	if(it < tam) arr[++it] = num;
	else{
		int arr_aux[it];
		for(int i=1 ; i<=it ; i++) arr_aux[i] = arr[i];
		tam *= 2;
		arr = (int*)malloc(tam*sizeof(int));
		for(int i=1 ; i<=it ; i++) arr[i] = arr_aux[i];
		arr[++it] = num;
	}
}

int ArrayList::at(int num){
	if(num <= it) return arr[num];
	else return -1;
}

int ArrayList::size(){
	return it;
}

