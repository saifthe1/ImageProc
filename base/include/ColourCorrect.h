// @file
//
// @section DESCRIPTION
//
// ClassName ColourCorrect
// This is abstract base class to define rules for all the derived classes
// Essentially the classes derived from it will be image processing techniques 
// applied on a given image

#ifndef ColourCorrect_H
#define ColourCorrect_H

#include "opencv2/core/core.hpp"
#include<iostream>

namespace ImageProc {

class Time; // forward declare class Time 
class ColourCorrect {

   public:
       virtual void process(cv::Mat& imgMatrix) = 0;
   private:
       Time time_;
       
};

}//namespace

#endif
