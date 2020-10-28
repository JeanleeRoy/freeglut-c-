/*
Execution command: g++ main.cpp -lfreeglut -lopengl32
*/

#include<stdio.h>
#include<GL/glu.h>
#include<GL/glut.h>

void display();

int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(0, 0);
    glutInitWindowSize(500, 300);

    glutCreateWindow("Window 1");
    glutDisplayFunc(display);

    glutMainLoop();

    /* code */
    return 0;
}

void display() {

}