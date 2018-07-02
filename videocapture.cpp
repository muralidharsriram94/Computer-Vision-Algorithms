#include <opencv2/opencv.hpp>
using namespace cv;

int main(int argc,char** argv){

     VideoCapture cap(1);

   

     if(!cap.isOpened())
     	return -1;

     Mat Frames;

     namedWindow("Frames",1);

     for(;;){
     	

     	cap >> Frames;

     	imshow("Frames", Frames);

     	if(waitKey(30) >= 0) break;
     }

    return 0;

}
