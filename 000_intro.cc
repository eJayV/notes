/* Created: Feb 16, 2023
   Updated: Feb 16, 2023

Computer Setup
  Ubuntu
    For the CSUF CPSC120 course it is recommended use
    Ubuntu 20.04 (can be found here: https://bit.ly/3x4Mrpn )
    and run the following command in terminal to download the
    needed/recommended tools/programs/files/etc for the course:
    $wget -q https://raw.githubusercontent.com/mshafae/tusk/main/quickinstall.sh -O- | sh

    Notably installed by the command is the:
      recommended compiler Clang
      recommended text editor Visual Studio Code (VScode)

  Replit
    For CPSC121, there is the additional recommendation of
    https://replit.com/ which is an in browser alternative to
    using VScode, Clang, and some terminal.
    The upsides of Replit is it can be accessed from most
    browsers from most devices.
    
    From this point on I will not mention Replit because I don't
    personally use it.
-----------------------------------------------------------
Basic Terminal commands
  Terminal commands will begin with $
  Terminal commands are performed inside a certain directory
  (folder) so you must be able to navigate between them.
  
  $ pwd
      Print working directory (folder)

  $ ls
     Lists contents of the working (current) directory

  $ cd [DIRECTORY]
      Used to navigate through directories (folders)
  $ cd
      Navigates to home directory
  $ cd X
      Navigates to directory "X"
  $ cd ..
      Navigates to parent directory
  $ cd -
      Navigates to previous directory 
  $ cd [PATH]
      Navigate through multiple directories by using a / between
      each directory. Examples:
        $ cd X/Y/Z
        $ cd ../A/B
        $ cd -/C/D
      [PATH] is relative to the location the terminal is currently at

  $ mkdir [PATH]/[DIRECTORY]
      Makes an empty directory at the location of the path, ex:
        $ mkdir X/Y/Z/example\
      [PATH] may be excluded if it is already the terminal's location
  
  $ rmdir [PATH]/[DIRECTORY]
    Deletes directory if it is empty
  $ rm [OPTION...] FILE...
    Deletes files
    [OPTION] can be
      -R to delete directory and everything inside
      -f to force delete, ignoring safety locks

  $ echo $
      Prints the exit code of previous command
        0 means success, any other number is failure
-----------------------------------------------------------
Clang++
  $ clang++ [option] [PATH]/[SOURCE]
      Used to compile programs manually
      If program fails to compile, error messages will print
        into the terminal
  
  To run a compiled program:
    $ ./[PROGRAM]
        The . specifies the current working directory
-----------------------------------------------------------
Github
  Github is an online industry standard source code control tool
    Its useful to create a master copy saved remotely, then
    create a local copy to edit and test. Editted files can then
    be selectively uploaded to the master copy.
    This allows collaboration on a single project, however 
    there may be conflicts if multiple users/devices make edits
    locally then both try to upload.
  A repository (repo) contains the sounce code of a project

  $ git clone [REPO]
      Creates a local copy of the linked repo 

  The following commands must be ran inside a git repo 
  
  $ git status
      Prints modified non-commited files and commits that have
      not yet been pushed
  $ git add [FILE(s)]
      Stages a file(s) to be committed
  $ git commit -m "[COMMIT MESSAGE]"
      Creates a commit for currently staged file(s)
      [MESSAGE] should be a description of what the commit is for
  $ git push
      Uploads current commits to the remote copy
  $ git pull
      Checks remote copy for commits and downloads them.
      Use to resolve conflicts between remote and local copy
        in VSCode
*/

int main() {
  return 0;
}