#include <stdio.h>

/*
 * Read an image from the standard input and set the red value of each pixel to
 * zero.
 */
void remove_red()
{
  int width, height, maxColor, r, g, b;
  scanf("P3\n %d\n %d\n %d\n", &width, &height, &maxColor);
  printf("P3 %d %d %d\n", width, height, maxColor);
  int i;
  for (i = 0; i < width * height; i++) {
    scanf("%d\n %d\n %d\n", &r, &g, &b);
    printf("0 %d %d \n", g, b);
    if ( (i + 1)%width == 0) {
      printf("\n");
    }
  }
}

/*
 * Read an image from the standard input and convert it from colour to black and white.
 */
void convert_to_black_and_white()
{
    int width, height, maxColor, r, g, b;
  scanf("P3\n %d\n %d\n %d\n", &width, &height, &maxColor);
  printf("P3 %d %d %d\n", width, height, maxColor);
  int i, avg;
  for (i = 0; i < width * height; i++) {
    scanf("%d\n %d\n %d\n", &r, &g, &b);
    avg = (r + g + b) / 3;
    printf("%d %d %d\n ", avg, avg, avg);
    if ((i + 1) % width == 0) {
      printf("\n");
    }
  }
    
}

/*
 * Read an image from the standard input and convert it to a square image.
 */
void instagram_square()
{

int  width, height, maxColor, r, g, b;
  scanf("P3\n %d\n %d\n %d", &width, &height, &maxColor);
  if (width <= height) {
    printf("P3 %d %d %d\n", width, width, maxColor);
    int i;
    for (i = 0; i < width * width; i++){
      scanf("%d\n %d\n %d\n", &r, &g, &b);
      printf("%d %d %d \n", r, g, b);
      if ( (i + 1) % width == 0) {
	printf("\n");
      }
    }
  } else if (height < width) {
    printf("P3 %d %d %d\n", height, height, maxColor);
  
    for (int i = 0; i < height * height; i++){
      scanf("%d\n %d\n %d\n", &r, &g, &b);
      if ( ( i + 1 ) % height == 0) {
        printf("%d %d %d\n", r, g, b);

	int j;
	for (j = 0; j < (width - height); j++) {
          scanf("%d\n %d\n %d\n", &r, &g, &b);
        }
        continue;
      }

      printf("%d %d %d \n", r, g, b);
      if ( ( i + 1 ) % width == 0) {
	printf("\n");

      }
    }
  }

}
