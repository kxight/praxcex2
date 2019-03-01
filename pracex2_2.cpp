#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}


int main(){
	
	//Write your code here
    ifstream source("score1.txt");
	string line;
    float score[20];
    int j=0;

   
	while(getline(source,line)){
        
       score[j] = atof(line.c_str()) ;
       j++;
        
    }
	
    sort(score,20);
    
	ofstream dest("rank.txt");
	for(int i = 0; i < 20;i++){
		dest << score[i] << "\n";
	}
	dest.close();
	
	return 0;
}
