struct ImgProp
{
	int Hpixels;   // 图像的宽
	int Vpixels;   // 图像的高
	unsigned char HeaderInfo[54];
	unsigned long int Hbytes;
};

struct Pixel
{
	unsigned char R;
	unsigned char G;
	unsigned char B;
};

unsigned char** ReadBMP(char* );
void WriteBMP(unsigned char** , char*);

extern struct ImgProp 	ip;
