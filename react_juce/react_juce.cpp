/*
  ==============================================================================

    react_juce.cpp
    Created: 26 Nov 2018 3:19:03pm

  ==============================================================================
*/

#ifdef REACTJUCE_H_INCLUDED
 /* When you add this cpp file to your project, you mustn't include it in a file where you've
    already included any other headers - just put it inside a file on its own, possibly with your config
    flags preceding it, but don't include anything else. That also includes avoiding any automatic prefix
    header files that the compiler may be using.
 */
 #error "Incorrect use of the React-JUCE cpp file"
#endif

#include "react_juce.h"

#include "core/AppHarness.cpp"
#include "core/EcmascriptEngine.cpp"

#if JUCE_MODULE_AVAILABLE_juce_audio_processors
    #include "core/GenericEditor.cpp"
#endif

JUCE_BEGIN_IGNORE_WARNINGS_GCC_LIKE("-Wshadow")
JUCE_BEGIN_IGNORE_WARNINGS_MSVC(4244)

#include "core/CanvasView.cpp"
#include "core/ReactApplicationRoot.cpp"
#include "core/ShadowView.cpp"
#include "core/TextInputView.cpp"
#include "core/TextShadowView.cpp"
#include "core/View.cpp"
#include "core/ViewManager.cpp"
#include "core/ScrollView.cpp"
#include "core/ImageView.cpp"
#include "core/Utils.cpp"

JUCE_END_IGNORE_WARNINGS_GCC_LIKE
JUCE_END_IGNORE_WARNINGS_MSVC
