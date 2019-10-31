﻿Shader "Custom/ui_effect_add" {
Properties {
    _TintColor ("Tint Color", Color) = (0.5,0.5,0.5,0.5)
    _MainTex ("Particle Texture", 2D) = "white" {}
    _InvFade ("Soft Particles Factor", Range(0.01,3.0)) = 1.0
}
 
Category {
		Tags
		{
			"Queue" = "Overlay"
			"IgnoreProjector" = "True"
			"RenderType" = "Transparent"
		}
    Blend One One
    AlphaTest Off
    ColorMask RGB
    Cull Off Lighting Off ZWrite Off Fog { Color (0,0,0,0) }
			
    BindChannels {
       Bind "Color", color
       Bind "Vertex", vertex
       Bind "TexCoord", texcoord
    }
    // ---- Dual texture cards
    SubShader {
       Pass {
         SetTexture [_MainTex] {
          constantColor [_TintColor]
          combine constant * primary
         }
         SetTexture [_MainTex] {
          combine texture * previous
         }
       }
    }
 
}
}