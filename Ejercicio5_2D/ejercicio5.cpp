#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

float w=0;
float h=0;
 
GLint ancho = 500;
GLint alto = 500;

 
 void reshape(int w, int h)
 {
	 glViewport(0, 0,(GLsizei) w,(GLsizei) h);
	 glMatrixMode(GL_PROJECTION);
	 glLoadIdentity();
	
	 glMatrixMode(GL_MODELVIEW);
	 
	 ancho = w;
	 alto = h;
 }

void display(void)
{
	
	
	glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT);
    
    // haciendo el ejercicio 
	glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.0f,0.0f,0.0f);
	glVertex3f(0.0f,3.0f,0.0f);
	glVertex3f(-2.8f,1.6f,0.0f);	
	glVertex3f(-2.8f,-1.4f,0.0f);
      
    glEnd();
    
	////
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.5f,3.25f,0.0f);
	glVertex3f(0.1f,3.5f,0.0f);
	glVertex3f(-3.3f,1.9f,0.0f);
	glVertex3f(-2.8f,1.6f,0.0f);
      
    glEnd();	
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-3.3f,1.9f,0.0f);
	glVertex3f(-3.3f,-1.6f,0.0f);
      
    glEnd();
    
    ////
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-2.3f,-0.1f,0.0f);
	glVertex3f(-2.3f,-0.6f,0.0f);
	glVertex3f(-0.5f,0.25f,0.0f);
	glVertex3f(-0.5f,2.2f,0.0f);
	glVertex3f(-1.0f,1.95f,0.0f);
	glVertex3f(-1.0f,0.5f,0.0f);
	
      
    glEnd();
    
    ////
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-2.3f,-0.1f,0.0f);
	glVertex3f(-1.0f,0.5f,0.0f);
	glVertex3f(-1.0f,1.95f,0.0f);
	glVertex3f(-2.3f,1.3f,0.0f);	
	     
    glEnd();
    
    ////
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-1.0f,0.5f,0.0f);
	glVertex3f(-0.5f,0.25f,0.0f);

    glEnd();
    
    ////
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-3.3f,1.9f,0.0f);
	glVertex3f(-2.8f,1.6f,0.0f);

    glEnd();
	
	////
	glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.0f,0.0f,0.0f);
	glVertex3f(0.0f,3.0f,0.0f);
	glVertex3f(2.5f,-1.75f,0.0f);	
	
    glEnd();
    
    ////
	glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.0f,3.0f,0.0f);
	glVertex3f(0.5f,3.25f,0.0f);
	glVertex3f(3.1f,-1.5f,0.0f);
	glVertex3f(2.5f,-1.75f,0.0f);	
	
    glEnd();
    
    ////
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(3.1f,-1.5f,0.0f);
	glVertex3f(3.1f,-2.1f,0.0f);

    glEnd();
    
    ////
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.5f,-3.3f,0.0f);
	glVertex3f(3.1f,-2.1f,0.0f);

    glEnd();
    
    ////
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(2.5f,-1.75f,0.0f);
	glVertex3f(0.5f,-2.7f,0.0f);

    glEnd();
    
    ////
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-2.8f,-1.4f,0.0f);
	glVertex3f(-0.8f,-2.6f,0.0f);

    glEnd();
    
    ////
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-3.3f,-1.6f,0.0f);
	glVertex3f(-0.8f,-3.2f,0.0f);

    glEnd();
    
    // circunferencia 
    glColor3f(0.0f,0.0f,0.0f);
    double i, cx,cy;
    
    glBegin(GL_POINTS);
    for (i=0;i<=8; i+=0.01)
    {
		cx=0.7*cos(i) -0.1;
		cy=0.5*sin(i) -2.0;
		glVertex2f(cx,cy); 
		
	}
	 glEnd();
	 
	//union de lineas
	glColor3f(0.0f,0.0f,0.0f);
	 double imc, cxmc,cymc;
    
    glBegin(GL_POINTS);
    for (imc=4.1;imc<=5.2; imc+=0.01)
    {
		cxmc=1.8*cos(imc) -0.03;
		cymc=1.8*sin(imc) -0.97;
		glVertex2f(cxmc,cymc); 
		
	}
	 glEnd();
	 
	 //union de lineas
	glColor3f(0.0f,0.0f,0.0f);
	 double im, cxm,cym;
    
    glBegin(GL_POINTS);
    for (im=4.35;im<=4.95; im+=0.01)
    {
		cxm=2.34*cos(im) +0.0;
		cym=2.34*sin(im) -1.0;
		glVertex2f(cxm,cym); 
		
	}
	 glEnd();
 
 
		
    glFlush();
    glutSwapBuffers();


}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
    glOrtho(-5.0, 5.0, -5.0, 5.0, -5.0, 5.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (400, 100);
    glutCreateWindow ("Ejercicio 5");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
