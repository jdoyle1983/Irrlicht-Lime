#pragma once

#include "stdafx.h"

using namespace irr;
using namespace System;

namespace IrrlichtLime {
namespace Video {

public ref class Material : Lime::NativeValue<video::SMaterial>
{
public:

	Material();

	bool GetFlag(MaterialFlag flag);
	Texture^ GetTexture(int level);
	Matrix4f^ GetTextureMatrix(int level);
	void SetFlag(MaterialFlag flag, bool value);
	void SetTexture(int level, Texture^ tex);
	void SetTextureMatrix(int level, Matrix4f^ mat);

	property Video::MaterialType MaterialType { Video::MaterialType get(); void set(Video::MaterialType value); }
	property Coloru^ AmbientColor { Coloru^ get(); void set(Coloru^ value); }
	property Coloru^ DiffuseColor { Coloru^ get(); void set(Coloru^ value); }
	property Coloru^ EmissiveColor { Coloru^ get(); void set(Coloru^ value); }
	property Coloru^ SpecularColor { Coloru^ get(); void set(Coloru^ value); }
	property float Shininess { float get(); void set(float value); }
	property float MaterialTypeParam { float get(); void set(float value); }
	property float MaterialTypeParam2 { float get(); void set(float value); }
	property float Thickness { float get(); void set(float value); }
	property ZBufferCompFunc ZBuffer { ZBufferCompFunc get(); void set(ZBufferCompFunc value); }
	property AntiAliasingMode AntiAliasing { AntiAliasingMode get(); void set(AntiAliasingMode value); }
	property ColorPlane ColorMask { ColorPlane get(); void set(ColorPlane value); }
	property Video::ColorMaterial ColorMaterial { Video::ColorMaterial get(); void set(Video::ColorMaterial value); }
	property bool Wireframe { bool get(); void set(bool value); }
	property bool PointCloud { bool get(); void set(bool value); }
	property bool GouraudShading { bool get(); void set(bool value); }
	property bool Lighting { bool get(); void set(bool value); }
	property bool ZWrite { bool get(); void set(bool value); }
	property bool BackfaceCulling { bool get(); void set(bool value); }
	property bool FrontfaceCulling { bool get(); void set(bool value); }
	property bool Fog { bool get(); void set(bool value); }
	property bool NormalizeNormals { bool get(); void set(bool value); }
	property bool Mipmaps { bool get(); void set(bool value); }
	property bool Transparent { bool get(); }

	virtual String^ ToString() override;

internal:

	Material(const video::SMaterial& value);
};

} // end namespace Video
} // end namespace IrrlichtLime