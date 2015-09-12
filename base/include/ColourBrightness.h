

#ifndef Colour_Brightness_H
#define Colour_Brightness_H

#include "ColourCorrect.H"

#include <iostream>

namespace ImageProc {

class ColourBrightness {

    public:
        ColourBrightness();

	// derived implementation of abstract virtual function process
        void process(cv::Mat& imgMatrix);


};//end class

}// end namespace /*Colour_Brightness_H*/

#endif
