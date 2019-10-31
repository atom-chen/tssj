﻿Shader "Custom/unit_light" {
	Properties {
		_MainTex ("Base (RGB)", 2D) = "white" {}
		_LightTex ("Light (RGB)", 2D) = "light" {}
		_BackColor ("Back Color", Color) = (1.0,1.0,1.0,0.0)
		_alpha ("alpha", Float) = 1.0
		_while ("while", Float) = 0
		_light ("light", Float) = 0.5
		_back ("back", Float) = 0
		_level ("level", Float) = 1.0
		_uv_x ("uv_x", Float) = 1.0
		_uv_y ("uv_y", Float) = 1.0
		_bh ("hb", Float) = 0.0
	}
    SubShader {

		Tags { "Queue"="Transparent-2" }
		Blend SrcAlpha OneMinusSrcAlpha
		
		Lighting On
		CGPROGRAM
		#pragma surface surf Lambert

		sampler2D _MainTex;
		sampler2D _LightTex;
		sampler2D _LightAlpha;

		struct Input {
			float2 uv_MainTex;
			float2 uv_LightTex;
			float3 viewDir;
		};
			
		uniform float _alpha;
		uniform float _while;
		uniform float _light;
		uniform float _back;
		uniform float _level;
		uniform float4 _BackColor;
		uniform float _uv_x;
		uniform float _uv_y;
		uniform float _bh;
		
		void surf (Input IN, inout SurfaceOutput o) 
		{
			half4 c = tex2D (_MainTex, IN.uv_MainTex);
			o.Albedo = c.rgb;

			if(_light > 0.0)
			{
				float2 uv = IN.uv_MainTex;
				
				uv.x += _Time * _uv_x;
				uv.y += _Time * _uv_y;			
				
				half4 l = tex2D (_LightTex, uv);
							
				//o.Albedo += l.rgb * la.r * _light;
				//o.Specular += l.rgb * la.r * _light;
				o.Emission += l.rgb * _light *_level;
			}

			o.Alpha = c.a;
			o.Alpha *= _alpha;

			if(_bh > 1.0)
			{
				o.Emission = c.r * 0.3  + c.g * 0.59 + c.b* 0.11;
				o.Albedo =  float4(0,0,0,0);
				o.Specular =  float4(0,0,0,0);			
				_back = 0.0;
			}
			
			if(_back > 0.0)
			{
				half rim = 1.0 - saturate(dot (normalize(IN.viewDir), o.Normal));
				o.Emission += _BackColor.rgb * pow (rim, _back)  * _level;
			}

			if (o.Alpha < 0.5 * _alpha)
            {
               discard;
            }
            
			if(_while > 0.0)
			{
				o.Emission += float4(1.0, 1.0, 1.0, 1.0) * _while;
			}            
		}
		ENDCG
    }
    Fallback "Diffuse"    
}
