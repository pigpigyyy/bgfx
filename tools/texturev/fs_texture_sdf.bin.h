static const uint8_t fs_texture_sdf_glsl[575] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x08, 0x75, // FSH............u
	0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, 0x5f, // _params.......s_
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0c, 0x02, // texColor........
	0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, // ..varying vec3 v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, // _texcoord0;.unif
	0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, // orm vec4 u_param
	0x73, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, // s;.uniform sampl
	0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, // er2D s_texColor;
	0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, // .void main ().{.
	0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, //   vec4 tmpvar_1;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x74, 0x65, // .  tmpvar_1 = te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x4c, 0x6f, 0x64, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, // xture2DLod (s_te
	0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // xColor, v_texcoo
	0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x2c, 0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, // rd0.xy, u_params
	0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, // .x);.  float tmp
	0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // var_2;.  tmpvar_
	0x32, 0x20, 0x3d, 0x20, 0x28, 0x61, 0x62, 0x73, 0x28, 0x64, 0x46, 0x64, 0x78, 0x28, 0x74, 0x6d, // 2 = (abs(dFdx(tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x29, 0x29, 0x20, 0x2b, 0x20, 0x61, 0x62, 0x73, // pvar_1.x)) + abs
	0x28, 0x64, 0x46, 0x64, 0x79, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, // (dFdy(tmpvar_1.x
	0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x65, 0x64, 0x67, // )));.  float edg
	0x65, 0x30, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x33, 0x20, // e0_3;.  edge0_3 
	0x3d, 0x20, 0x28, 0x30, 0x2e, 0x35, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // = (0.5 - tmpvar_
	0x32, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, // 2);.  float tmpv
	0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, // ar_4;.  tmpvar_4
	0x20, 0x3d, 0x20, 0x63, 0x6c, 0x61, 0x6d, 0x70, 0x20, 0x28, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, //  = clamp (((tmpv
	0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x20, 0x2d, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x33, // ar_1.x - edge0_3
	0x29, 0x20, 0x2f, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x30, 0x2e, 0x35, 0x20, 0x2b, // ) / (.    (0.5 +
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x2d, 0x20, //  tmpvar_2).   - 
	0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x33, 0x29, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, // edge0_3)), 0.0, 
	0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, // 1.0);.  gl_FragC
	0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x63, 0x6c, 0x61, 0x6d, // olor = vec4(clam
	0x70, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x2a, 0x20, 0x28, // p ((tmpvar_4 * (
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x2a, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, // tmpvar_4 * .    
	0x28, 0x33, 0x2e, 0x30, 0x20, 0x2d, 0x20, 0x28, 0x32, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x74, 0x6d, // (3.0 - (2.0 * tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x29, 0x2c, 0x20, 0x30, // pvar_4)).  )), 0
	0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,       // .0, 1.0));.}...
};
static const uint8_t fs_texture_sdf_spv[1637] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x75, // FSH............u
	0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x12, 0x01, 0x00, 0x00, 0x01, 0x00, 0x40, 0x06, 0x00, // _params......@..
	0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00, 0xe2, 0x00, 0x00, // ...#............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, // .....GLSL.std.45
	0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // 0...............
	0x00, 0x0f, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, // .............mai
	0x6e, 0x00, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, // n...............
	0x00, 0x10, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, // ................
	0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, // ................
	0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x09, 0x00, 0x00, // .main...........
	0x00, 0x42, 0x67, 0x66, 0x78, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x00, 0x00, // .BgfxSampler2D..
	0x00, 0x06, 0x00, 0x06, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x5f, 0x73, // .............m_s
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x09, 0x00, 0x00, // ampler..........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x6d, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x00, // .....m_texture..
	0x00, 0x05, 0x00, 0x05, 0x00, 0x29, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, // .....)...s_texCo
	0x6c, 0x6f, 0x72, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, // lor......+...s_t
	0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x00, // exColorSampler..
	0x00, 0x05, 0x00, 0x07, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, // .........s_texCo
	0x6c, 0x6f, 0x72, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, // lorTexture......
	0x00, 0x58, 0x00, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, // .X...$Global....
	0x00, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, // .X.......u_param
	0x73, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // s........Z......
	0x00, 0x05, 0x00, 0x05, 0x00, 0x81, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // .........v_color
	0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x85, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x74, // 0............v_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x06, 0x00, 0x90, 0x00, 0x00, // excoord0........
	0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x00, // .bgfx_FragData0.
	0x00, 0x47, 0x00, 0x04, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G......."......
	0x00, 0x47, 0x00, 0x04, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G.......!......
	0x00, 0x48, 0x00, 0x05, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, // .H...X.......#..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x58, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .....G...X......
	0x00, 0x47, 0x00, 0x04, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G...Z..."......
	0x00, 0x47, 0x00, 0x04, 0x00, 0x81, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G..............
	0x00, 0x47, 0x00, 0x04, 0x00, 0x85, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .G..............
	0x00, 0x47, 0x00, 0x04, 0x00, 0x90, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G..............
	0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, // .........!......
	0x00, 0x02, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x02, 0x00, 0x06, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, // ................
	0x00, 0x07, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x19, 0x00, 0x09, 0x00, 0x08, 0x00, 0x00, // ..... ..........
	0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x04, // ................
	0x00, 0x09, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, // ................
	0x00, 0x0b, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, // ................
	0x00, 0x0e, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, // ................
	0x00, 0x20, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // . ........... ..
	0x00, 0x28, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .(...........;..
	0x00, 0x28, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // .(...)....... ..
	0x00, 0x2a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .*...........;..
	0x00, 0x2a, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // .*...+....... ..
	0x00, 0x2d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .-...........;..
	0x00, 0x2d, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, // .-..............
	0x00, 0x31, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, // .1... .......+..
	0x00, 0x31, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x03, // .1...6..........
	0x00, 0x3a, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, // .:.......+......
	0x00, 0x4f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x00, // .O.......,......
	0x00, 0x53, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, // .S...O...O...O..
	0x00, 0x4f, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, // .O...+.......U..
	0x00, 0x00, 0x00, 0x80, 0x3f, 0x2c, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, // ....?,.......V..
	0x00, 0x55, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, // .U...U...U...U..
	0x00, 0x1e, 0x00, 0x03, 0x00, 0x58, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // .....X....... ..
	0x00, 0x59, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .Y.......X...;..
	0x00, 0x59, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, // .Y...Z..........
	0x00, 0x61, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, // .a... .......+..
	0x00, 0x61, 0x00, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // .a...b....... ..
	0x00, 0x63, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, // .c...........+..
	0x00, 0x07, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x20, 0x00, 0x04, // .....l......? ..
	0x00, 0x80, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .............;..
	0x00, 0x80, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // ............. ..
	0x00, 0x84, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // ......... ...;..
	0x00, 0x84, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // ............. ..
	0x00, 0x8f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .............;..
	0x00, 0x8f, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, // .............6..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, // .........=......
	0x00, 0x2c, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, // .,...+...=......
	0x00, 0x2f, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x50, 0x00, 0x05, 0x00, 0x09, 0x00, 0x00, // ./.......P......
	0x00, 0x30, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, // .0...,.../...>..
	0x00, 0x29, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, // .)...0...=... ..
	0x00, 0x86, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, // .........=......
	0x00, 0xb3, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, // .....)...Q......
	0x00, 0xe0, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, // .............Q..
	0x00, 0x08, 0x00, 0x00, 0x00, 0xe1, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x4f, 0x00, 0x07, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xb5, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, // .O..............
	0x00, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, // .............A..
	0x00, 0x63, 0x00, 0x00, 0x00, 0xb6, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, // .c.......Z...6..
	0x00, 0x62, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, // .b...=..........
	0x00, 0xb6, 0x00, 0x00, 0x00, 0x56, 0x00, 0x05, 0x00, 0x3a, 0x00, 0x00, 0x00, 0xd5, 0x00, 0x00, // .....V...:......
	0x00, 0xe1, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x58, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x00, // .........X......
	0x00, 0xd8, 0x00, 0x00, 0x00, 0xd5, 0x00, 0x00, 0x00, 0xb5, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // ................
	0x00, 0xb7, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, // .....Q..........
	0x00, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, // ................
	0x00, 0xbb, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0x83, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, // ................
	0x00, 0xbe, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x81, 0x00, 0x05, // .....l..........
	0x00, 0x07, 0x00, 0x00, 0x00, 0xc1, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, // .........l......
	0x00, 0x0c, 0x00, 0x08, 0x00, 0x07, 0x00, 0x00, 0x00, 0xc3, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x31, 0x00, 0x00, 0x00, 0xbe, 0x00, 0x00, 0x00, 0xc1, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, // .1..............
	0x00, 0x0c, 0x00, 0x08, 0x00, 0x07, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x2b, 0x00, 0x00, 0x00, 0xc3, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, // .+.......O...U..
	0x00, 0x50, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x00, 0x00, 0xc6, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, // .P..............
	0x00, 0xc4, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x08, // ................
	0x00, 0x0e, 0x00, 0x00, 0x00, 0xdd, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, // ................
	0x00, 0x53, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, 0xc6, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, // .S...V.......>..
	0x00, 0x90, 0x00, 0x00, 0x00, 0xdd, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, // .............8..
	0x00, 0x00, 0x00, 0x10, 0x00,                                                                   // .....
};
static const uint8_t fs_texture_sdf_dx9[535] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x08, // _texColor0......
	0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x12, 0x01, 0x00, 0x00, 0x01, 0x00, 0xe4, 0x01, // u_params........
	0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, 0xff, 0x2c, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, // ........,.CTAB..
	0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, // ................
	0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x03, 0x00, // ......|...D.....
	0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, // ......P.......`.
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........l.....
	0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0xab, 0x04, 0x00, // ..s_texColor....
	0x0c, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, // ..............u_
	0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x00, 0xab, 0xab, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, // params..........
	0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, // ..........ps_3_0
	0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, // .Microsoft (R) H
	0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, // LSL Shader Compi
	0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x51, 0x00, 0x00, 0x05, 0x01, 0x00, // ler 10.1..Q.....
	0x0f, 0xa0, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, // .....?.......?..
	0x00, 0x00, 0x51, 0x00, 0x00, 0x05, 0x02, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, // ..Q.............
	0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, // @@..............
	0x00, 0x80, 0x00, 0x00, 0x03, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x90, 0x00, 0x08, // ................
	0x0f, 0xa0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x80, 0x01, 0x00, 0xd0, 0xa0, 0x00, 0x00, // ................
	0xc4, 0x90, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x08, 0x80, 0x00, 0x00, 0x00, 0xa0, 0x5f, 0x00, // .............._.
	0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, 0x08, 0xe4, 0xa0, 0x5b, 0x00, // ..............[.
	0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x80, 0x5c, 0x00, 0x00, 0x02, 0x00, 0x00, // ................
	0x04, 0x80, 0x00, 0x00, 0x00, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, // ................
	0xaa, 0x8b, 0x00, 0x00, 0x55, 0x8b, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x04, 0x80, 0x00, 0x00, // ....U...........
	0x55, 0x80, 0x01, 0x00, 0xaa, 0xa0, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, // U...............
	0x55, 0x81, 0x01, 0x00, 0xaa, 0xa0, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x05, 0x80, 0x00, 0x00, // U...............
	0x55, 0x81, 0x00, 0x00, 0xe4, 0x80, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, // U...............
	0xaa, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x11, 0x80, 0x00, 0x00, 0x55, 0x80, 0x00, 0x00, // ............U...
	0x00, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x80, 0x02, 0x00, // ................
	0x00, 0xa0, 0x02, 0x00, 0x55, 0xa0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, // ....U...........
	0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, // ................
	0x00, 0x80, 0x00, 0x00, 0x55, 0x80, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x1f, 0x80, 0x00, 0x00, // ....U...........
	0x00, 0x80, 0xff, 0xff, 0x00, 0x00, 0x00,                                                       // .......
};
static const uint8_t fs_texture_sdf_dx11[778] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x08, 0x75, // FSH............u
	0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x12, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, 0x5f, // _params.......s_
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0xd4, 0x02, // texColor0.......
	0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x03, 0x0d, 0x91, 0x21, 0x8e, 0x75, 0xa6, 0x21, 0xba, 0xe2, // ..DXBC...!.u.!..
	0x0d, 0xbb, 0xa4, 0xa3, 0xae, 0x51, 0x01, 0x00, 0x00, 0x00, 0xd4, 0x02, 0x00, 0x00, 0x03, 0x00, // .....Q..........
	0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, // ..,...........IS
	0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, // GNl...........P.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x62, 0x00, // ..............b.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x07, 0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, // ......SV_POSITIO
	0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, // N.COLOR.TEXCOORD
	0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, // ..OSGN,.........
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // .. .............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, // ..........SV_TAR
	0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0xf8, 0x01, 0x00, 0x00, 0x40, 0x00, // GET...SHDR....@.
	0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, // ..~...Y...F. ...
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, // ......Z....`....
	0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, // ..X....p......UU
	0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, // ..b...2.......e.
	0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x01, 0x00, // ... ......h.....
	0x00, 0x00, 0x48, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, // ..H...........F.
	0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, // ......F~.......`
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........ .......
	0x00, 0x00, 0x0b, 0x00, 0x00, 0x05, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, // ......".........
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x05, 0x42, 0x00, 0x10, 0x00, 0x00, 0x00, // ..........B.....
	0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x22, 0x00, // ..............".
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x10, 0x80, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, // ......*.........
	0x00, 0x00, 0x1a, 0x00, 0x10, 0x80, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x07, 0x42, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, // ..B.............
	0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x08, 0x22, 0x00, // ...@.....?....".
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........A.....
	0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x08, 0x52, 0x00, // ...@.....?....R.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x05, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, // ......V...A.....
	0x00, 0x00, 0x06, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x0a, 0x22, 0x00, // ..............".
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, // .......@.....?..
	0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x2a, 0x00, 0x10, 0x00, 0x00, 0x00, // .?...?...?*.....
	0x00, 0x00, 0x38, 0x20, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, // ..8 ............
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, // ..............2.
	0x00, 0x09, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, // ..".............
	0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, // ...@.......@....
	0x40, 0x40, 0x38, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, // @@8.............
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, // ..............8.
	0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x0a, 0xf2, 0x20, // ..........3.... 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, // ...............@
	0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, // .....?...?...?..
	0x80, 0x3f, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x10, 0x00,                                     // .?>.......
};
static const uint8_t fs_texture_sdf_mtl[979] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, // FSH.............
	0x00, 0x00, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, // ..using namespac
	0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, // e metal;.struct 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, // xlatMtlShaderInp
	0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x76, 0x5f, // ut {.  float3 v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, // texcoord0;.};.st
	0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, // ruct xlatMtlShad
	0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, // erOutput {.  flo
	0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // at4 gl_FragColor
	0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // ;.};.struct xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // MtlShaderUniform
	0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x70, 0x61, //  {.  float4 u_pa
	0x72, 0x61, 0x6d, 0x73, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, // rams;.};.fragmen
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, // t xlatMtlShaderO
	0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, // utput xlatMtlMai
	0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, // n (xlatMtlShader
	0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, // Input _mtl_i [[s
	0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, // tage_in]], const
	0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, // ant xlatMtlShade
	0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, // rUniform& _mtl_u
	0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x0a, 0x20, //  [[buffer(0)]]. 
	0x20, 0x2c, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x64, 0x3c, 0x66, //  ,   texture2d<f
	0x6c, 0x6f, 0x61, 0x74, 0x3e, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // loat> s_texColor
	0x20, 0x5b, 0x5b, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x2c, //  [[texture(0)]],
	0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, //  sampler _mtlsmp
	0x5f, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x5b, 0x73, 0x61, // _s_texColor [[sa
	0x6d, 0x70, 0x6c, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, // mpler(0)]]).{.  
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, // xlatMtlShaderOut
	0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, // put _mtl_o;.  fl
	0x6f, 0x61, 0x74, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, // oat4 tmpvar_1 = 
	0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, // 0;.  tmpvar_1 = 
	0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, // s_texColor.sampl
	0x65, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, 0x5f, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, // e(_mtlsmp_s_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x29, 0x28, 0x5f, // olor, (float2)(_
	0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // mtl_i.v_texcoord
	0x30, 0x2e, 0x78, 0x79, 0x29, 0x2c, 0x20, 0x6c, 0x65, 0x76, 0x65, 0x6c, 0x28, 0x5f, 0x6d, 0x74, // 0.xy), level(_mt
	0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x78, 0x29, 0x29, // l_u.u_params.x))
	0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ;.  float tmpvar
	0x5f, 0x32, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // _2 = 0;.  tmpvar
	0x5f, 0x32, 0x20, 0x3d, 0x20, 0x28, 0x61, 0x62, 0x73, 0x28, 0x64, 0x66, 0x64, 0x78, 0x28, 0x74, // _2 = (abs(dfdx(t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x29, 0x29, 0x20, 0x2b, 0x20, 0x61, 0x62, // mpvar_1.x)) + ab
	0x73, 0x28, 0x64, 0x66, 0x64, 0x79, 0x28, 0x2d, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // s(dfdy(-tmpvar_1
	0x2e, 0x78, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x65, // .x)));.  float e
	0x64, 0x67, 0x65, 0x30, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x65, 0x64, // dge0_3 = 0;.  ed
	0x67, 0x65, 0x30, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x35, 0x20, 0x2d, 0x20, 0x74, // ge0_3 = (0.5 - t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // mpvar_2);.  floa
	0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, // t tmpvar_4 = 0;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x63, 0x6c, 0x61, //   tmpvar_4 = cla
	0x6d, 0x70, 0x20, 0x28, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, // mp (((tmpvar_1.x
	0x20, 0x2d, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x33, 0x29, 0x20, 0x2f, 0x20, 0x28, 0x0a, //  - edge0_3) / (.
	0x20, 0x20, 0x20, 0x20, 0x28, 0x30, 0x2e, 0x35, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, //     (0.5 + tmpva
	0x72, 0x5f, 0x32, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, // r_2).   - edge0_
	0x33, 0x29, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, // 3)), 0.0, 1.0);.
	0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, //   _mtl_o.gl_Frag
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x63, // Color = float4(c
	0x6c, 0x61, 0x6d, 0x70, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x20, // lamp ((tmpvar_4 
	0x2a, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x2a, 0x20, 0x0a, 0x20, // * (tmpvar_4 * . 
	0x20, 0x20, 0x20, 0x28, 0x33, 0x2e, 0x30, 0x20, 0x2d, 0x20, 0x28, 0x32, 0x2e, 0x30, 0x20, 0x2a, //    (3.0 - (2.0 *
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x29, //  tmpvar_4)).  ))
	0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // , 0.0, 1.0));.  
	0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, // return _mtl_o;.}
	0x0a, 0x0a, 0x00,                                                                               // ...
};
extern const uint8_t* fs_texture_sdf_pssl;
extern const uint32_t fs_texture_sdf_pssl_size;
