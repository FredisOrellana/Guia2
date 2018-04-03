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
	//
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(11.0f,-3.0f,0.0f);
	glVertex3f(11.0f,3.0f,0.0f);
      
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(11.0f,3.0f,0.0f);
	glVertex3f(9.5f,3.0f,0.0f);
      
    glEnd();
    

	////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(11.0f,-3.0f,0.0f);
	glVertex3f(9.5f,-3.0f,0.0f);
      
    glEnd();
		 
	//lado de arriba
	glColor3f(0.0f,0.0f,0.0f);
	
	double i, x,y;
	
    glBegin(GL_POINTS);
    for (i=-1.6;i<=0.0; i+=0.01)
    {
		x=1*cos(i) +8.5;
		y=1*sin(i) +3;
		glVertex2f(x,y); 
		
	}
	 glEnd();
	 
	 //lado de abajo
	glColor3f(0.0f,0.0f,0.0f);
	
	double i1, x1,y1;
	
    glBegin(GL_POINTS);
    for (i1=0.0;i1<=1.6; i1+=0.01)
    {
		x1=1*cos(i1) +8.5;
		y1=1*sin(i1) -3;
		glVertex2f(x1,y1); 
		
	}
	 glEnd();
	 
	////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(8.5f,2.0f,0.0f);
	glVertex3f(4.0f,2.0f,0.0f);
      
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(8.5f,-2.0f,0.0f);
	glVertex3f(2.5f,-2.0f,0.0f);
      
    glEnd();
    
    //
    glColor3f(0.0f,0.0f,0.0f);
	double imp, cxmp,cymp;
    
    glBegin(GL_POINTS);
    for (imp=3.25;imp<=6.2; imp+=0.01)
    {
		cxmp=2*cos(imp) +0;
		cymp=2*sin(imp) -2.2;
		glVertex2f(cxmp,cymp); 
		
	}
	 glEnd();
	 
	//
	 glColor3f(0.0f,0.0f,0.0f);
	double imcil, cxmcil,cymcil;
    
    glBegin(GL_POINTS);
    for (imcil=1.5;imcil<=3.0; imcil+=0.01)
    {
		cxmcil=0.5*cos(imcil) +2.5;
		cymcil=0.5*sin(imcil) -2.5;
		glVertex2f(cxmcil,cymcil); 
		
	}
	 glEnd();
	 
	 //
	 glColor3f(0.0f,0.0f,0.0f);
	double im, cx,cy;
    
    glBegin(GL_POINTS);
    for (im=0.0;im<=1.7; im+=0.01)
    {
		cx=0.5*cos(im) -2.5;
		cy=0.5*sin(im) -2.5;
		glVertex2f(cx,cy); 
		
	}
	 glEnd();
	
	////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-2.5f,-2.0f,0.0f);
	glVertex3f(-6.0f,-2.0f,0.0f);
      
    glEnd();
	
	////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(2.0f,5.0f,0.0f);
	glVertex3f(-2.0f,5.0f,0.0f);
      
    glEnd();
    
    ////
    glBegin(GL_LINE_LOOP);
    
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(-1.5f,5.0f,0.0f);   
    glVertex3f(-1.5f,6.0f,0.0f);    
    glVertex3f(1.5f,6.0f,0.0f);    
    glVertex3f(1.5f,5.0f,0.0f);
	
	glEnd();
	
	////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(2.0f,4.0f,0.0f);
	glVertex3f(2.0f,5.0f,0.0f);
      
    glEnd();
    
	////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-2.0f,4.0f,0.0f);
	glVertex3f(-2.0f,5.0f,0.0f);
      
    glEnd();
	
	////
	 glColor3f(0.0f,0.0f,0.0f);
	double i2, x2,y2;
    
    glBegin(GL_POINTS);
    for (i2=3.0;i2<=4.7; i2+=0.01)
    {
		x2=2*cos(i2) +4;
		y2=2*sin(i2) +4;
		glVertex2f(x2,y2); 
		
	}
	 glEnd();
	 
	 ////
	 glColor3f(0.0f,0.0f,0.0f);
	double i3, x3,y3;
    
    glBegin(GL_POINTS);
    for (i3=4.7;i3<=6.4; i3+=0.01)
    {
		x3=2*cos(i3) -4;
		y3=2*sin(i3) +4;
		glVertex2f(x3,y3); 
		
	}
	 glEnd();

	 
	////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-6.0f,2.0f,0.0f);
	glVertex3f(-4.0f,2.0f,0.0f);
      
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.5f,7.4f,0.0f);
	glVertex3f(0.5f,6.0f,0.0f);
      
    glEnd();
    
     ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-0.5f,7.4f,0.0f);
	glVertex3f(-0.5f,6.0f,0.0f);
      
    glEnd();
    
    ////
	 glColor3f(0.0f,0.0f,0.0f);
	double i4,x4,y4;
    
    glBegin(GL_POINTS);
    for (i4=-1.05;i4<=4.2; i4+=0.01)
    {
		x4=1*cos(i4) +0;
		y4=1*sin(i4) +8.25;
		glVertex2f(x4,y4); 
		
	}
	 glEnd();
	 
	////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(1.0f,8.5f,0.0f);
	glVertex3f(3.5f,8.75f,0.0f);
      
    glEnd();
    
    	////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(1.0f,8.0f,0.0f);
	glVertex3f(3.5f,7.75f,0.0f);
      
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(3.5f,7.75f,0.0f);
	glVertex3f(3.5f,8.75f,0.0f);
      
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-1.0f,8.5f,0.0f);
	glVertex3f(-3.5f,8.75f,0.0f);
      
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-1.0f,8.0f,0.0f);
	glVertex3f(-3.5f,7.75f,0.0f);
      
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-3.5f,7.75f,0.0f);
	glVertex3f(-3.5f,8.75f,0.0f);
      
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-7.0f,-3.0f,0.0f);
	glVertex3f(-7.0f,-5.0f,0.0f);
      
    glEnd();
    
	////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-11.0f,-5.0f,0.0f);
	glVertex3f(-7.0f,-5.0f,0.0f);
      
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-11.0f,-5.0f,0.0f);
	glVertex3f(-11.0f,-3.0f,0.0f);
      
    glEnd();
    
    ////
	glColor3f(0.0f,0.0f,0.0f);
	double i5,x5,y5;
    
    glBegin(GL_POINTS);
    for (i5=1.5;i5<=3.1; i5+=0.01)
    {
		x5=1*cos(i5) -6;
		y5=1*sin(i5) -3;
		glVertex2f(x5,y5); 
		
	}
	 glEnd();
	 
	////
	glColor3f(0.0f,0.0f,0.0f);
	double i6,x6,y6;
    
    glBegin(GL_POINTS);
    for (i6=1.5; i6<=3.2; i6+=0.01)
    {
		x6=5*cos(i6) -6;
		y6=5*sin(i6) -3;
		glVertex2f(x6,y6); 
		
	}
	 glEnd();
	
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
    glOrtho(-15.0, 15.0, -15.0, 15.0, -15.0, 15.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (400, 100);
    glutCreateWindow ("Ejercicio 4");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
