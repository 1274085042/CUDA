imflip		:	imflip.c ImageStuff.c ImageStuff.h
				gcc imflip.c ImageStuff.c -o imflip

imflipP		:	imflipP.c ImageStuff.c ImageStuff.h
				gcc imflipP.c ImageStuff.c  -fsanitize=address -fno-omit-frame-pointer  -fsanitize=leak -o imflipP -lpthread
