#include <windows.h>
#include <stdio.h>

static DWORD num = 0;

#pragma pack(push, 1)
typedef struct
{
	char signature[2];
	DWORD filesize;
	DWORD reserved;
	DWORD pixeloffset;
} BmpFileHeader;
#pragma pack(pop)

void SaveBmp(BITMAPINFO *pBmi, DWORD *pBitmapBits)
{
	BmpFileHeader bmfh =
	{
		{'B', 'M'},
		sizeof(pBmi->bmiHeader) + sizeof(BmpFileHeader) + -pBmi->bmiHeader.biHeight*pBmi->bmiHeader.biWidth*4,
		0,
		sizeof(pBmi->bmiHeader) + sizeof(BmpFileHeader)
	};
	char filename[MAX_PATH];
	sprintf(filename, "tst-%04d.bmp", num++);
	FILE *fp=fopen(filename, "wb");
	fwrite(&bmfh, sizeof(BmpFileHeader), 1, fp);
	fwrite(&pBmi->bmiHeader, sizeof(pBmi->bmiHeader), 1, fp);
	fwrite(pBitmapBits, -pBmi->bmiHeader.biHeight*pBmi->bmiHeader.biWidth*4, 1, fp);
	fclose(fp);
}
