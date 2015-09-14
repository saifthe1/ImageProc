// @file
//
// @section DESCRIPTION
//
// ClassName ColourControls
// This is abstract base class to define rules for all the derived classes
// Essentially the classes derived from it will be image processing techniques 
// applied on a given image

#ifndef ColourControls_H
#define ColourControls_H

#include "opencv2/core/core.hpp"
#include<iostream>

namespace ImageProc {

// class Time; // forward declare class Time 
class ColourControls {

   public:
       virtual void process(cv::Mat& imgMatrix,
			    const int value,
			    const int r,
			    const int g,
			    const int b
			   ) = 0;
			   
	virtual ~ColourControls(){ 
	}
	
	virtual const std::string controlName() const = 0;
//    private:
//        Time time_;
       
};

}//namespace

#endif
