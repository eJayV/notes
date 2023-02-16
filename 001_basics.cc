/* Created: Feb 16, 2023
   Updated: Feb 16, 2023
-----------------------------------------------------------
Edit-Compile-Run/Testing-Release
  When working on a program you want to constantly repeat
  the first 3 stages of the cycle.

  1. Edit a small amount of code
      Remember to save the file
  2. Compile the code
      Fix code if a compile error occurs
  3. Run and test
      Fix code if program crashes (runtime error)
      Fix code if not working as intended (logic error)
      If tests passed, move onto next part of the program.
  4. Push to github between often to occassionally
      If part of a program breaks later, then you have backups
  Repeat the cycle untill the program is complete
-----------------------------------------------------------
Code Style
  The compiler does not "see" spaces or new lines, 



  
-----------------------------------------------------------
Example Header Below */

// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab X-X (e.g. 2-1)
//
// Partner: @GithubUsername

//---------------------------------------------------------
/* Below is an example program that outputs "Hello World" int
the terminal */

#include<iostream>
/* #include specifies directives (files or libraries) used
in the program */

int main (int argc, char*argv[]) {
  std::cout << "Hello World!" << std::endl;
  /* Statements of the program go inside the {} */
  return 0;
  /* Return value = exit code. Exit code = 0 when a process 
  is successful */ 
}