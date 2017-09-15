#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <iostream>

using namespace std;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.236,0.453,0.567);
    glBegin(GL_POLYGON);
    glVertex3i(100,100,0);
    glVertex3i(300,100,0);
    glVertex3i(300,300,0);
    glVertex3i(100,300,0);
    glEnd();
    glFlush();
}
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1024.0, 0, 768.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1024, 768);
    glutInitWindowPosition(300, 100);
    glutCreateWindow("Rectangle");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
