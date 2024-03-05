Benjamin Dearden 
Operating Systems EECE.4811 
Individual Program 2

This Individual program assignment creates three different executables.
To build and run the executables open the source code directory in a command window.
Run the following commands:
mkdir build
cd build
cmake ..
cmake --build .

After those commands the three executables will be built in the build folder 
to launch them the following commands should be used:

./forkjoin
./rendezvous
./barrier <number of threads to run>

Each line above corresponds to one executable for each portion of this assignment.
When running the barrier executable a single command line argument is required to
determine the number of threads to be executed.
Example: 
./barrier 3 
will run three threads indexed from 0 - 2
