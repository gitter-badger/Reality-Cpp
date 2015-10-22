## Reality (C++ Rewrite by Kitten)

[![Join the chat at https://gitter.im/FlareHAX0R/Reality-Cpp](https://badges.gitter.im/Join%20Chat.svg)](https://gitter.im/FlareHAX0R/Reality-Cpp?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)
This is a rewrite for Reality using C++ and SFML(which uses OpenGL in contrast to DirectX).
Feel free to commit, but test it.  


### Setting up the enviroment  

#### Both compilers  
Download the latest SFML here: http://sfml-dev.org  (choose 32-bit, platform based on what your using.)  
Rename the folder named 'SFML-2.x.x' (x can be a number) to 'sfml'  

#### VS 2015(Windows)   
_**MAKE SURE YOU USE VISUAL STUDIO 2015!**_  
Put that new 'sfml' folder into the same folder 'RealityCpp.sln' is in.  
Double click 'RealityCpp.sln' and VS 2015 should load.  
Success!  
#### CMake(Linux?)  
Put the 'sfml' folder in Reality-cpp/extlib  
Idk what next, lol. Someone do a pull request, please.  

#### Post-compile(Both)  
Put the .png files from the Release folder in the same directory as the the executable.

Also, do not upload the the sfml folder in a pull request, even though the .gitignore should automatically ignore it.

### Upcoming
* **Rendering Code!**
* Maybe do calculations in a seperate thread?
* Shove SFML stuff right into the project so you dont have to download it seperatly  
(also, if this game is done right, it should get AMAZING fps! Just sayin')