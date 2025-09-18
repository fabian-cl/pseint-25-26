#pragma once

#define NUMBER_OF_CHANNELS 3 // RGB format
#define PIXEL_MAX_VALUE 255 // 0..255

typedef struct {
	int width, height;
	unsigned char* data;
} Image ;

static void image_create(int width, int height, Image* image);
static void image_delete(Image* image);


// clear image
static void image_clear(Image* image);
// Output image using ppm format
static void image_write(Image* image);

///////////////////////////////////////////////////////////////////////////////////////////////////
// IMPLEMENTATION

#include <stdio.h>
#include <stdlib.h> // Necesario para malloc

static void image_create(int width, int height, Image* image)
{
	// release data
	//image_delete(image);

	image->width = width;
	image->height = height;
	image->data = (unsigned char*)malloc(width * height * NUMBER_OF_CHANNELS * sizeof(char));

	// initialize to 0
	/*
	for (int x = 0; x < image->width; x++)
	{
		for (int y = 0; y < image->height; y++)
		{
			image->data[0] = 0;
			image->data[1] = 0;
			image->data[2] = 0;
			//image->data[3] = 0;
		}
	}
	*/
}

static void image_delete(Image* image)
{
	if (image)
	{
		// release data pointer
		//delete image->data;
		//delete image;
	}
}


// clear image
static void image_clear(Image* image)
{
	//TODO: improve
	for (int x = 0; x < image->width; x++)
	{
		for (int y = 0; y < image->height; y++)
		{
			image->data[0] = 0;
			image->data[1] = 0;
			image->data[2] = 0;
			//image->data[3] = 0;
		}
	}
}
// Output image using ppm format
static void image_write(Image* image)
{
	printf("P3\n%d %d\n255\n", image->width, image->height);

	for (int j = 0; j < image->height; j++) {
		for (int i = 0; i < image->width; i++)
		{
			int index = i * image->height + j;
			printf("%d %d %d\n", 
				image->data[index],
				image->data[index + 1],
				image->data[index + 2]);
			//std::cout << ir << ' ' << ig << ' ' << ib << '\n';
		}
	}
}