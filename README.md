# C++ Examples
Simple and basic C++ examples for educational purposes.

## Building/Compiling
You can compile/build all these examples on your computer to change and try them out yourself.

### Method 1: Using an IDE
Compiling C++ projects using your IDE is an easy way of editing and seeing it's result in a shorter time.

#### Visual Studio
After you've loaded (and perhaps edited) the project to Visual Studio, build it from the Build section.

<img src="readme_assets/vs_build.jpg"></img>

### Method 2: Terminal
Of course, you can follow the traditional way of building C++ projects from the terminal.

#### Linux
1. Install GNU C/C++ compiler:

If you are using Fedora, Red Hat, CentOS, or Scientific Linux, use the following yum command to install GNU C/C++ compiler: 
`yum groupinstall 'Development Tools'`

If you are using Debian or Ubuntu Linux, type the following apt-get command to install GNU c/c++ compiler:<br>
`$ sudo apt-get update`<br>
`$ sudo apt-get install build-essential manpages-dev`

2. `cd` to the directory in which the C++ project is located
3. Compile with g++ `file.cpp -o file2`
4. Run with `./file`


#### Mac
1. Compile with `g++ file.cpp`
2. Run with `./file`


#### Windows
1. Download MinGW from [here](https://sourceforge.net/projects/mingw-w64/) or [here](https://sourceforge.net/projects/mingw/files/OldFiles/).
2. `cd` to the directory in which the C++ project is located (like: cd C:\Desktop\...)
3. Compile with `g++ file.cpp -o file.exe`
4. Run the executable: `file.exe`.

## Index
- [BMI Calculator](#bmi_calculator) [(file)](bmi.cpp)
- [Space Traveler](#space_traveler) [(file)](space.cpp)

---

### <a name="bmi_calculator"></a>[BMI Calculator](bmi.cpp)
Body mass index (BMI) is a value derived from the mass and height of a person. The BMI is defined as the body mass divided by the square of the body height.

This program calculates the BMI of a person by:
1. Asking them their height in metres (m)
2. Asking them their weight in kilograms (kg)
3. Calculating their BMI with the formula weight / (height * height).

### <a name="space_traveler"></a>[Space Traveler](space.cpp)
Someone is travelling from planet Earth to six potential other planets in our solar system.  This program requests the person's weight on planet Earth, and then calculates their weight on the other planets.

The program does this by:
1. Asking the person their weight on planet Earth
2. Asking the person which planet they want to travel
3. After receiving those information, it multiplies the person's weight with the gravitational force of that planet to calculate their weight on those planets.
