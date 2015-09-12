#ifndef ColourBalance_H
#define ColourBalance_H

namespace ImageProc {

class ColourBalance : public ColourCorrect {

    public:
        ColourBalance();//default constructor
    
    // declaration of pure virtual function
        void process(cv::Mat& imgMatrix);
};

}
//end namespace /*ColourBalance_H*/
#endif
