#include <iostream>
#include <string>

void line();

int main(){
	int *A,N;
	
	//We must not have Negative value in dimension. So use do-while.
	do{
		std::cout << "Insert Array Dimension: ";
		std::cin >> N;
	}while(N<=0);
	
	//Occupying new space for out array.
	A = new int[N];		
	
	//Insert Array Elements.
	line();
	for(int i = 0; i<N; i++){
		std::cout <<"Insert Array Elements A["<<i<<"]: ";
		std::cin >> A[i];
	}

	//Print Array elements.
	std::cout <<"\nArray: "; //Outside from main because it must be printed only one time.
	for(int i = 0; i<N; i++){
		std::cout<<"["<<A[i]<<"]";
	}
	
	line();
	return 0;
}

void line(){
	std::cout << std::endl;
}
