

#ifndef Colour_Brightness_H
#define Colour_Brightness_H

#include "ColourControls.h"

#include <iostream>

namespace ImageProc {

class ColourBrightness : public ColourControls {

    public:
        ColourBrightness();

	//destructor
	~ColourBrightness();
	
	// derived implementation of abstract virtual function process
        void process(cv::Mat& imgMatrix,
		     const int value,
		     const int r,
		     const int g,
		     const int b
		    );
	
	~ColourBrightness(){
	}
	
	const std::string controlName(){
	    return static_cast<std::string>("ColourBrightness");
	}
};//end class

}// end namespace /*Colour_Brightness_H*/

#endif
