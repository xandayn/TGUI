/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2016 Bruno Van de Velde (vdv_b@tgui.eu)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef TGUI_BUTTON_RENDERER_HPP
#define TGUI_BUTTON_RENDERER_HPP


#include <TGUI/Renderers/WidgetRenderer.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace tgui
{
    struct TGUI_API ButtonRenderer : public WidgetRenderer
    {
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the size of the borders
        ///
        /// @param borders  Size of the borders
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBorders(const Borders& borders);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the size of the borders
        ///
        /// @return border size
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Borders getBorders() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the text
        ///
        /// @param color  New text color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextColor(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the text color
        ///
        /// @return text color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getTextColor() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the text in the hover state (mouse on button, but not pressed)
        ///
        /// @param color  New text color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextColorHover(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the text color in the hover state (mouse on button, but not pressed)
        ///
        /// @return text color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getTextColorHover() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the text in the down state (mouse on button and left mouse button being held down)
        ///
        /// @param color  New text color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextColorDown(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the text color in the down state (mouse on button and left mouse button being held down)
        ///
        /// @return text color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getTextColorDown() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the text that is used when the button is disabled
        ///
        /// @param color  New text color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextColorDisabled(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the text color that is used when the button is disabled
        ///
        /// @return text color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getTextColorDisabled() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the background
        ///
        /// @param color  New background color
        ///
        /// Note that this color is ignored when you set an image as background.
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBackgroundColor(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the background color
        ///
        /// @return background color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBackgroundColor() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the background in the hover state (mouse on button, but not pressed)
        ///
        /// @param color  New background color
        ///
        /// Note that this color is ignored when you set an image as background.
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBackgroundColorHover(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the background color in the hover state (mouse on button, but not pressed)
        ///
        /// @return background color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBackgroundColorHover() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the background in the down state (mouse on button and left mouse button being held down)
        ///
        /// @param color  New background color
        ///
        /// Note that this color is ignored when you set an image as background.
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBackgroundColorDown(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the background color in the down state (mouse on button and left mouse button being held down)
        ///
        /// @return background color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBackgroundColorDown() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the background that is used when the button is disabled
        ///
        /// @param color  New background color
        ///
        /// Note that this color is ignored when you set an image as background.
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBackgroundColorDisabled(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the background color that is used when the button is disabled
        ///
        /// @return background color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBackgroundColorDisabled() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the borders
        ///
        /// @param color  New border color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBorderColor(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color of the borders
        ///
        /// @return Border color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBorderColor() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the borders in the hover state (mouse on button, but not pressed)
        ///
        /// @param color  New border color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBorderColorHover(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color of the borders in the hover state (mouse on button, but not pressed)
        ///
        /// @return Border color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBorderColorHover() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the borders in the down state (mouse on button and left mouse button being held down)
        ///
        /// @param color  New border color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBorderColorDown(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color of the borders in the down state (mouse on button and left mouse button being held down)
        ///
        /// @return Border color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBorderColorDown() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the borders that is used when the button is disabled
        ///
        /// @param color  New border color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBorderColorDisabled(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color of the borders that is used when the button is disabled
        ///
        /// @return Border color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBorderColorDisabled() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Change the image that is displayed
        ///
        /// @param texture  The new texture
        ///
        /// When this image is set, the background color property will be ignored.
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTexture(const Texture& texture);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the image that is displayed
        ///
        /// @return texture of the button
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Texture& getTexture() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the image that is displayed when the mouse is located on top of the button
        ///
        /// @param texture  The new hover texture
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextureHover(const Texture& texture);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the image that is displayed when the mouse is located on top of the button
        ///
        /// @return hover texture
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Texture& getTextureHover() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the image that is displayed when the mouse is held down on top of the button
        ///
        /// @param texture  The new down texture
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextureDown(const Texture& texture);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the image that is displayed when the mouse is held down on top of the button
        ///
        /// @return down texture
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Texture& getTextureDown() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the image that is displayed when the button is disabled
        ///
        /// @param texture  The new disabled texture
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextureDisabled(const Texture& texture);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the image that is displayed when the button is disabled
        ///
        /// @return disabled texture
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Texture& getTextureDisabled() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Change the image that is drawn on top of the button image when the button is focused
        ///
        /// @param texture  The new focus texture
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextureFocused(const Texture& texture);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the image that is drawn on top of the button image when the button is focused
        ///
        /// @return focused texture
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Texture& getTextureFocused() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the text style
        ///
        /// @param style  New text style
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextStyle(TextStyle style);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns text style
        ///
        /// @return Style of the text
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TextStyle getTextStyle() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the text style in the hover state (mouse on button, but not pressed)
        ///
        /// @param style  New text style
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextStyleHover(TextStyle style);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns text style in the hover state (mouse on button, but not pressed)
        ///
        /// @return Style of the text
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TextStyle getTextStyleHover() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the text style in the down state (mouse on button and left mouse button being held down)
        ///
        /// @param style  New text style
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextStyleDown(TextStyle style);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns text style in the down state (mouse on button and left mouse button being held down)
        ///
        /// @return Style of the text
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TextStyle getTextStyleDown() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the text style that is used when the button is disabled
        ///
        /// @param style  New text style
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextStyleDisabled(TextStyle style);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns text style used when the button is disabled
        ///
        /// @return Style of the text
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TextStyle getTextStyleDisabled() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    };

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // TGUI_BUTTON_RENDERER_HPP