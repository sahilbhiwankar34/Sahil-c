#include <graphics.h>
#include <conio.h>
#include <dos.h>

void drawRocket(int x, int y) {
    // Body of the rocket
    rectangle(x, y, x + 20, y + 60);

    // Nose cone (triangle)
    line(x, y, x + 10, y - 20);
    line(x + 20, y, x + 10, y - 20);

    // Left fin
    line(x, y + 60, x - 10, y + 70);

    // Right fin
    line(x + 20, y + 60, x + 30, y + 70);


}

int main() {
    int gd = DETECT, gm;
    int y = 400; // Initial Y-position of the rocket

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); // Adjust path as per your setup

    while (!kbhit()) {
        cleardevice(); // Clear previous frame
        drawRocket(200, y); // Draw the rocket at new position
        delay(100); // Control speed of animation
        y -= 5; // Move rocket upward

        if (y < 0)
            y = 400; // Reset position to bottom after going off-screen
    }

    getch();
    closegraph();
    return 0;
}
