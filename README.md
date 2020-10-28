# (OpenGL) Freeglut simple C++ example

In this repo I'm using Freeglut for introduce C++ graphical basics.

## Instalation

### MinGW

You may know that I'm using the MinGW compiler for C/C++ on Wondows OS. In internet there are a lot of videos and tutorials where explain how to install MinGW and for that reason i'm gonna skip that part.

### OpenGL in C/C++

This part may be the most difficult (in my own experience) because there are no good guides to install OpenGL, especially on Windows. However, I could help giving you some useful links in order to install OpenGL.

First of all, we won't install explicity OpenGL, instead we will install freeglut. In general that should not be a problem and the funcionlitis are the same.

An excellent tutorial to install is the following, specially the 'MinGW, OpenGL, GLU and GLUT' section.

https://www3.ntu.edu.sg/home/ehchua/programming/opengl/HowTo_OpenGL_C.html

But if you are more visual, the following video may help you to manage the files and folders in a properly way.

https://www.youtube.com/watch?v=AUFZnA3lW_Q&t=288s

I hope those links can help you.

## Run the code

At this point you may have all the dependencies from the Freeglut library in the correct way. So let's start with the code.

Cloning this repository you will able to run the main.cpp file with the following command in your terminal:

```
g++ main.cpp -lfreeglut -lopengl32
```

Note that to run this command you must be located in the root of the project folder (inside your terminal) otherwise you will get an error.

The `-lfreeglut` and`-lopengl32` are the dependencies that whill be linked by the compiler and use the Freeglut properly.

After run the command you'll have a executable `a.exe`. You only need to run it with the command

```
a.exe
```

And that's all, hopefully you can see the window produced by the program.

![screenshoot](https://raw.githubusercontent.com/JeanleeRoy/images/master/support/freeglut/screenshot.png)
