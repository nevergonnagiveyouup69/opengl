#include<GL/glut.h>
#include<stdlib.h>
void myInit(void)
{
	glClearColor(2.0,2.0,2.0,4.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,500.0,0.0,500.0);
}
void lineSeagment(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,1.0);
	glVertex2i(250,0);
	glVertex2i(250,500);
	glColor3f(0.0,0.0,1.0);
	glVertex2i(0,250);
	glVertex2i(500,250);
	glEnd();
	glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,40);
	glutCreateWindow("program 2");
	glutDisplayFunc(lineSeagment);
	myInit();
	glutMainLoop();
}
	
