#include <opencv2/opencv.hpp>
#include <iostream>


using namespace cv;
using namespace std;


int main()
{

	Mat img_frame;


	VideoCapture cap("output.avi");
	if (!cap.isOpened())
	{
		cout << "ī�޶� �� �� �����ϴ�." << endl;
		return -1;
	}


	while (1)
	{

		bool ret = cap.read(img_frame);
		if (!ret)
		{
			cout << "������ ���� �б� �Ϸ�" << endl;
			break;
		}


		imshow("Color", img_frame);

		int key = waitKey(25);
		if (key == 27)
			break;
	}


	cap.release();
	return 0;
}