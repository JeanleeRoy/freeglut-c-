# (OpenGL) Freeglut simple C++ example

In this repo, I'm using Freeglut to introduce C++ graphical basics.

## Instalation

### MinGW

You may know that I'm using the MinGW compiler for C/C++ on Windows OS. On the internet, there are a lot of videos and tutorials where explain how to install MinGW and for that reason, I'm gonna skip that part.

### OpenGL in C/C++

This part may be the most difficult (in my own experience) because there are no good guides to install OpenGL, especially on Windows. However, I could help by giving you some useful links to install OpenGL.

First of all, we won't install explicitly OpenGL, instead, we will install freeglut. In general, that should not be a problem and the functionalities are the same.

An excellent tutorial to install is the following, especially the 'MinGW, OpenGL, GLU and GLUT' section.

https://www3.ntu.edu.sg/home/ehchua/programming/opengl/HowTo_OpenGL_C.html

But if you are more visual, the following video may help you to manage the files and folders properly and some extra details for CLion IDE.

https://www.youtube.com/watch?v=AUFZnA3lW_Q&t=288s

I hope those links can help you.

## Run the code

At this point, you may have all the dependencies from the Freeglut library in the correct way. So let's start with the code.

By cloning this repository you will able to run the main.cpp file with the following command in your terminal:

```
g++ main.cpp -lfreeglut -lopengl32
```

Note that to run this command you must be located in the root of the project folder (inside your terminal) otherwise, you will get an error.

The `-lfreeglut` and`-lopengl32` are the dependencies that will be linked by the compiler and use the Freeglut properly.

After running the command you'll have an executable `a.exe`. You only need to run it with the command

```
a.exe
```

And that's all, hopefully, you can see the window produced by the program.

![screenshoot](https://raw.githubusercontent.com/JeanleeRoy/images/master/support/freeglut/screenshot.png)

As you can see this is a very basic example of Freeglut, but now you can make amazing projects with some graphic details, just be sure to keep learning about Freeglut and its different applications.

Successes
