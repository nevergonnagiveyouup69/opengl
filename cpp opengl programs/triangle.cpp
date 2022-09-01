#include<GL/glut.h>
#include<stdlib.h>
void myInit(void)
{
    glClearColor(1.0,1.1,0.0,4.0);
    glColor3f(0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,500.0,0.0,500.0);
 }

 

void display(void)
 {
       glClear(GL_COLOR_BUFFER_BIT);
	 glBegin(GL_POLYGON);
	glVertex2i(100,100);
	glVertex2i(250,400);
	glVertex2i(400,100);
	glEnd();
	glFlush();       
}

int main(int argc, char** argv)
{
        glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,150);
	glutCreateWindow("My 2nd Attempt");
	glutDisplayFunc(display);
	myInit();
	glutMainLoop();
	}
	
