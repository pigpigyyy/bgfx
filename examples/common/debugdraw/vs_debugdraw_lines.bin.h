static const uint8_t vs_debugdraw_lines_glsl[325] =
{
	0x56, 0x53, 0x48, 0x05, 0xa4, 0x8b, 0xef, 0x49, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH....I...u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, // elViewProj......
	0x20, 0x01, 0x00, 0x00, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, //  ...attribute hi
	0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // ghp vec4 a_color
	0x30, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, // 0;.attribute hig
	0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, // hp vec3 a_positi
	0x6f, 0x6e, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, // on;.varying high
	0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, // p vec4 v_color0;
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x6d, // .uniform highp m
	0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, // at4 u_modelViewP
	0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, // roj;.void main (
	0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, // ).{.  highp vec4
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, //  tmpvar_1;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, // var_1.w = 1.0;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, //  tmpvar_1.xyz = 
	0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, // a_position;.  gl
	0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x6d, // _Position = (u_m
	0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, // odelViewProj * t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x63, 0x6f, // mpvar_1);.  v_co
	0x6c, 0x6f, 0x72, 0x30, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, // lor0 = a_color0;
	0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                                   // .}...
};
static const uint8_t vs_debugdraw_lines_spv[2697] =
{
	0x56, 0x53, 0x48, 0x05, 0xa4, 0x8b, 0xef, 0x49, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH....I...u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, // elViewProj......
	0x64, 0x0a, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x06, 0x00, 0x08, 0x00, // d.....#.........
	0x54, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, // Ta..............
	0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, // ........GLSL.std
	0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // .450............
	0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, 0x00, // ................
	0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x89, 0x14, 0x00, 0x00, 0xa6, 0x14, 0x00, 0x00, // main............
	0x95, 0x15, 0x00, 0x00, 0x76, 0x13, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, // ....v...........
	0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, // ............main
	0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x38, 0x04, 0x00, 0x00, 0x4f, 0x75, 0x74, 0x70, // ........8...Outp
	0x75, 0x74, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x38, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ut......8.......
	0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x06, 0x00, 0x06, 0x00, // gl_Position.....
	0x38, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, // 8.......v_color0
	0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x0e, 0x0c, 0x00, 0x00, 0x40, 0x6d, 0x61, 0x69, // ............@mai
	0x6e, 0x28, 0x76, 0x66, 0x34, 0x3b, 0x76, 0x66, 0x33, 0x3b, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, // n(vf4;vf3;......
	0xf5, 0x48, 0x00, 0x00, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, // .H..a_color0....
	0x05, 0x00, 0x05, 0x00, 0x2c, 0x47, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, // ....,G..a_positi
	0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x5f, 0x76, 0x61, 0x72, // on.........._var
	0x79, 0x69, 0x6e, 0x67, 0x5f, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, // ying_...........
	0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x99, 0x02, 0x00, 0x00, // $Global.........
	0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x00, 0x00, // ....u_viewRect..
	0x06, 0x00, 0x06, 0x00, 0x99, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, // ............u_vi
	0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, // ewTexel.........
	0x02, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, // ....u_view......
	0x99, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, // ........u_invVie
	0x77, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // w...............
	0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x99, 0x02, 0x00, 0x00, // u_proj..........
	0x05, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, // ....u_invProj...
	0x06, 0x00, 0x06, 0x00, 0x99, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, // ............u_vi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, 0x99, 0x02, 0x00, 0x00, // ewProj..........
	0x07, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, // ....u_invViewPro
	0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, // j...............
	0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x99, 0x02, 0x00, 0x00, // u_model.........
	0x09, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x00, // ....u_modelView.
	0x06, 0x00, 0x07, 0x00, 0x99, 0x02, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, // ............u_mo
	0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x06, 0x00, 0x06, 0x00, // delViewProj.....
	0x99, 0x02, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, // ........u_alphaR
	0x65, 0x66, 0x34, 0x00, 0x05, 0x00, 0x03, 0x00, 0x42, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ef4.....B.......
	0x05, 0x00, 0x05, 0x00, 0xcb, 0x41, 0x00, 0x00, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, // .....A..a_color0
	0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x89, 0x14, 0x00, 0x00, 0x61, 0x5f, 0x63, 0x6f, // ............a_co
	0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x2c, 0x3f, 0x00, 0x00, // lor0........,?..
	0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, // a_position......
	0xa6, 0x14, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, // ....a_position..
	0x05, 0x00, 0x05, 0x00, 0x08, 0x10, 0x00, 0x00, 0x66, 0x6c, 0x61, 0x74, 0x74, 0x65, 0x6e, 0x54, // ........flattenT
	0x65, 0x6d, 0x70, 0x00, 0x05, 0x00, 0x04, 0x00, 0xab, 0x55, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, // emp......U..para
	0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, // m...........para
	0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x0a, 0x00, 0x95, 0x15, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, // m...........@ent
	0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x67, 0x6c, // ryPointOutput.gl
	0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x05, 0x00, 0x09, 0x00, // _Position.......
	0x76, 0x13, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, // v...@entryPointO
	0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, // utput.v_color0..
	0x47, 0x00, 0x04, 0x00, 0x37, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, // G...7.......@...
	0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, // H...........#...
	0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ....H...........
	0x23, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, // #.......H.......
	0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, // ........H.......
	0x02, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // ....#... ...H...
	0x99, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // ................
	0x48, 0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // H...............
	0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, // H...........#...
	0x60, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // `...H...........
	0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, // ........H.......
	0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, // ........H.......
	0x04, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // ....#.......H...
	0x99, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // ................
	0x48, 0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // H...............
	0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, // H...........#...
	0xe0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, // ....H...........
	0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, // ........H.......
	0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, // ........H.......
	0x06, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // ....#... ...H...
	0x99, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // ................
	0x48, 0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // H...............
	0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, // H...........#...
	0x60, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // `...H...........
	0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, // ........H.......
	0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, // ........H.......
	0x08, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // ....#.......H...
	0x99, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // ................
	0x48, 0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // H...............
	0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, // H...........#...
	0xa0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, // ....H...........
	0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x99, 0x02, 0x00, 0x00, // ........H.......
	0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, // ........H.......
	0x0a, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // ....#.......H...
	0x99, 0x02, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // ................
	0x48, 0x00, 0x05, 0x00, 0x99, 0x02, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, // H...........#...
	0x20, 0x0a, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x99, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, //  ...G...........
	0x47, 0x00, 0x04, 0x00, 0x42, 0x13, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // G...B...".......
	0x47, 0x00, 0x04, 0x00, 0x89, 0x14, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // G...............
	0x47, 0x00, 0x04, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // G...............
	0x47, 0x00, 0x04, 0x00, 0x95, 0x15, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // G...............
	0x47, 0x00, 0x04, 0x00, 0x76, 0x13, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // G...v...........
	0x13, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x02, 0x05, 0x00, 0x00, // ........!.......
	0x08, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // ............ ...
	0x17, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // ................
	0x20, 0x00, 0x04, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, //  ...............
	0x17, 0x00, 0x04, 0x00, 0x18, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ................
	0x20, 0x00, 0x04, 0x00, 0x95, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, //  ...............
	0x1e, 0x00, 0x04, 0x00, 0x38, 0x04, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, // ....8...........
	0x21, 0x00, 0x05, 0x00, 0xc6, 0x07, 0x00, 0x00, 0x38, 0x04, 0x00, 0x00, 0x9a, 0x02, 0x00, 0x00, // !.......8.......
	0x95, 0x02, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0xb5, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // .... ...........
	0x38, 0x04, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // 8........... ...
	0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, // ....+...........
	0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, // ....+...........
	0x00, 0x00, 0x80, 0x3f, 0x2b, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, // ...?+...........
	0x00, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x07, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x88, 0x05, 0x00, 0x00, // ....,...........
	0x8a, 0x00, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, // ................
	0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // +...............
	0x18, 0x00, 0x04, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // ....e...........
	0x15, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........ .......
	0x2b, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // +.......j... ...
	0x1c, 0x00, 0x04, 0x00, 0x37, 0x02, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, // ....7...e...j...
	0x1e, 0x00, 0x0e, 0x00, 0x99, 0x02, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, // ................
	0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, // e...e...e...e...
	0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x37, 0x02, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, // e...e...7...e...
	0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x16, 0x05, 0x00, 0x00, // e....... .......
	0x02, 0x00, 0x00, 0x00, 0x99, 0x02, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x16, 0x05, 0x00, 0x00, // ........;.......
	0x42, 0x13, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, // B.......+.......
	0x29, 0x0a, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0xe2, 0x02, 0x00, 0x00, // )....... .......
	0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, // ....e... .......
	0x01, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, // ........;.......
	0x89, 0x14, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x96, 0x02, 0x00, 0x00, // ........ .......
	0x01, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x96, 0x02, 0x00, 0x00, // ........;.......
	0xa6, 0x14, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, // ........ .......
	0x03, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, // ........;.......
	0x95, 0x15, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, // ........;.......
	0x76, 0x13, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x08, 0x00, 0x00, 0x00, // v.......6.......
	0x1f, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, // ................
	0x53, 0x61, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0xb5, 0x06, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, // Sa..;...........
	0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9a, 0x02, 0x00, 0x00, 0xab, 0x55, 0x00, 0x00, // ....;........U..
	0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x95, 0x02, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, // ....;...........
	0x07, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xcb, 0x41, 0x00, 0x00, // ....=........A..
	0x89, 0x14, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x18, 0x00, 0x00, 0x00, 0x2c, 0x3f, 0x00, 0x00, // ....=.......,?..
	0xa6, 0x14, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xab, 0x55, 0x00, 0x00, 0xcb, 0x41, 0x00, 0x00, // ....>....U...A..
	0x3e, 0x00, 0x03, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x2c, 0x3f, 0x00, 0x00, 0x39, 0x00, 0x06, 0x00, // >.......,?..9...
	0x38, 0x04, 0x00, 0x00, 0x49, 0x26, 0x00, 0x00, 0x0e, 0x0c, 0x00, 0x00, 0xab, 0x55, 0x00, 0x00, // 8...I&.......U..
	0x9a, 0x16, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x08, 0x10, 0x00, 0x00, 0x49, 0x26, 0x00, 0x00, // ....>.......I&..
	0x41, 0x00, 0x05, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x54, 0x34, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, // A.......T4......
	0x0b, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, // ....=...........
	0x54, 0x34, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x95, 0x15, 0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, // T4..>...........
	0x41, 0x00, 0x05, 0x00, 0x9a, 0x02, 0x00, 0x00, 0xee, 0x40, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, // A........@......
	0x0e, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x13, 0x2d, 0x00, 0x00, // ....=........-..
	0xee, 0x40, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x76, 0x13, 0x00, 0x00, 0x13, 0x2d, 0x00, 0x00, // .@..>...v....-..
	0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0x38, 0x04, 0x00, 0x00, // ....8...6...8...
	0x0e, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc6, 0x07, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, // ............7...
	0x9a, 0x02, 0x00, 0x00, 0xf5, 0x48, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x95, 0x02, 0x00, 0x00, // .....H..7.......
	0x2c, 0x47, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x51, 0x1d, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // ,G......Q...;...
	0xb5, 0x06, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, // ............A...
	0x9a, 0x02, 0x00, 0x00, 0x50, 0x24, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, // ....P$..........
	0x3e, 0x00, 0x03, 0x00, 0x50, 0x24, 0x00, 0x00, 0x88, 0x05, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, // >...P$......=...
	0x18, 0x00, 0x00, 0x00, 0x27, 0x28, 0x00, 0x00, 0x2c, 0x47, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, // ....'(..,G..Q...
	0x0d, 0x00, 0x00, 0x00, 0xac, 0x4a, 0x00, 0x00, 0x27, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....J..'(......
	0x51, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x7c, 0x57, 0x00, 0x00, 0x27, 0x28, 0x00, 0x00, // Q.......|W..'(..
	0x01, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x1d, 0x19, 0x00, 0x00, // ....Q...........
	0x27, 0x28, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x1d, 0x00, 0x00, 0x00, // '(......P.......
	0xf5, 0x42, 0x00, 0x00, 0xac, 0x4a, 0x00, 0x00, 0x7c, 0x57, 0x00, 0x00, 0x1d, 0x19, 0x00, 0x00, // .B...J..|W......
	0x8a, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0xe2, 0x02, 0x00, 0x00, 0x61, 0x23, 0x00, 0x00, // ....A.......a#..
	0x42, 0x13, 0x00, 0x00, 0x29, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x65, 0x00, 0x00, 0x00, // B...)...=...e...
	0x2b, 0x34, 0x00, 0x00, 0x61, 0x23, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, // +4..a#..........
	0xd7, 0x32, 0x00, 0x00, 0xf5, 0x42, 0x00, 0x00, 0x2b, 0x34, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, // .2...B..+4..A...
	0x9a, 0x02, 0x00, 0x00, 0x97, 0x2f, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, // ...../..........
	0x3e, 0x00, 0x03, 0x00, 0x97, 0x2f, 0x00, 0x00, 0xd7, 0x32, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, // >..../...2..=...
	0x1d, 0x00, 0x00, 0x00, 0x8e, 0x31, 0x00, 0x00, 0xf5, 0x48, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, // .....1...H..A...
	0x9a, 0x02, 0x00, 0x00, 0x9e, 0x4c, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, // .....L..........
	0x3e, 0x00, 0x03, 0x00, 0x9e, 0x4c, 0x00, 0x00, 0x8e, 0x31, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, // >....L...1..=...
	0x38, 0x04, 0x00, 0x00, 0x30, 0x19, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0xfe, 0x00, 0x02, 0x00, // 8...0...........
	0x30, 0x19, 0x00, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00,                                           // 0...8....
};
static const uint8_t vs_debugdraw_lines_dx9[313] =
{
	0x56, 0x53, 0x48, 0x05, 0xa4, 0x8b, 0xef, 0x49, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH....I...u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, // elViewProj......
	0x14, 0x01, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0xfe, 0xff, 0x21, 0x00, 0x43, 0x54, 0x41, 0x42, // ..........!.CTAB
	0x1c, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x01, 0x00, 0x00, 0x00, // ....W...........
	0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, // ........P...0...
	0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........@.......
	0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, // u_modelViewProj.
	0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x76, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, // vs_3_0.Microsoft
	0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, //  (R) HLSL Shader
	0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, //  Compiler 10.1..
	0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, // ................
	0x00, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0xe0, // ................
	0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x55, 0x90, // ..............U.
	0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x90, // ................
	0x00, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x02, 0x00, 0xe4, 0xa0, // ................
	0x01, 0x00, 0xaa, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0xe0, // ................
	0x00, 0x00, 0xe4, 0x80, 0x03, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x01, 0x00, 0x0f, 0xe0, // ................
	0x00, 0x00, 0xe4, 0x90, 0xff, 0xff, 0x00, 0x00, 0x00,                                           // .........
};
static const uint8_t vs_debugdraw_lines_dx11[512] =
{
	0x56, 0x53, 0x48, 0x05, 0xa4, 0x8b, 0xef, 0x49, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH....I...u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, // elViewProj......
	0xd4, 0x01, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x32, 0x9b, 0xdd, 0xb5, 0xa9, 0xb7, 0x22, 0xf0, // ....DXBC2.....".
	0xcf, 0x5e, 0x34, 0x2c, 0x72, 0xf0, 0x87, 0x00, 0x01, 0x00, 0x00, 0x00, 0xd4, 0x01, 0x00, 0x00, // .^4,r...........
	0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x00, // ....,...|.......
	0x49, 0x53, 0x47, 0x4e, 0x48, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, // ISGNH...........
	0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // 8...............
	0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........>.......
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, // ................
	0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0xab, // COLOR.POSITION..
	0x4f, 0x53, 0x47, 0x4e, 0x4c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, // OSGNL...........
	0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // 8...............
	0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........D.......
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, // ................
	0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, // SV_POSITION.COLO
	0x52, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0xfc, 0x00, 0x00, 0x00, 0x40, 0x00, 0x01, 0x00, // R...SHDR....@...
	0x3f, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // ?...Y...F. .....
	0x04, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ...._...........
	0x5f, 0x00, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x04, // _...r.......g...
	0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, // . ..........e...
	0xf2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, // . ......h.......
	0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, // 8...........V...
	0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ....F. .........
	0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, // 2...........F. .
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, // F.......2.......
	0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ....F. .........
	0xa6, 0x1a, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ........F.......
	0x00, 0x00, 0x00, 0x08, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, // ..... ......F...
	0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ....F. .........
	0x36, 0x00, 0x00, 0x05, 0xf2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x1e, 0x10, 0x00, // 6.... ......F...
	0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x02, 0x05, 0x00, 0x01, 0x00, 0x40, 0x00, // ....>.........@.
};
static const uint8_t vs_debugdraw_lines_mtl[673] =
{
	0x56, 0x53, 0x48, 0x05, 0xa4, 0x8b, 0xef, 0x49, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH....I...u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, // elViewProj......
	0x7c, 0x02, 0x00, 0x00, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, // |...using namesp
	0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, // ace metal;.struc
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, // t xlatMtlShaderI
	0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, // nput {.  float4 
	0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, // a_color0 [[attri
	0x62, 0x75, 0x74, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, // bute(0)]];.  flo
	0x61, 0x74, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, // at3 a_position [
	0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x3b, // [attribute(1)]];
	0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // .};.struct xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, // tlShaderOutput {
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, // .  float4 gl_Pos
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, // ition [[position
	0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x76, 0x5f, 0x63, // ]];.  float4 v_c
	0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, // olor0;.};.struct
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, //  xlatMtlShaderUn
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, // iform {.  float4
	0x78, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, // x4 u_modelViewPr
	0x6f, 0x6a, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x76, 0x65, 0x72, 0x74, 0x65, 0x78, 0x20, 0x78, 0x6c, // oj;.};.vertex xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, // atMtlShaderOutpu
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, // t xlatMtlMain (x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, // latMtlShaderInpu
	0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, // t _mtl_i [[stage
	0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, // _in]], constant 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, // xlatMtlShaderUni
	0x66, 0x6f, 0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, // form& _mtl_u [[b
	0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, // uffer(0)]]).{.  
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, // xlatMtlShaderOut
	0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, // put _mtl_o;.  fl
	0x6f, 0x61, 0x74, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, // oat4 tmpvar_1 = 
	0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, // 0;.  tmpvar_1.w 
	0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // = 1.0;.  tmpvar_
	0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, // 1.xyz = _mtl_i.a
	0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, // _position;.  _mt
	0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, // l_o.gl_Position 
	0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, // = (_mtl_u.u_mode
	0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, // lViewProj * tmpv
	0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, // ar_1);.  _mtl_o.
	0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, // v_color0 = _mtl_
	0x69, 0x2e, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, // i.a_color0;.  re
	0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, // turn _mtl_o;.}..
	0x00,                                                                                           // .
};
extern const uint8_t* vs_debugdraw_lines_pssl;
extern const uint32_t vs_debugdraw_lines_pssl_size;
