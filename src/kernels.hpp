
static const char gpu_render_tile_kernel[] = {0x75,0x69,0x6e,0x74,0x20,0x72,0x61,0x6e,0x64,0x28,0x67,0x6c,0x6f,0x62,0x61,0x6c,0x20,0x75,0x69,0x6e,0x74,0x20,0x2a,0x72,0x61,0x6e,0x64,0x6f,0x6d,0x73,0x29,0x20,0x7b,0x0a,0x20,0x20,0x20,0x20,0x72,0x61,0x6e,0x64,0x6f,0x6d,0x73,0x5b,0x67,0x65,0x74,0x5f,0x67,0x6c,0x6f,0x62,0x61,0x6c,0x5f,0x69,0x64,0x28,0x30,0x29,0x5d,0x20,0x3d,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x28,0x30,0x78,0x34,0x31,0x43,0x36,0x34,0x45,0x36,0x44,0x20,0x2a,0x20,0x72,0x61,0x6e,0x64,0x6f,0x6d,0x73,0x5b,0x67,0x65,0x74,0x5f,0x67,0x6c,0x6f,0x62,0x61,0x6c,0x5f,0x69,0x64,0x28,0x30,0x29,0x5d,0x20,0x2b,0x20,0x30,0x78,0x33,0x30,0x33,0x39,0x29,0x20,0x25,0x20,0x30,0x78,0x38,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x3b,0x0a,0x20,0x20,0x20,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x72,0x61,0x6e,0x64,0x6f,0x6d,0x73,0x5b,0x67,0x65,0x74,0x5f,0x67,0x6c,0x6f,0x62,0x61,0x6c,0x5f,0x69,0x64,0x28,0x30,0x29,0x5d,0x3b,0x0a,0x7d,0x0a,0x66,0x6c,0x6f,0x61,0x74,0x20,0x66,0x72,0x61,0x6e,0x64,0x28,0x67,0x6c,0x6f,0x62,0x61,0x6c,0x20,0x75,0x69,0x6e,0x74,0x20,0x2a,0x72,0x61,0x6e,0x64,0x6f,0x6d,0x73,0x29,0x20,0x7b,0x0a,0x20,0x20,0x20,0x20,0x72,0x61,0x6e,0x64,0x6f,0x6d,0x73,0x5b,0x67,0x65,0x74,0x5f,0x67,0x6c,0x6f,0x62,0x61,0x6c,0x5f,0x69,0x64,0x28,0x30,0x29,0x5d,0x20,0x3d,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x28,0x30,0x78,0x34,0x31,0x43,0x36,0x34,0x45,0x36,0x44,0x20,0x2a,0x20,0x72,0x61,0x6e,0x64,0x6f,0x6d,0x73,0x5b,0x67,0x65,0x74,0x5f,0x67,0x6c,0x6f,0x62,0x61,0x6c,0x5f,0x69,0x64,0x28,0x30,0x29,0x5d,0x20,0x2b,0x20,0x30,0x78,0x33,0x30,0x33,0x39,0x29,0x20,0x25,0x20,0x30,0x78,0x38,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x3b,0x0a,0x20,0x20,0x20,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x28,0x66,0x6c,0x6f,0x61,0x74,0x29,0x72,0x61,0x6e,0x64,0x6f,0x6d,0x73,0x5b,0x67,0x65,0x74,0x5f,0x67,0x6c,0x6f,0x62,0x61,0x6c,0x5f,0x69,0x64,0x28,0x30,0x29,0x5d,0x20,0x2f,0x20,0x28,0x66,0x6c,0x6f,0x61,0x74,0x29,0x30,0x78,0x38,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x3b,0x0a,0x7d,0x0a,0x66,0x6c,0x6f,0x61,0x74,0x20,0x67,0x70,0x75,0x5f,0x72,0x61,0x79,0x5f,0x6d,0x61,0x72,0x63,0x68,0x28,0x63,0x6f,0x6e,0x73,0x74,0x20,0x6c,0x6f,0x63,0x61,0x6c,0x20,0x66,0x6c,0x6f,0x61,0x74,0x33,0x20,0x6f,0x2c,0x20,0x63,0x6f,0x6e,0x73,0x74,0x20,0x6c,0x6f,0x63,0x61,0x6c,0x20,0x66,0x6c,0x6f,0x61,0x74,0x33,0x20,0x64,0x2c,0x20,0x69,0x6e,0x74,0x2a,0x20,0x6f,0x62,0x6a,0x29,0x20,0x7b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x74,0x20,0x3d,0x20,0x30,0x2e,0x30,0x66,0x3b,0x0a,0x20,0x20,0x20,0x20,0x2a,0x6f,0x62,0x6a,0x20,0x3d,0x20,0x2d,0x31,0x3b,0x0a,0x20,0x20,0x20,0x20,0x62,0x6f,0x6f,0x6c,0x20,0x66,0x69,0x72,0x73,0x74,0x20,0x3d,0x20,0x74,0x72,0x75,0x65,0x3b,0x0a,0x20,0x20,0x20,0x20,0x77,0x68,0x69,0x6c,0x65,0x20,0x28,0x74,0x20,0x3c,0x20,0x7b,0x7b,0x74,0x5f,0x6d,0x61,0x78,0x7d,0x7d,0x29,0x20,0x7b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x33,0x20,0x70,0x20,0x3d,0x20,0x70,0x20,0x2b,0x20,0x64,0x20,0x2a,0x20,0x74,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x64,0x74,0x20,0x3d,0x20,0x49,0x4e,0x46,0x49,0x4e,0x49,0x54,0x59,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x6f,0x62,0x6a,0x5f,0x64,0x74,0x20,0x3d,0x20,0x49,0x4e,0x46,0x49,0x4e,0x49,0x54,0x59,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7b,0x7b,0x20,0x66,0x6f,0x72,0x20,0x69,0x20,0x69,0x6e,0x20,0x6f,0x62,0x6a,0x20,0x7d,0x7d,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x6f,0x62,0x6a,0x5f,0x64,0x74,0x20,0x3d,0x20,0x64,0x69,0x73,0x74,0x61,0x6e,0x63,0x65,0x5f,0x7b,0x7b,0x69,0x7d,0x7d,0x28,0x70,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x69,0x66,0x28,0x6f,0x62,0x6a,0x5f,0x64,0x74,0x20,0x3c,0x20,0x64,0x74,0x29,0x20,0x7b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x64,0x74,0x20,0x3d,0x20,0x6f,0x62,0x6a,0x5f,0x64,0x74,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x69,0x66,0x28,0x6f,0x62,0x6a,0x5f,0x64,0x74,0x20,0x3c,0x20,0x7b,0x7b,0x20,0x65,0x70,0x73,0x69,0x6c,0x6f,0x6e,0x20,0x7d,0x7d,0x29,0x20,0x7b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x6f,0x62,0x6a,0x20,0x3d,0x20,0x7b,0x7b,0x69,0x7d,0x7d,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7d,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7d,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7b,0x7b,0x20,0x65,0x6e,0x64,0x66,0x6f,0x72,0x20,0x7d,0x7d,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x69,0x66,0x28,0x21,0x66,0x69,0x72,0x73,0x74,0x20,0x26,0x26,0x20,0x64,0x74,0x20,0x3c,0x20,0x7b,0x7b,0x20,0x65,0x70,0x73,0x69,0x6c,0x6f,0x6e,0x20,0x7d,0x7d,0x29,0x20,0x7b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x62,0x72,0x65,0x61,0x6b,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7d,0x65,0x6c,0x73,0x65,0x20,0x7b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x74,0x20,0x2b,0x3d,0x20,0x64,0x74,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7d,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x66,0x69,0x72,0x73,0x74,0x20,0x3d,0x20,0x66,0x61,0x6c,0x73,0x65,0x3b,0x0a,0x20,0x20,0x20,0x20,0x7d,0x0a,0x20,0x20,0x20,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x74,0x3b,0x0a,0x7d,0x0a,0x76,0x6f,0x69,0x64,0x20,0x67,0x70,0x75,0x5f,0x72,0x61,0x79,0x5f,0x74,0x72,0x61,0x63,0x65,0x28,0x63,0x6f,0x6e,0x73,0x74,0x20,0x6c,0x6f,0x63,0x61,0x6c,0x20,0x66,0x6c,0x6f,0x61,0x74,0x33,0x20,0x6f,0x2c,0x20,0x63,0x6f,0x6e,0x73,0x74,0x20,0x6c,0x6f,0x63,0x61,0x6c,0x20,0x66,0x6c,0x6f,0x61,0x74,0x33,0x20,0x64,0x2c,0x20,0x6c,0x6f,0x63,0x61,0x6c,0x20,0x66,0x6c,0x6f,0x61,0x74,0x33,0x20,0x2a,0x63,0x2c,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x6c,0x6f,0x63,0x61,0x6c,0x20,0x66,0x6c,0x6f,0x61,0x74,0x33,0x20,0x2a,0x61,0x2c,0x20,0x6c,0x6f,0x63,0x61,0x6c,0x20,0x66,0x6c,0x6f,0x61,0x74,0x33,0x20,0x2a,0x64,0x2c,0x20,0x6c,0x6f,0x63,0x61,0x6c,0x20,0x66,0x6c,0x6f,0x61,0x74,0x33,0x20,0x2a,0x6e,0x2c,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x6c,0x6f,0x63,0x61,0x6c,0x20,0x75,0x6c,0x6f,0x6e,0x67,0x20,0x64,0x65,0x70,0x74,0x68,0x2c,0x20,0x67,0x6c,0x6f,0x62,0x61,0x6c,0x20,0x75,0x69,0x6e,0x74,0x20,0x2a,0x72,0x61,0x6e,0x64,0x6f,0x6d,0x73,0x29,0x20,0x7b,0x0a,0x20,0x20,0x20,0x20,0x69,0x66,0x28,0x64,0x65,0x70,0x74,0x68,0x20,0x3e,0x3d,0x20,0x7b,0x7b,0x6d,0x69,0x6e,0x5f,0x62,0x6f,0x75,0x6e,0x63,0x65,0x7d,0x7d,0x29,0x20,0x7b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x63,0x6f,0x6e,0x73,0x74,0x20,0x6c,0x6f,0x63,0x61,0x6c,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x72,0x72,0x5f,0x73,0x74,0x6f,0x70,0x5f,0x70,0x72,0x6f,0x62,0x20,0x3d,0x20,0x30,0x2e,0x30,0x31,0x66,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x69,0x66,0x28,0x66,0x72,0x61,0x6e,0x64,0x28,0x29,0x20,0x3c,0x20,0x72,0x72,0x5f,0x73,0x74,0x6f,0x70,0x5f,0x70,0x72,0x6f,0x62,0x29,0x20,0x7b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x63,0x20,0x3d,0x20,0x28,0x66,0x6c,0x6f,0x61,0x74,0x33,0x29,0x28,0x30,0x2e,0x30,0x66,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x61,0x20,0x3d,0x20,0x28,0x66,0x6c,0x6f,0x61,0x74,0x33,0x29,0x28,0x30,0x2e,0x30,0x66,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x64,0x20,0x3d,0x20,0x28,0x66,0x6c,0x6f,0x61,0x74,0x33,0x29,0x28,0x30,0x2e,0x30,0x66,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x6e,0x20,0x3d,0x20,0x28,0x66,0x6c,0x6f,0x61,0x74,0x33,0x29,0x28,0x30,0x2e,0x30,0x66,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7d,0x0a,0x20,0x20,0x20,0x20,0x7d,0x0a,0x20,0x20,0x20,0x20,0x69,0x6e,0x74,0x20,0x69,0x64,0x3b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x74,0x20,0x3d,0x20,0x67,0x70,0x75,0x5f,0x72,0x61,0x79,0x5f,0x6d,0x61,0x72,0x63,0x68,0x28,0x6f,0x2c,0x20,0x64,0x2c,0x20,0x26,0x6f,0x62,0x6a,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x33,0x20,0x70,0x20,0x3d,0x20,0x6f,0x20,0x2b,0x20,0x64,0x20,0x2a,0x20,0x74,0x3b,0x0a,0x20,0x20,0x20,0x20,0x69,0x66,0x28,0x6f,0x62,0x6a,0x20,0x3d,0x3d,0x20,0x2d,0x31,0x29,0x20,0x7b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x63,0x20,0x3d,0x20,0x7b,0x7b,0x73,0x6b,0x79,0x7d,0x7d,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x61,0x20,0x3d,0x20,0x7b,0x7b,0x73,0x6b,0x79,0x7d,0x7d,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x64,0x20,0x3d,0x20,0x28,0x66,0x6c,0x6f,0x61,0x74,0x33,0x29,0x28,0x74,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x6e,0x20,0x3d,0x20,0x28,0x66,0x6c,0x6f,0x61,0x74,0x33,0x29,0x28,0x30,0x2e,0x30,0x66,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x3b,0x0a,0x20,0x20,0x20,0x20,0x7d,0x0a,0x20,0x20,0x20,0x20,0x7b,0x7b,0x20,0x66,0x6f,0x72,0x20,0x69,0x20,0x69,0x6e,0x20,0x6f,0x62,0x6a,0x20,0x7d,0x7d,0x0a,0x20,0x20,0x20,0x20,0x65,0x6c,0x73,0x65,0x20,0x69,0x66,0x28,0x6f,0x62,0x6a,0x20,0x3d,0x3d,0x20,0x7b,0x7b,0x69,0x7d,0x7d,0x29,0x20,0x7b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x2a,0x6e,0x20,0x3d,0x20,0x6e,0x6f,0x72,0x6d,0x61,0x6c,0x5f,0x7b,0x7b,0x69,0x7d,0x7d,0x28,0x70,0x2c,0x20,0x7b,0x7b,0x20,0x65,0x70,0x73,0x69,0x6c,0x6f,0x6e,0x20,0x7d,0x7d,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x2a,0x63,0x20,0x3d,0x20,0x6d,0x61,0x74,0x65,0x72,0x69,0x61,0x6c,0x5f,0x7b,0x7b,0x69,0x7d,0x7d,0x20,0x0a,0x20,0x20,0x20,0x20,0x7d,0x0a,0x20,0x20,0x20,0x20,0x7b,0x7b,0x20,0x65,0x6e,0x64,0x66,0x6f,0x72,0x20,0x7d,0x7d,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x33,0x20,0x70,0x20,0x3d,0x20,0x6f,0x20,0x2b,0x20,0x64,0x20,0x2a,0x20,0x74,0x3b,0x0a,0x20,0x20,0x20,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x3b,0x0a,0x7d,0x0a,0x76,0x6f,0x69,0x64,0x20,0x6b,0x65,0x72,0x6e,0x65,0x6c,0x20,0x67,0x70,0x75,0x5f,0x72,0x65,0x6e,0x64,0x65,0x72,0x5f,0x74,0x69,0x6c,0x65,0x28,0x63,0x6f,0x6e,0x73,0x74,0x20,0x75,0x69,0x6e,0x74,0x32,0x20,0x69,0x6d,0x67,0x5f,0x62,0x6f,0x75,0x6e,0x64,0x73,0x2c,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x67,0x6c,0x6f,0x62,0x61,0x6c,0x20,0x63,0x6f,0x6e,0x73,0x74,0x20,0x75,0x69,0x6e,0x74,0x34,0x20,0x2a,0x74,0x69,0x6c,0x65,0x5f,0x62,0x6f,0x75,0x6e,0x64,0x73,0x2c,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x67,0x6c,0x6f,0x62,0x61,0x6c,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x2a,0x63,0x6f,0x6c,0x6f,0x72,0x2c,0x20,0x67,0x6c,0x6f,0x62,0x61,0x6c,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x2a,0x61,0x6c,0x62,0x65,0x64,0x6f,0x2c,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x67,0x6c,0x6f,0x62,0x61,0x6c,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x2a,0x64,0x65,0x70,0x74,0x68,0x2c,0x20,0x67,0x6c,0x6f,0x62,0x61,0x6c,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x2a,0x6e,0x6f,0x72,0x6d,0x61,0x6c,0x2c,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x67,0x6c,0x6f,0x62,0x61,0x6c,0x20,0x75,0x69,0x6e,0x74,0x20,0x2a,0x72,0x61,0x6e,0x64,0x6f,0x6d,0x73,0x29,0x20,0x7b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x33,0x20,0x6f,0x20,0x3d,0x20,0x28,0x66,0x6c,0x6f,0x61,0x74,0x33,0x29,0x28,0x30,0x2e,0x30,0x66,0x2c,0x20,0x30,0x2e,0x30,0x66,0x2c,0x20,0x30,0x2e,0x30,0x66,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x6f,0x20,0x3d,0x20,0x7b,0x7b,0x76,0x69,0x65,0x77,0x7d,0x7d,0x20,0x2a,0x20,0x28,0x66,0x6c,0x6f,0x61,0x74,0x34,0x29,0x28,0x6f,0x2c,0x20,0x31,0x2e,0x30,0x66,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x63,0x6f,0x6e,0x73,0x74,0x20,0x75,0x69,0x6e,0x74,0x34,0x20,0x74,0x69,0x6c,0x65,0x5f,0x62,0x6f,0x75,0x6e,0x64,0x20,0x3d,0x20,0x74,0x69,0x6c,0x65,0x5f,0x62,0x6f,0x75,0x6e,0x64,0x73,0x5b,0x67,0x65,0x74,0x5f,0x67,0x6c,0x6f,0x62,0x61,0x6c,0x5f,0x69,0x64,0x28,0x30,0x29,0x5d,0x3b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6f,0x72,0x20,0x28,0x75,0x69,0x6e,0x74,0x20,0x78,0x20,0x3d,0x20,0x74,0x69,0x6c,0x65,0x5f,0x62,0x6f,0x75,0x6e,0x64,0x2e,0x78,0x3b,0x20,0x78,0x20,0x3c,0x20,0x74,0x69,0x6c,0x65,0x5f,0x62,0x6f,0x75,0x6e,0x64,0x2e,0x7a,0x3b,0x20,0x2b,0x2b,0x78,0x29,0x20,0x7b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x66,0x6f,0x72,0x20,0x28,0x75,0x69,0x6e,0x74,0x20,0x79,0x20,0x3d,0x20,0x74,0x69,0x6c,0x65,0x5f,0x62,0x6f,0x75,0x6e,0x64,0x2e,0x79,0x3b,0x20,0x79,0x20,0x3c,0x20,0x74,0x69,0x6c,0x65,0x5f,0x62,0x6f,0x75,0x6e,0x64,0x2e,0x77,0x3b,0x20,0x2b,0x2b,0x79,0x29,0x20,0x7b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x33,0x20,0x64,0x69,0x72,0x20,0x3d,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x28,0x66,0x6c,0x6f,0x61,0x74,0x33,0x29,0x28,0x78,0x20,0x2d,0x20,0x69,0x6d,0x62,0x5f,0x62,0x6f,0x75,0x6e,0x64,0x73,0x2e,0x78,0x20,0x2f,0x20,0x32,0x2e,0x30,0x66,0x20,0x2b,0x20,0x66,0x72,0x61,0x6e,0x64,0x28,0x72,0x61,0x6e,0x64,0x6f,0x6d,0x73,0x29,0x2c,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x79,0x20,0x2d,0x20,0x69,0x6d,0x67,0x5f,0x62,0x6f,0x75,0x6e,0x64,0x73,0x2e,0x79,0x20,0x2f,0x20,0x32,0x2e,0x30,0x66,0x20,0x2b,0x20,0x66,0x72,0x61,0x6e,0x64,0x28,0x72,0x61,0x6e,0x64,0x6f,0x6d,0x73,0x29,0x2c,0x20,0x7b,0x7b,0x66,0x69,0x6c,0x6d,0x7a,0x7d,0x7d,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x33,0x20,0x63,0x2c,0x20,0x61,0x2c,0x20,0x64,0x2c,0x20,0x6e,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x67,0x70,0x75,0x5f,0x72,0x61,0x79,0x5f,0x74,0x72,0x61,0x63,0x65,0x28,0x30,0x2c,0x20,0x6e,0x6f,0x72,0x6d,0x61,0x6c,0x69,0x7a,0x65,0x28,0x28,0x66,0x6c,0x6f,0x61,0x74,0x33,0x29,0x28,0x76,0x69,0x65,0x77,0x20,0x2a,0x20,0x28,0x66,0x6c,0x6f,0x61,0x74,0x34,0x29,0x28,0x64,0x69,0x72,0x2c,0x20,0x30,0x2e,0x30,0x66,0x29,0x29,0x29,0x2c,0x20,0x26,0x63,0x2c,0x20,0x26,0x61,0x2c,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x26,0x64,0x2c,0x20,0x26,0x6e,0x2c,0x20,0x30,0x2c,0x20,0x72,0x61,0x6e,0x64,0x6f,0x6d,0x73,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x63,0x6f,0x6e,0x73,0x74,0x20,0x75,0x69,0x6e,0x74,0x20,0x69,0x64,0x78,0x20,0x3d,0x20,0x33,0x20,0x2a,0x20,0x28,0x79,0x20,0x2a,0x20,0x69,0x6d,0x67,0x5f,0x62,0x6f,0x75,0x6e,0x64,0x73,0x2e,0x79,0x20,0x2b,0x20,0x78,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x5b,0x69,0x64,0x78,0x20,0x2b,0x20,0x30,0x5d,0x20,0x3d,0x20,0x63,0x2e,0x78,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x5b,0x69,0x64,0x78,0x20,0x2b,0x20,0x31,0x5d,0x20,0x3d,0x20,0x63,0x2e,0x79,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x5b,0x69,0x64,0x78,0x20,0x2b,0x20,0x32,0x5d,0x20,0x3d,0x20,0x63,0x2e,0x7a,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x61,0x6c,0x62,0x65,0x64,0x6f,0x5b,0x69,0x64,0x78,0x20,0x2b,0x20,0x30,0x5d,0x20,0x3d,0x20,0x61,0x2e,0x78,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x61,0x6c,0x62,0x65,0x64,0x6f,0x5b,0x69,0x64,0x78,0x20,0x2b,0x20,0x31,0x5d,0x20,0x3d,0x20,0x61,0x2e,0x79,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x61,0x6c,0x62,0x65,0x64,0x6f,0x5b,0x69,0x64,0x78,0x20,0x2b,0x20,0x32,0x5d,0x20,0x3d,0x20,0x61,0x2e,0x7a,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x64,0x65,0x70,0x74,0x68,0x5b,0x69,0x64,0x78,0x20,0x2b,0x20,0x30,0x5d,0x20,0x3d,0x20,0x64,0x2e,0x78,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x64,0x65,0x70,0x74,0x68,0x5b,0x69,0x64,0x78,0x20,0x2b,0x20,0x31,0x5d,0x20,0x3d,0x20,0x64,0x2e,0x79,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x64,0x65,0x70,0x74,0x68,0x5b,0x69,0x64,0x78,0x20,0x2b,0x20,0x32,0x5d,0x20,0x3d,0x20,0x64,0x2e,0x7a,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x6e,0x6f,0x72,0x6d,0x61,0x6c,0x5b,0x69,0x64,0x78,0x20,0x2b,0x20,0x30,0x5d,0x20,0x3d,0x20,0x6e,0x2e,0x78,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x6e,0x6f,0x72,0x6d,0x61,0x6c,0x5b,0x69,0x64,0x78,0x20,0x2b,0x20,0x31,0x5d,0x20,0x3d,0x20,0x6e,0x2e,0x79,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x6e,0x6f,0x72,0x6d,0x61,0x6c,0x5b,0x69,0x64,0x78,0x20,0x2b,0x20,0x32,0x5d,0x20,0x3d,0x20,0x6e,0x2e,0x7a,0x3b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7d,0x0a,0x20,0x20,0x20,0x20,0x7d,0x0a,0x7d,0x0a,};
static const long unsigned int gpu_render_tile_kernel_size = sizeof(gpu_render_tile_kernel);

