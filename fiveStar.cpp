#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>

using namespace std;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,1.0,0.0);

    glBegin(GL_POLYGON);
    glVertex3i(250,400,0);
    glVertex3i(400,100,0);
    glVertex3i(250,200,0);
    glVertex3i(100,100,0);
    glEnd();
    glFlush();
    glBegin(GL_POLYGON);
    glVertex3i(250,200,0);
    glVertex3i(450,300,0);
    glVertex3i(50,300,0);
    glEnd();
    glFlush();
}
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 600.0, 0, 600.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(300, 100);
    glutCreateWindow("Five Star");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

