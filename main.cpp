#include <iostream>
#include <string>

int main(){
	int *A,N;
	
	do{
		std::cout << "Insert Array Dimension: ";
		std::cin >> N;
	}while(N<=0);
	
	A = new int[N];		
	
	for(int i = 0; i<N; i++){
		std::cout <<"Insert Array Elements A["<<i<<"]: ";
		std::cin >> A[i];
	}

	return 0;
}

