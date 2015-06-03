

#ifndef ALGO_TEST



#include "mcv.h"

int main() {
	

	mcv::Mat img;
	mcv::Mat img2;
	
	
	//img = mcv::imread("picture/face.png");
	//
	//mcv::imwrite("picture/test_png_decode_and_bmp_encode.bmp", img);

	//mcv::imwrite("picture/test_png_encode.png", img);


	//img2 = mcv::imread("picture/test_png_decode_and_bmp_encode.bmp");
	//mcv::imwrite("picture/test_bmp_decode.png", img2);


	/*img = mcv::imread("picture/yuanyuan.bmp", 0);
	std::cout << img.total() << std::endl;
	mcv::Smooth(img, img2, mcv::SMOOTH_LAP_MASK1);
	mcv::imwrite("picture/yuanyuan_smooth.bmp", img2);*/

	img = mcv::imread("picture/lena.bmp", 0);
	mcv::imwrite("picture/lena_gray.png", img);

	mcv::NegativeImg(img, img2);
	mcv::imwrite("picture/lena_neg.bmp", img2);

	mcv::CompressGray(img, img2);
	mcv::imwrite("picture/lena_compress.bmp", img2);

	mcv::Smooth(img, img2, mcv::SMOOTH_LAP_MASK1);
	mcv::imwrite("picture/lena_smooth.bmp", img2);
	return 0;
}


#endif // !ALGOTEST
