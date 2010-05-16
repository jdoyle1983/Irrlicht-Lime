#pragma once

#include "stdafx.h"

using namespace irr;
using namespace System;
using namespace IrrlichtLime::Core;

namespace IrrlichtLime {
namespace GUI {

public ref class GUIElement
{
public:

	GUIElement^ GetElementFromID(Int32 id, bool searchchildren);
	GUIElement^ GetElementFromID(Int32 id);
	GUIElement^ GetElementFromPoint(Vector2Di^ point);
	bool IsMyChild(GUIElement^ child);
	bool IsPointInside(Vector2Di^ point);

	property Recti^ AbsoluteClippingRect { Recti^ get(); }
	property Recti^ AbsolutePosition { Recti^ get(); }
	property bool Enabled { bool get(); void set(bool value); }
	property Int32 ID { Int32 get(); void set(Int32 value); }
	property bool NotClipped { bool get(); void set(bool value); }
	property Recti^ RelativePosition { Recti^ get(); void set(Recti^ value); }
	property Int32 TabOrder { Int32 get(); void set(Int32 value); }
	property bool TabStop { bool get(); void set(bool value); }
	property String^ Text { String^ get(); void set(String^ value); }
	property String^ ToolTipText { String^ get(); void set(String^ value); }
	property GUIElementType Type { GUIElementType get(); }
	property bool Visible { bool get(); void set(bool value); }

	virtual String^ ToString() override;

internal:

	GUIElement(gui::IGUIElement* guiElement);

	gui::IGUIElement* m_GUIElement;
};

} // end namespace GUI
} // end namespace IrrlichtLime