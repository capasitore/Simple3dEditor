#include <iostream>

//#include <OpenGL/gl.h>
#include <GLUT/glut.h>
using namespace std;

void theCube() {
    glColor3f(1,1,1);
    glutSolidCube(0.4);
}

void display() {

    glRotatef(40,1,1,0);

    theCube();
    glutSwapBuffers();
}


int main (int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(800,600);
    glutCreateWindow("");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}