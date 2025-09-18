#include "Image.h"

int main ()
{
	Image image;

	// empty image
	image_create(256, 256, &image);

	image_write(&image);

	for (int j = 0; j < image.height; j++) {
		for (int i = 0; i < image.width; i++)
		{
			double r = (1.0 * i) / (image.width - 1);
			double g = (1.0 * j) / (image.height - 1);
			double b = 0.0;

			int ir = 255.999 * r;
			int ig = 255.999 * g;
			int ib = 255.999 * b;

			image.data[0] = ir;
			image.data[1] = ig;
			image.data[2] = ib;
			//image->data[3] = 0;
		}
	}

	image_delete(&image);
	
	return 0;
}