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
    
 //dibujando
	//// lado izquierdo
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-3.0f,4.5f,0.0f);
	glVertex3f(-0.5f,1.0f,0.0f);
	glVertex3f(-3.0f,4.5f,0.0f);
	glVertex3f(-6.3f,1.5f,0.0f);
	
	////techo peq
	glVertex3f(-3.0f,4.3f,0.0f);
	glVertex3f(-0.5f,0.75f,0.0f);
	
	glVertex3f(-0.5f,0.75f,0.0f);
	glVertex3f(-0.5f,1.0f,0.0f);
	
	glVertex3f(-3.0f,4.3f,0.0f);
	glVertex3f(-6.3f,1.3f,0.0f);
	
	glVertex3f(-6.3f,1.3f,0.0f);
	glVertex3f(-6.3f,1.5f,0.0f);
	
	glVertex3f(-2.95,4.25f,0.0f);
	glVertex3f(-6.2f,1.3f,0.0f);
	
	glVertex3f(-6.3f,1.3f,0.0f);
	glVertex3f(-6.0f,1.3f,0.0f);
	
	////   
	glVertex3f(-6.0f,1.5f,0.0f);
	glVertex3f(-6.0f,-1.5f,0.0f); 
	
	////   
	glVertex3f(-0.5f,0.8f,0.0f);
	glVertex3f(-0.5f,-4.5f,0.0f); 
	
	////   
	glVertex3f(-6.0f,-1.0f,0.0f);
	glVertex3f(-0.5f,-1.7f,0.0f);
	glVertex3f(-0.5f,-1.7f,0.0f);
	glVertex3f(2.4f,-1.3f,0.0f);
	glVertex3f(2.4f,1.15f,0.0f);
	glVertex3f(2.4f,-1.3f,0.0f);
	
	      
    glEnd();	
 

    
    
    //// centro cubo arriba
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.1f,4.5f,0.0f);
	glVertex3f(1.0f,4.7f,0.0f);
	glVertex3f(1.0f,5.75f,0.0f);
	glVertex3f(0.1f,6.0f,0.0f);
	glVertex3f(-0.8f,5.75f,0.0f);
	glVertex3f(-0.8f,5.13f,0.0f);
	glVertex3f(-0.5f,5.2f,0.0f);
      
    glEnd();
    
    ////
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.1f,5.5f,0.0f);
	glVertex3f(1.0f,5.75f,0.0f);
	glVertex3f(0.1f,6.0f,0.0f);
	glVertex3f(-0.8f,5.75f,0.0f);
      
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.1f,4.5f,0.0f);
	glVertex3f(0.1f,5.5f,0.0f);
      
    glEnd();
    
    //// linea techo
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-3.0f,4.5f,0.0f);
	glVertex3f(-0.5f,5.2f,0.0f);
  
    glEnd();
    
    //// linea 
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(1.0f,5.6f,0.0f);
	glVertex3f(3.0f,6.1f,0.0f);
  
    glEnd();
    
    //// linea 
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(4.75f,3.8f,0.0f);
	glVertex3f(3.0f,6.1f,0.0f);
  
    glEnd();
    
        //// centro 1
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(2.4f,1.25f,0.0f);
	glVertex3f(3.5f,1.0f,0.0f);
	glVertex3f(6.0f,3.55f,0.0f);
	glVertex3f(2.0f,4.25f,0.0f);
      
    glEnd();
  
  
	////
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(2.4f,1.25f,0.0f);
	glVertex3f(3.5f,1.0f,0.0f);
	

    glEnd(); 
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(2.4f,-1.3f,0.0f);
	glVertex3f(3.5f,-1.7f,0.0f);
	glVertex3f(3.5f,-1.7f,0.0f);
	glVertex3f(7.3f,-1.0f,0.0f);

    glEnd();
    
        ///// lineas centro techo peq
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(2.4f,1.25f,0.0f);
	glVertex3f(-0.5f,1.0f,0.0f);
	glVertex3f(3.5f,0.9f,0.0f);
	glVertex3f(2.4f,1.15f,0.0f);
	glVertex3f(2.4f,1.15f,0.0f);
	glVertex3f(-0.5f,0.9f,0.0f);
	
	
	glEnd();

    
    //// lado derecho lineas peq
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(6.0f,3.55f,0.0f);
	glVertex3f(7.5f,1.5f,0.0f);
	glVertex3f(7.5f,1.5f,0.0f);
	glVertex3f(7.5f,1.3f,0.0f);
	glVertex3f(7.5f,1.3f,0.0f);
	glVertex3f(6.0f,3.35f,0.0f);
	glVertex3f(5.97f,3.31f,0.0f);
	glVertex3f(7.45f,1.29f,0.0f);
	glVertex3f(7.5f,1.3f,0.0f);
	glVertex3f(7.3f,1.3f,0.0f);
	
  
    glEnd();
    
    /////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(7.3f,1.5f,0.0f);
	glVertex3f(7.3f,-3.8f,0.0f);
	glVertex3f(3.5f,1.0f,0.0f);
	glVertex3f(3.5f,-4.5f,0.0f);
	glVertex3f(6.0f,3.35f,0.0f);
	glVertex3f(3.5f,0.8f,0.0f);
	
	
	glEnd();
	
	/////ventana derecha superior
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(6.5f,1.45f,0.0f);
	glVertex3f(6.5f,-0.25f,0.0f);
	glVertex3f(6.5f,-0.25f,0.0f);
	glVertex3f(4.18f,-0.7f,0.0f);
	glVertex3f(6.5f,-0.25f,0.0f);
	glVertex3f(6.57f,-0.35f,0.0f);
	
	////ventana 1
	glVertex3f(5.0f,1.15f,0.0f);
	glVertex3f(5.0f,-0.55f,0.0f);
	
	glVertex3f(4.9f,1.15f,0.0f);
	glVertex3f(4.9f,-0.45f,0.0f);
	glVertex3f(4.9f,-0.45f,0.0f);
	glVertex3f(4.18f,-0.57f,0.0f);

	
	////ventana 2
	glVertex3f(5.75f,1.3f,0.0f);
	glVertex3f(5.75f,-0.4f,0.0f);
	
	glVertex3f(5.65f,1.3f,0.0f);
	glVertex3f(5.65f,-0.3f,0.0f);
	glVertex3f(5.65f,-0.3f,0.0f);
	glVertex3f(5.0f,-0.42f,0.0f);
	
	////ventana 3
	
	
	glVertex3f(6.4f,1.42f,0.0f);
	glVertex3f(6.4f,-0.15f,0.0f);
	glVertex3f(6.4f,-0.15f,0.0f);
	glVertex3f(5.75f,-0.27f,0.0f);


	glEnd();
	
	////
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(4.18f,1.0f,0.0f);
	glVertex3f(6.57f,1.45f,0.0f);
	glVertex3f(6.57f,-0.35f,0.0f);
	glVertex3f(4.18f,-0.8f,0.0f);

	glEnd();
	
		////
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(4.1f,1.1f,0.0f);
	glVertex3f(6.65f,1.55f,0.0f);
	glVertex3f(6.65f,-0.45f,0.0f);
	glVertex3f(4.1f,-0.9f,0.0f);

	glEnd();
	
   	/////ventana derecha inferior
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(6.5f,-1.6f,0.0f);
	glVertex3f(6.5f,-3.3f,0.0f);
	glVertex3f(6.5f,-3.3f,0.0f);
	glVertex3f(4.18f,-3.75f,0.0f);
	glVertex3f(6.5f,-3.3f,0.0f);
	glVertex3f(6.57f,-3.4f,0.0f);
	
	////ventana 1
	glVertex3f(5.0f,-1.9f,0.0f);
	glVertex3f(5.0f,-3.6f,0.0f);
	
	glVertex3f(4.9f,-1.9f,0.0f);
	glVertex3f(4.9f,-3.5f,0.0f);
	glVertex3f(4.9f,-3.5f,0.0f);
	glVertex3f(4.18f,-3.62f,0.0f);

	
	////ventana 2
	glVertex3f(5.75f,-1.75f,0.0f);
	glVertex3f(5.75f,-3.45f,0.0f);
	
	glVertex3f(5.65f,-1.75f,0.0f);
	glVertex3f(5.65f,-3.35f,0.0f);
	glVertex3f(5.65f,-3.35f,0.0f);
	glVertex3f(5.0f,-3.47f,0.0f);
	
	////ventana 3
	
	
	glVertex3f(6.4f,-1.63f,0.0f);
	glVertex3f(6.4f,-3.2f,0.0f);
	glVertex3f(6.4f,-3.2f,0.0f);
	glVertex3f(5.75f,-3.32f,0.0f);
	
	//suelo
	glVertex3f(2.4f,-4.1f,0.0f);
	glVertex3f(3.5f,-4.5f,0.0f);
	glVertex3f(3.5f,-4.5f,0.0f);
	glVertex3f(7.3f,-3.8f,0.0f);


	glEnd();
	
	////
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(4.18f,-2.05f,0.0f);
	glVertex3f(6.57f,-1.6f,0.0f);
	glVertex3f(6.57f,-3.4f,0.0f);
	glVertex3f(4.18f,-3.85f,0.0f);

	glEnd();
	
		////
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(4.1f,-1.95f,0.0f);
	glVertex3f(6.65f,-1.5f,0.0f);
	glVertex3f(6.65f,-3.5f,0.0f);
	glVertex3f(4.1f,-3.95f,0.0f);

	glEnd();
	
	    //// ventana centro
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.6f,0.9f,0.0f);
	glVertex3f(0.6f,-0.7f,0.0f);
	glVertex3f(1.75f,-0.6f,0.0f);
	glVertex3f(1.75f,1.0f,0.0f);
  
    glEnd();
    
    /////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(1.65f,-0.5f,0.0f);
	glVertex3f(0.6f,-0.6f,0.0f);
	glVertex3f(1.65f,-0.5f,0.0f);
	glVertex3f(1.65f,1.0f,0.0f);
	
	glVertex3f(1.65f,-0.5f,0.0f);
	glVertex3f(1.75f,-0.6f,0.0f);

	glVertex3f(1.55f,-0.4f,0.0f);
	glVertex3f(0.6f,-0.5f,0.0f);
	glVertex3f(1.55f,-0.4f,0.0f);
	glVertex3f(1.55f,1.0f,0.0f);
  
    glEnd();
    
    /////
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.5f,1.0f,0.0f);
	glVertex3f(0.5f,-0.8f,0.0f);
	glVertex3f(1.85f,-0.7f,0.0f);
	glVertex3f(1.85f,1.1f,0.0f);
  
    glEnd();
    
    ////puerta
    //parte arriba
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(1.85f,-1.9f,0.0f);
	glVertex3f(0.1f,-2.2f,0.0f);
	glVertex3f(1.0f,-2.75f,0.0f);
	glVertex3f(2.65f,-2.45f,0.0f);
  
    glEnd();
    
    //triangulo puerta
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.1f,-2.2f,0.0f);
	glVertex3f(1.0f,-2.75f,0.0f);
	glVertex3f(0.1f,-2.75f,0.0f);

    glEnd();
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.9f,-2.75f,0.0f);
	glVertex3f(0.1f,-2.25f,0.0f);
	

    glEnd();
    
    ////puerta
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(1.85f,-2.6f,0.0f);
	glVertex3f(1.85f,-4.1f,0.0f);
	
	glVertex3f(1.85f,-4.1f,0.0f);
	glVertex3f(0.5f,-4.3f,0.0f);
	
	glVertex3f(0.5f,-4.3f,0.0f);
	glVertex3f(0.5f,-2.75f,0.0f);
	

    glEnd();
    
        ////puerta lineas internas
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(1.75f,-2.6f,0.0f);
	glVertex3f(1.75f,-4.0f,0.0f);
	
	glVertex3f(1.75f,-4.0f,0.0f);
	glVertex3f(0.5f,-4.2f,0.0f);
	

    glEnd();
    
    ////puerta abajo
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.5f,-4.4f,0.0f);
	glVertex3f(0.9f,-4.7f,0.0f);
	
	glVertex3f(0.9f,-4.7f,0.0f);
	glVertex3f(2.3f,-4.5f,0.0f);
	
	glVertex3f(2.3f,-4.4f,0.0f);
	glVertex3f(1.85f,-4.1f,0.0f);
	

    glEnd();
    
        ////puerta abajo linea dentro
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.5f,-4.3f,0.0f);
	glVertex3f(0.9f,-4.6f,0.0f);
	
	glVertex3f(0.9f,-4.6f,0.0f);
	glVertex3f(2.3f,-4.4f,0.0f);
	
	glVertex3f(2.3f,-4.5f,0.0f);
	glVertex3f(2.3f,-4.4f,0.0f);
	
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(2.4f,-1.3f,0.0f);
	glVertex3f(2.4f,-2.3f,0.0f);
	
	glVertex3f(2.4f,-2.5f,0.0f);
	glVertex3f(2.4f,-4.1f,0.0f);

    glEnd();
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.9f,-4.7f,0.0f);
	glVertex3f(0.9f,-4.6f,0.0f);
	
	
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(2.4f,-4.1f,0.0f);
	glVertex3f(1.9f,-4.15f,0.0f);

	glVertex3f(-0.5f,-4.5f,0.0f);
	glVertex3f(0.5f,-4.4f,0.0f);
	
	
	glVertex3f(0.5f,-4.4f,0.0f);
	glVertex3f(0.5f,-4.3f,0.0f);
	
    glEnd();
    
    ////puerta cuadros dentro
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.7f,-3.5f,0.0f);
	glVertex3f(1.0f,-3.45f,0.0f);
	glVertex3f(1.0f,-3.95f,0.0f);
	glVertex3f(0.7f,-4.0f,0.0f);
	

    glEnd();
    
        ////
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(1.25f,-3.45f,0.0f);
	glVertex3f(1.55f,-3.4f,0.0f);
	glVertex3f(1.55f,-3.9f,0.0f);
	glVertex3f(1.25f,-3.95f,0.0f);
	

    glEnd();
    
           ////
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.9f,-3.35f,0.0f);
	glVertex3f(1.35f,-3.3f,0.0f);
	glVertex3f(1.35f,-3.15f,0.0f);
	glVertex3f(0.9f,-3.2f,0.0f);
	

    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.7f,-2.75f,0.0f);
	glVertex3f(0.7f,-3.1f,0.0f);
	
	glVertex3f(0.7f,-3.1f,0.0f);
	glVertex3f(1.0f,-3.05f,0.0f);
	
	glVertex3f(1.0f,-3.05f,0.0f);
	glVertex3f(1.0f,-2.75f,0.0f);

    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(1.25f,-2.7f,0.0f);
	glVertex3f(1.25f,-3.05f,0.0f);
	
	glVertex3f(1.25f,-3.05f,0.0f);
	glVertex3f(1.55f,-3.0f,0.0f);
	
	glVertex3f(1.55f,-3.0f,0.0f);
	glVertex3f(1.55f,-2.63f,0.0f);

    glEnd();
    
     ////techo garaje
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-6.0f,-1.5f,0.0f);
	glVertex3f(-6.7f,-1.6f,0.0f);
	glVertex3f(-7.5f,-3.0f,0.0f);
	glVertex3f(-3.5f,-4.0f,0.0f);
	glVertex3f(-2.5f,-2.5f,0.0f);
	glVertex3f(-1.4f,-2.1f,0.0f);
	

    glEnd();
    
         ////techo garaje lineas 
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-1.4f,-2.2f,0.0f);
	glVertex3f(-2.4f,-2.6f,0.0f);
	
	glVertex3f(-2.4f,-2.6f,0.0f);
	glVertex3f(-3.4f,-4.1f,0.0f);
	
	glVertex3f(-3.4f,-4.1f,0.0f);
	glVertex3f(-7.5f,-3.1f,0.0f);
	
	
	glVertex3f(-3.4f,-4.1f,0.0f);
	glVertex3f(-3.5f,-4.0f,0.0f);
	
	glVertex3f(-7.5f,-3.1f,0.0f);
	glVertex3f(-7.5f,-3.0f,0.0f);

    glEnd();
    
    ////pared garaje 
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-7.4f,-3.13f,0.0f);
	glVertex3f(-7.4f,-5.0f,0.0f);
	
	glVertex3f(-7.4f,-5.0f,0.0f);
	glVertex3f(-3.5f,-6.0f,0.0f);
	
	glVertex3f(-3.5f,-6.0f,0.0f);
	glVertex3f(-3.5f,-4.07f,0.0f);
	
	glVertex3f(-6.7f,-1.6f,0.0f);
	glVertex3f(-2.5f,-2.5f,0.0f);
	
	glVertex3f(-0.5f,-4.5f,0.0f);
	glVertex3f(-1.4f,-4.4f,0.0f);
	
	glVertex3f(-1.4f,-3.95f,0.0f);
	glVertex3f(-1.4f,-4.4f,0.0f);
	
	glVertex3f(-1.4f,-4.4f,0.0f);
	glVertex3f(-1.5f,-4.5f,0.0f);
	
	glVertex3f(-1.5f,-4.5f,0.0f);
	glVertex3f(-1.5f,-4.05f,0.0f);
	
	glVertex3f(-1.5f,-2.5f,0.0f);
	glVertex3f(-1.5f,-2.75f,0.0f);
	
	glVertex3f(-1.6f,-2.62f,0.0f);
	glVertex3f(-1.6f,-2.75f,0.0f);
	
	glVertex3f(-1.5f,-4.5f,0.0f);
	glVertex3f(-1.6f,-4.5f,0.0f);
	
	glVertex3f(-1.6f,-4.5f,0.0f);
	glVertex3f(-1.6f,-4.15f,0.0f);

    glEnd();
    
    ////frente garaje 
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-3.5f,-6.0f,0.0f);
	glVertex3f(-3.25f,-5.75f,0.0f);
	
	glVertex3f(-3.25f,-5.75f,0.0f);
	glVertex3f(-3.25f,-4.3f,0.0f);
	
	glVertex3f(-3.25f,-4.3f,0.0f);
	glVertex3f(-1.5f,-2.5f,0.0f);
	
	glVertex3f(-1.4f,-2.1f,0.0f);
	glVertex3f(-1.4f,-2.8f,0.0f);

    glEnd();
    
    ////frente garaje puerta
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-3.25f,-4.5f,0.0f);
	glVertex3f(-2.3f,-4.9f,0.0f);
	
	glVertex3f(-2.3f,-4.9f,0.0f);
	glVertex3f(-0.5f,-3.0f,0.0f);
	
	glVertex3f(-0.5f,-3.0f,0.0f);
	glVertex3f(-1.7f,-2.7f,0.0f);

    glEnd();
    
        ////ventana izq 1
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-5.25f,1.3f,0.0f);
	glVertex3f(-3.75f,1.2f,0.0f);
	glVertex3f(-3.75f,-0.5f,0.0f);
	glVertex3f(-5.25f,-0.3f,0.0f);

    glEnd();
    
      ////
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-5.35f,1.3f,0.0f);
	glVertex3f(-3.75f,1.2f,0.0f);
	glVertex3f(-3.75f,-0.6f,0.0f);
	glVertex3f(-5.35f,-0.4f,0.0f);

    glEnd();
    
    ////
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-5.45f,1.4f,0.0f);
	glVertex3f(-3.65f,1.3f,0.0f);
	glVertex3f(-3.65f,-0.75f,0.0f);
	glVertex3f(-5.45f,-0.5f,0.0f);

    glEnd();
    
    ////ventana izq 1 lineas
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-4.5f,1.25f,0.0f);
	glVertex3f(-4.5f,-0.4f,0.0f);
	
	////
	glVertex3f(-4.5f,-0.3f,0.0f);
	glVertex3f(-5.1f,-0.25f,0.0f);
	
	glVertex3f(-5.1f,-0.25f,0.0f);
	glVertex3f(-5.1f,1.3f,0.0f);
	
	////
	glVertex3f(-3.75f,-0.4f,0.0f);
	glVertex3f(-4.35f,-0.32f,0.0f);
	
	glVertex3f(-4.35f,-0.32f,0.0f);
	glVertex3f(-4.35f,1.25f,0.0f);


	////
	glVertex3f(-5.35f,-0.4f,0.0f);
	glVertex3f(-5.25f,-0.3f,0.0f);

    glEnd();
    
    ////ventana izq 2
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-2.75f,1.0f,0.0f);
	glVertex3f(-1.25f,0.9f,0.0f);
	glVertex3f(-1.25f,-0.8f,0.0f);
	glVertex3f(-2.75f,-0.6f,0.0f);

    glEnd();
    
      ////
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-2.85f,1.0f,0.0f);
	glVertex3f(-1.25f,0.9f,0.0f);
	glVertex3f(-1.25f,-0.9f,0.0f);
	glVertex3f(-2.85f,-0.7f,0.0f);

    glEnd();
    
    ////
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-2.95f,1.1f,0.0f);
	glVertex3f(-1.15f,1.0f,0.0f);
	glVertex3f(-1.15f,-1.05f,0.0f);
	glVertex3f(-2.95f,-0.8f,0.0f);

    glEnd();
    
    ////ventana izq 2 lineas
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-2.0f,0.95f,0.0f);
	glVertex3f(-2.0f,-0.7f,0.0f);
	
	////
	glVertex3f(-2.0f,-0.6f,0.0f);
	glVertex3f(-2.6f,-0.55f,0.0f);
	
	glVertex3f(-2.6f,-0.55f,0.0f);
	glVertex3f(-2.6f,1.0f,0.0f);
	
	////
	glVertex3f(-1.25f,-0.7f,0.0f);
	glVertex3f(-1.85f,-0.62f,0.0f);
	
	glVertex3f(-1.85f,-0.62f,0.0f);
	glVertex3f(-1.85f,0.95f,0.0f);


	////
	glVertex3f(-2.85f,-0.7f,0.0f);
	glVertex3f(-2.75f,-0.6f,0.0f);
	

    glEnd();

        ////ventanas garaje
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-4.3f,-5.2f,0.0f);
	glVertex3f(-4.3f,-4.2f,0.0f);
	glVertex3f(-5.2f,-4.0f,0.0f);
	glVertex3f(-5.2f,-5.0f,0.0f);

    glEnd();
    
     ////ventanas garaje lineas
    glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-4.4f,-5.1f,0.0f);
	glVertex3f(-4.4f,-4.25f,0.0f);
	glVertex3f(-5.1f,-4.1f,0.0f);
	glVertex3f(-5.1f,-4.95f,0.0f);

    glEnd();
    
     ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-4.4f,-4.98f,0.0f);
	glVertex3f(-5.0f,-4.88f,0.0f);
	
	glVertex3f(-5.0f,-4.88f,0.0f);
	glVertex3f(-5.0f,-4.1f,0.0f);
	
	////
	glVertex3f(-5.1f,-4.95f,0.0f);
	glVertex3f(-5.0f,-4.88f,0.0f);
	
	////
	glVertex3f(-4.4f,-4.88f,0.0f);
	glVertex3f(-4.9f,-4.8f,0.0f);
	
	glVertex3f(-4.9f,-4.8f,0.0f);
	glVertex3f(-4.9f,-4.1f,0.0f);

    glEnd();

		
    glFlush();
    glutSwapBuffers();


}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
    glOrtho(-8.0, 8.0, -8.0, 8.0, -8.0, 8.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (400, 90);
    glutCreateWindow ("Ejercicio 6");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
