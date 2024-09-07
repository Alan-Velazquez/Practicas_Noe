#include <GL/glut.h>
#include <cmath> // Para funciones matemáticas
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
void mostrar(void);
void inicializacion(void);

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50, 100);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Plano Cartesiano Completo");

    inicializacion();
    glutDisplayFunc(mostrar);
    glutMainLoop();
    return 0;
}

void mostrar(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    // Dibujar ejes del plano cartesiano
    glColor3f(0.0, 0.0, 0.0);  // Negro
    glBegin(GL_LINES);
    glVertex2i(400, 0); // Eje Y
    glVertex2i(400, 600); // Eje Y

    glVertex2i(0, 300); // Eje X
    glVertex2i(800, 300); // Eje X
    glEnd();

    // Dibujar figuras en los cuadrantes
    glColor3f(1.0, 1.0, 0.0);  // Amarillo
    glBegin(GL_QUADS);
    glVertex2i(500, 500);  // Vértice superior izquierdo
    glVertex2i(600, 500);  // Vértice superior derecho
    glVertex2i(550, 350);  // Vértice inferior derecho
    glVertex2i(450, 350);  // Vértice inferior izquierdo
    glEnd();

    // Segundo Cuadrante (arriba a la izquierda)
    glColor3f(0.0, 1.0, 0.0); // Verde
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(200, 500); // Centro
    glVertex2i(150, 550);
    glVertex2i(100, 500);
    glVertex2i(150, 450);
    glEnd();

    // Tercer Cuadrante (abajo a la izquierda)
    glColor3f(0.0, 0.0, 1.0);  // Azul
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++) {
        float angle = i * M_PI / 180.0;
        float x = 100 + 50 * cos(angle);
        float y = 100 + 50 * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();

    // Cuarto Cuadrante (abajo a la derecha)
    glColor3f(1.0, 0.0, 1.0); // Magenta
    glBegin(GL_TRIANGLES);
    glVertex2i(500, 100); // Vértice inferior izquierdo
    glVertex2i(650, 100); // Vértice inferior derecho
    glVertex2i(575, 200); // Vértice superior
    glEnd();

    glFlush();
}

void inicializacion(void) {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 800.0, 0.0, 600.0);
}