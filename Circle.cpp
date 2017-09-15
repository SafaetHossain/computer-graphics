#include <windows.h>
#include <GL/glut.h>

void setPixel(int x,int y)  {
    glBegin(GL_POINTS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glPointSize (20.0);
    glVertex2i(x,y);
    glEnd();
}
int xCenter = 100,yCenter = 100,r=50;

void Circle(){
	int x=0,y=r;
	int d=3-(2*r);

	glColor3f(0.5,0.3,1.);


	while(x<=y)
	{
		setPixel(xCenter+x,yCenter+y);  setPixel(xCenter+y,yCenter+x);
		setPixel(xCenter-x,yCenter+y);  setPixel(xCenter+y,yCenter-x);
		setPixel(xCenter-x,yCenter-y);  setPixel(xCenter-y,yCenter-x);
		setPixel(xCenter+x,yCenter-y);  setPixel(xCenter-y,yCenter+x);

		if (d<0)
			d += (4*x)+6;
		else{
			  d += (4*(x-y))+10;
			  y--;
		}

		x++;
	}
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);

Circle();
glFlush();
}
void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 600.0, 0, 500.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(600, 500);
glutInitWindowPosition(300, 100);
glutCreateWindow("Circle");
init();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}

