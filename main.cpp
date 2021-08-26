/* This Demo shows how to save images
*  using Basler Pylon Libs and Raspberry Pi 4
*/


#include <iostream>
#include<pylon/PylonIncludes.h>

using namespace std;
using namespace Pylon;

int main()
{
    // the pylon runtime must be initialized
    PylonInitialize();

   // Saving grabbed images
     cout << "Image is saved on project folder" << endl;

   // This smart pointer will receive the grab result data.
    CGrabResultPtr ptrGrabResult;
    CInstantCamera Camera( CTlFactory::GetInstance().CreateFirstDevice() );

        if (Camera.GrabOne( 1000, ptrGrabResult ))
            {
                // The pylon grab result smart pointer classes provide a cast operator to the IImage
                // interface. This makes it possible to pass a grab result directly to the
                // function that saves an image to disk.
                CImagePersistence::Save( ImageFileFormat_Png, "GrabbedImage.png", ptrGrabResult );
            }

    // Releases all pylon resources.
    PylonTerminate();

    return 0;
}
