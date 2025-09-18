// https://raytracing.github.io/books/RayTracingInOneWeekend.html
 
#define TRUE 0
#define FALSE 1

struct image {
    int width, height;
    char* data; // rgba format (0..255)
};

void image_create(int width, int height, image* i) {
    // check width and height not 0
    image->width = width;
    image->height = height;

    image->data = malloc(width * height * 4);
}

int main () {
    print("Test");
    return 0;
}