#pragma once

#include "stdafx.h"

using namespace irr;
using namespace System;
using namespace IrrlichtLime::Core;

namespace IrrlichtLime {
namespace Video { ref class Texture; }
namespace Scene {

ref class SceneManager;

public ref class SceneNode
{
public:

	void AddChild(SceneNode^ child);
	void Remove();
	void RemoveAll();
	bool RemoveChild(SceneNode^ child);
	void Render();
	void SetMaterialFlag(Video::MaterialFlag flag, bool value);
	void SetMaterialTexture(UInt32 textureLayer, Video::Texture^ texture);
	void UpdateAbsolutePosition();

	property Vector3Df^ AbsolutePosition { Vector3Df^ get(); }
	property UInt32 AutomaticCulling { UInt32 get(); void set(UInt32 value); }
	property bool DebugObject { bool get(); void set(bool value); }
	property Int32 ID { Int32 get(); void set(Int32 value); }
	property String^ Name { String^ get(); void set(String^ value); }
	property SceneNode^ Parent { SceneNode^ get(); void set(SceneNode^ value); }
	property Vector3Df^ Position { Vector3Df^ get(); void set(Vector3Df^ value); }
	property Vector3Df^ Rotation { Vector3Df^ get(); void set(Vector3Df^ value); }
	property Vector3Df^ Scale { Vector3Df^ get(); void set(Vector3Df^ value); }
	property Scene::SceneManager^ SceneManager { Scene::SceneManager^ get(); }
	property bool TrulyVisible { bool get(); }
	property SceneNodeType Type { SceneNodeType get(); }
	property bool Visible { bool get(); void set(bool value); }

	virtual String^ ToString() override;

internal:

	SceneNode(scene::ISceneNode* sceneNode);

	scene::ISceneNode* m_SceneNode;
};

} // end namespace Scene
} // end namespace IrrlichtLime