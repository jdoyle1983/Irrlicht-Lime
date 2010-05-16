﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using IrrlichtLime;
using IrrlichtLime.Core;
using IrrlichtLime.Video;
using IrrlichtLime.Scene;
using IrrlichtLime.GUI;

namespace _01.HelloWorld
{
	class Program
	{
		static void Main(string[] args)
		{
			IrrlichtDevice device = IrrlichtDevice.CreateDevice(
				DriverType.Software, new Dimension2Du(640, 480), 16, false, false, false);

			device.WindowCaption = "Hello World! - Irrlicht Engine Demo";
			
			VideoDriver driver = device.VideoDriver;
			SceneManager scene = device.SceneManager;
			GUIEnvironment gui = device.GUIEnvironment;

			gui.AddStaticText("Hello World! This is the Irrlicht Software renderer!",
				new Recti(10, 10, 260, 22), true);

			AnimatedMesh mesh = scene.GetMesh("../media/sydney.md2");
			AnimatedMeshSceneNode node = scene.AddAnimatedMeshSceneNode(mesh);

			if (node != null)
			{
				node.SetMaterialFlag(MaterialFlag.Lighting, false);
				node.SetMD2Animation(AnimationTypeMD2.Stand);
				node.SetMaterialTexture(0, driver.GetTexture("../media/sydney.bmp"));
			}

			scene.AddCameraSceneNode(null, new Vector3Df(0, 30, -40), new Vector3Df(0, 5, 0));

			device.Drop();
		}
	}
}