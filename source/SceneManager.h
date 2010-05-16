#pragma once

#include "stdafx.h"

using namespace irr;
using namespace System;
using namespace IrrlichtLime::Core;

namespace IrrlichtLime {
namespace Scene {

ref class AnimatedMesh;
ref class AnimatedMeshSceneNode;
ref class CameraSceneNode;
ref class SceneNode;

public ref class SceneManager
{
public:

	AnimatedMeshSceneNode^ AddAnimatedMeshSceneNode(AnimatedMesh^ mesh, SceneNode^ parent, Int32 id, Vector3Df^ position, Vector3Df^ rotation, Vector3Df^ scale, bool alsoAddIfMeshPointerZero);
	AnimatedMeshSceneNode^ AddAnimatedMeshSceneNode(AnimatedMesh^ mesh, SceneNode^ parent, Int32 id, Vector3Df^ position, Vector3Df^ rotation, Vector3Df^ scale);
	AnimatedMeshSceneNode^ AddAnimatedMeshSceneNode(AnimatedMesh^ mesh, SceneNode^ parent, Int32 id, Vector3Df^ position, Vector3Df^ rotation);
	AnimatedMeshSceneNode^ AddAnimatedMeshSceneNode(AnimatedMesh^ mesh, SceneNode^ parent, Int32 id, Vector3Df^ position);
	AnimatedMeshSceneNode^ AddAnimatedMeshSceneNode(AnimatedMesh^ mesh, SceneNode^ parent, Int32 id);
	AnimatedMeshSceneNode^ AddAnimatedMeshSceneNode(AnimatedMesh^ mesh, SceneNode^ parent);
	AnimatedMeshSceneNode^ AddAnimatedMeshSceneNode(AnimatedMesh^ mesh);

	CameraSceneNode^ AddCameraSceneNode(SceneNode^ parent, Vector3Df^ position, Vector3Df^ lookat, Int32 id, bool makeActive);
	CameraSceneNode^ AddCameraSceneNode(SceneNode^ parent, Vector3Df^ position, Vector3Df^ lookat, Int32 id);
	CameraSceneNode^ AddCameraSceneNode(SceneNode^ parent, Vector3Df^ position, Vector3Df^ lookat);
	CameraSceneNode^ AddCameraSceneNode(SceneNode^ parent, Vector3Df^ position);
	CameraSceneNode^ AddCameraSceneNode(SceneNode^ parent);
	CameraSceneNode^ AddCameraSceneNode();

	AnimatedMesh^ GetMesh(String^ filename);

	property SceneNode^ RootSceneNode { SceneNode^ get(); }

internal:

	SceneManager(scene::ISceneManager* sceneManager);

	scene::ISceneManager* m_SceneManager;
};

} // end namespace Scene
} // end namespace IrrlichtLime