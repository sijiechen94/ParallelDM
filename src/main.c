#include <stdlib.h>
#include <stdio.h>


int main(int argc, const char* argv[]){

	//MPI Environment Initialization

	//Arguments handling


	int err=0;
	double DM=0;

	header_t header;
	//
	unsigned long num_bands=0;
	unsigned long obs_time=0;
	double *data=NULL;

	Read_header(&header,argv[1]);
	Read_data(argv[2]);

	int trial_per_turn=0;
	int num_trials=0;
	int bands_per_process=0;

	//Communicator handling

	//FFTW plans creation

	for(int i=0; i<num_trials; i++){
		
		//Each communicator does displacement and summation

		//Execute FFTW plans

		//Evaluate goodness of approximation and choose best one

	}

	//Output

	//Finalize MPI Environment

}
