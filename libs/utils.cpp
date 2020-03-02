#include "utils.h"

int add(int a, int b) {
    return a+b;
}

int test_opencv(const string file){
    Mat src;
	// string file = "xxx.jpg";
 
	src = imread(file );
	if (src.empty())
	{
		fprintf(stderr, "Can not load image %s\n", file);
		return -1;
	}
	imshow("123", src);
	cvWaitKey(0);
	waitKey(0);
 
	return 0;
}
