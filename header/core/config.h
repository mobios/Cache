#ifndef CPP_RTS_CONFIG
#define CPP_RTS_CONFIG

namespace core{
	struct config{
		static unsigned short int xres;
		static unsigned short int yres;
		
		static bool hardMouse;
		static bool softCursor;
		
		
		static float ambiance;
		static float music;
		static float speech;
		
//ADVANCED//
		static bool singleVertex;
		
	private:
		static unsigned double aspectRatio;
	}
	
	