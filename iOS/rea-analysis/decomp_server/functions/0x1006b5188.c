// rea decompile_all
// name: FUN_1006b5188
// address: 0x1006b5188
// body: available
// range: 0x1006b5188-0x1006b5e03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006b52dc to 0x1006b6038 FUN_1006b6038 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b5188(undefined1 *param_1,long param_2,undefined1 *param_3,undefined8 *param_4,
                  uint param_5,uint param_6,undefined8 param_7,undefined8 *param_8,ulong param_9,
                  undefined8 *param_10,int *param_11,int param_12)

{
  ulong uVar1;
  uint3 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint6 uVar5;
  uint6 uVar6;
  uint6 uVar7;
  uint6 uVar8;
  uint6 uVar9;
  uint6 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  long lVar38;
  long lVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  char *pcVar51;
  undefined1 *puVar59;
  undefined8 *puVar67;
  undefined8 *puVar68;
  undefined1 *puVar69;
  undefined1 *puVar70;
  int iVar71;
  long lVar72;
  long lVar73;
  ulong uVar74;
  int *piVar75;
  uint uVar76;
  long lVar77;
  ulong uVar78;
  long lVar79;
  byte *pbVar80;
  ulong uVar81;
  byte bVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  byte bVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  byte bVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  byte bVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  byte bVar102;
  uint5 uVar103;
  ulong uVar104;
  long lVar105;
  byte bVar107;
  byte bVar108;
  byte bVar110;
  undefined1 auVar106 [16];
  long lVar109;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  undefined1 uVar132;
  undefined1 uVar133;
  undefined1 uVar134;
  undefined1 uVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  undefined1 uVar145;
  undefined1 uVar146;
  undefined1 uVar147;
  undefined1 uVar148;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  undefined1 uVar158;
  undefined1 uVar159;
  undefined1 uVar160;
  undefined1 uVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  undefined1 uVar171;
  undefined1 uVar172;
  undefined1 uVar173;
  undefined1 uVar174;
  char cVar175;
  undefined1 uVar176;
  undefined1 uVar177;
  undefined1 uVar178;
  undefined1 uVar179;
  undefined1 uVar180;
  undefined1 uVar181;
  undefined1 uVar182;
  undefined1 uVar183;
  undefined1 uVar184;
  undefined1 uVar185;
  undefined1 uVar186;
  undefined1 uVar187;
  undefined1 uVar188;
  undefined1 uVar189;
  undefined1 uVar190;
  undefined1 uVar191;
  undefined1 uVar192;
  undefined1 uVar193;
  undefined1 uVar194;
  undefined1 uVar195;
  undefined1 uVar196;
  undefined1 uVar197;
  undefined1 uVar198;
  undefined1 uVar199;
  undefined1 uVar200;
  undefined1 uVar201;
  undefined1 uVar202;
  undefined1 uVar203;
  undefined1 uVar204;
  undefined1 uVar205;
  undefined1 uVar206;
  long lVar207;
  undefined1 auVar208 [16];
  long lVar211;
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  byte bVar212;
  byte bVar213;
  long lVar214;
  byte bVar218;
  byte bVar219;
  byte bVar220;
  byte bVar222;
  undefined1 auVar215 [16];
  long lVar221;
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  ulong uVar223;
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  ulong uVar228;
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 uVar231;
  undefined1 uVar232;
  char cVar233;
  undefined1 uVar234;
  char cVar235;
  undefined1 uVar236;
  char cVar237;
  undefined1 uVar238;
  char cVar239;
  undefined1 uVar240;
  char cVar241;
  undefined1 uVar242;
  char cVar243;
  undefined1 uVar244;
  char cVar245;
  undefined1 uVar246;
  char in_register_00005208;
  char in_register_00005209;
  char in_register_0000520a;
  char in_register_0000520b;
  char in_register_0000520c;
  char in_register_0000520d;
  char in_register_0000520e;
  char in_register_0000520f;
  long lVar247;
  long lVar248;
  undefined1 uVar249;
  undefined1 uVar250;
  undefined1 uVar251;
  undefined1 uVar252;
  undefined1 uVar253;
  undefined1 uVar254;
  undefined1 uVar255;
  undefined1 uVar256;
  undefined1 uVar257;
  undefined1 uVar258;
  undefined1 uVar259;
  undefined1 uVar260;
  undefined1 uVar261;
  undefined1 uVar262;
  undefined1 uVar263;
  undefined1 uVar264;
  long lVar265;
  long lVar266;
  long lVar267;
  long lVar268;
  undefined1 uVar269;
  undefined1 uVar270;
  undefined1 uVar271;
  undefined1 uVar272;
  undefined1 uVar273;
  undefined1 uVar274;
  undefined1 uVar275;
  undefined1 uVar276;
  undefined1 uVar277;
  undefined1 uVar278;
  undefined1 uVar279;
  undefined1 uVar280;
  undefined1 uVar281;
  undefined1 uVar282;
  undefined1 uVar283;
  undefined1 uVar284;
  char cVar285;
  char cVar286;
  char cVar287;
  char cVar288;
  char cVar289;
  char cVar290;
  char cVar291;
  char cVar292;
  char cVar293;
  undefined1 uVar294;
  char cVar295;
  undefined1 uVar296;
  char cVar297;
  undefined1 uVar298;
  char cVar299;
  undefined1 uVar300;
  char cVar301;
  undefined1 uVar302;
  char cVar303;
  undefined1 uVar304;
  char cVar305;
  undefined1 uVar306;
  char cVar307;
  undefined1 uVar308;
  undefined1 uVar309;
  undefined1 uVar310;
  undefined1 uVar311;
  undefined1 uVar312;
  undefined1 uVar313;
  undefined1 uVar314;
  undefined1 uVar315;
  undefined1 uVar316;
  ulong uVar317;
  long lVar318;
  long lVar319;
  ulong uVar320;
  long lVar321;
  long lVar322;
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar328 [16];
  undefined1 auVar329 [16];
  undefined1 auVar330 [16];
  ulong uVar331;
  undefined1 auVar332 [16];
  undefined1 auVar333 [16];
  undefined1 auVar334 [16];
  ulong uVar335;
  undefined1 auVar336 [16];
  undefined1 auVar337 [16];
  undefined1 auVar338 [16];
  ulong local_1a0;
  ulong uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  ulong local_180;
  ulong uStack_178;
  ulong local_170;
  ulong uStack_168;
  ulong local_160;
  ulong uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  ulong local_140;
  ulong uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  uint local_ac [3];
  char *pcVar52;
  char *pcVar53;
  char *pcVar54;
  char *pcVar55;
  char *pcVar56;
  char *pcVar57;
  char *pcVar58;
  undefined1 *puVar60;
  undefined1 *puVar61;
  undefined1 *puVar62;
  undefined1 *puVar63;
  undefined1 *puVar64;
  undefined1 *puVar65;
  undefined1 *puVar66;
  
  if (((ulong)param_8 & 3) != 0) {
    _UNK_10084e999 = 0xffffff03ffffff;
    return;
  }
  if (param_9 >> 0xb < 3) {
    _UNK_10084e999 = 0xffffff03ffffff;
    return;
  }
  if (param_2 == 0) {
    _UNK_10084e999 = 0xffffff03ffffff;
    return;
  }
  if (param_4 == (undefined8 *)0x0) {
    _UNK_10084e999 = 0xffffff03ffffff;
    return;
  }
  if ((undefined8 *)0x20000 < param_4) {
    _UNK_10084e999 = 0xffffff03ffffff;
    return;
  }
  if (0xc < param_6) {
    _UNK_10084e999 = 0xffffff03ffffff;
    return;
  }
  if (0xff < param_5) {
    _UNK_10084e999 = 0xffffff03ffffff;
    return;
  }
  local_ac[0] = param_5;
  if (param_5 == 0) {
    local_ac[0] = 0xff;
  }
  uVar76 = 0xb;
  if (param_6 != 0) {
    uVar76 = param_6;
  }
  uVar81 = (ulong)uVar76;
  if ((param_11 != (int *)0x0 && param_12 != 0) && (*param_11 == 2)) {
    FUN_1006b6038(param_1,param_1,param_1 + param_2,param_3,param_4,param_7,param_10);
    return;
  }
  puVar67 = param_8;
  FUN_1006b3634(param_8,local_ac,param_3,param_4,param_8);
  if ((undefined8 *)0xffffffffffffff88 < puVar67) {
    return;
  }
  if (puVar67 == param_4) {
    *param_1 = *param_3;
    return;
  }
  if (puVar67 <= (undefined8 *)(((ulong)param_4 >> 7) + 4)) {
    return;
  }
  puVar70 = param_1;
  if (param_11 != (int *)0x0) {
    iVar71 = *param_11;
    if (iVar71 == 1) {
      if (-1 < (int)local_ac[0]) {
        uVar1 = (ulong)local_ac[0] + 1;
        if (local_ac[0] < 8) {
          lVar73 = 0;
          uVar76 = 0;
        }
        else {
          if (local_ac[0] < 0x40) {
            uVar76 = 0;
            lVar72 = 0;
          }
          else {
            uStack_c8 = 0;
            local_d0 = 0;
            uStack_b8 = 0;
            local_c0 = 0;
            uStack_d8 = 0;
            local_e0 = 0;
            uVar74 = 0x40;
            if ((uVar1 & 0x3f) != 0) {
              uVar74 = uVar1 & 0x3f;
            }
            lVar73 = uVar1 - uVar74;
            uStack_f8 = 0;
            local_100 = 0;
            uStack_e8 = 0;
            local_f0 = 0;
            pcVar58 = (char *)((long)param_10 + 0x82);
            puVar67 = param_8 + 0x10;
            uStack_168 = 0;
            local_170 = 0;
            uStack_158 = 0;
            local_160 = 0;
            uStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            local_130 = 0;
            uStack_198 = 0;
            local_1a0 = 0;
            uStack_188 = 0;
            local_190 = 0;
            uStack_118 = 0;
            local_120 = 0;
            uStack_108 = 0;
            local_110 = 0;
            uStack_178 = 0;
            local_180 = 0;
            uStack_148 = 0;
            local_150 = 0;
            bVar82 = 0;
            bVar87 = 0;
            bVar92 = 0;
            bVar97 = 0;
            uVar78 = uVar1;
            do {
              cVar285 = -(pcVar58[-0x80] == '\0');
              cVar286 = -(pcVar58[-0x7c] == '\0');
              cVar287 = -(pcVar58[-0x78] == '\0');
              cVar288 = -(pcVar58[-0x74] == '\0');
              cVar289 = -(pcVar58[-0x70] == '\0');
              cVar290 = -(pcVar58[-0x6c] == '\0');
              cVar291 = -(pcVar58[-0x68] == '\0');
              cVar292 = -(pcVar58[-100] == '\0');
              cVar175 = -(pcVar58[-0x40] == '\0');
              cVar233 = -(pcVar58[-0x3c] == '\0');
              cVar235 = -(pcVar58[-0x38] == '\0');
              cVar237 = -(pcVar58[-0x34] == '\0');
              cVar239 = -(pcVar58[-0x30] == '\0');
              cVar241 = -(pcVar58[-0x2c] == '\0');
              cVar243 = -(pcVar58[-0x28] == '\0');
              cVar245 = -(pcVar58[-0x24] == '\0');
              in_register_00005208 = -(pcVar58[-0x20] == '\0');
              in_register_00005209 = -(pcVar58[-0x1c] == '\0');
              in_register_0000520a = -(pcVar58[-0x18] == '\0');
              in_register_0000520b = -(pcVar58[-0x14] == '\0');
              in_register_0000520c = -(pcVar58[-0x10] == '\0');
              in_register_0000520d = -(pcVar58[-0xc] == '\0');
              in_register_0000520e = -(pcVar58[-8] == '\0');
              in_register_0000520f = -(pcVar58[-4] == '\0');
              auVar337._0_8_ =
                   CONCAT17(-(pcVar58[0x1c] == '\0'),
                            CONCAT16(-(pcVar58[0x18] == '\0'),
                                     CONCAT15(-(pcVar58[0x14] == '\0'),
                                              CONCAT14(-(pcVar58[0x10] == '\0'),
                                                       CONCAT13(-(pcVar58[0xc] == '\0'),
                                                                CONCAT12(-(pcVar58[8] == '\0'),
                                                                         CONCAT11(-(pcVar58[4] ==
                                                                                   '\0'),-(*pcVar58 
                                                  == '\0'))))))));
              auVar337[8] = -(pcVar58[0x20] == '\0');
              auVar337[9] = -(pcVar58[0x24] == '\0');
              auVar337[10] = -(pcVar58[0x28] == '\0');
              auVar337[0xb] = -(pcVar58[0x2c] == '\0');
              auVar337[0xc] = -(pcVar58[0x30] == '\0');
              auVar337[0xd] = -(pcVar58[0x34] == '\0');
              auVar337[0xe] = -(pcVar58[0x38] == '\0');
              auVar337[0xf] = -(pcVar58[0x3c] == '\0');
              cVar293 = -(pcVar58[0x40] == '\0');
              cVar295 = -(pcVar58[0x44] == '\0');
              cVar297 = -(pcVar58[0x48] == '\0');
              cVar299 = -(pcVar58[0x4c] == '\0');
              cVar301 = -(pcVar58[0x50] == '\0');
              cVar303 = -(pcVar58[0x54] == '\0');
              cVar305 = -(pcVar58[0x58] == '\0');
              cVar307 = -(pcVar58[0x5c] == '\0');
              uVar5 = (uint6)CONCAT14(-(*(int *)((long)puVar67 + -0x6c) == 0),
                                      -(uint)(*(int *)(puVar67 + -0xe) == 0)) & 0xffff0000ffff;
              uVar6 = (uint6)CONCAT14(-((int)((ulong)puVar67[-10] >> 0x20) == 0),
                                      -(uint)((int)puVar67[-10] == 0)) & 0xffff0000ffff;
              uVar7 = (uint6)CONCAT14(-(*(int *)((long)puVar67 + -0x2c) == 0),
                                      -(uint)(*(int *)(puVar67 + -6) == 0)) & 0xffff0000ffff;
              uVar8 = (uint6)CONCAT14(-(*(int *)((long)puVar67 + -0xc) == 0),
                                      -(uint)(*(int *)(puVar67 + -2) == 0)) & 0xffff0000ffff;
              uVar9 = (uint6)CONCAT14(-((int)((ulong)puVar67[6] >> 0x20) == 0),
                                      -(uint)((int)puVar67[6] == 0)) & 0xffff0000ffff;
              uVar10 = (uint6)CONCAT14(-((int)((ulong)puVar67[2] >> 0x20) == 0),
                                       -(uint)((int)puVar67[2] == 0)) & 0xffff0000ffff;
              auVar229[1] = cVar286;
              auVar229[0] = cVar285;
              auVar229[2] = cVar287;
              auVar229[3] = cVar288;
              auVar229[4] = cVar289;
              auVar229[5] = cVar290;
              auVar229[6] = cVar291;
              auVar229[7] = cVar292;
              auVar229[8] = -(pcVar58[-0x60] == '\0');
              auVar229[9] = -(pcVar58[-0x5c] == '\0');
              auVar229[10] = -(pcVar58[-0x58] == '\0');
              auVar229[0xb] = -(pcVar58[-0x54] == '\0');
              auVar229[0xc] = -(pcVar58[-0x50] == '\0');
              auVar229[0xd] = -(pcVar58[-0x4c] == '\0');
              auVar229[0xe] = -(pcVar58[-0x48] == '\0');
              auVar229[0xf] = -(pcVar58[-0x44] == '\0');
              auVar230[1] = cVar286;
              auVar230[0] = cVar285;
              auVar230[2] = cVar287;
              auVar230[3] = cVar288;
              auVar230[4] = cVar289;
              auVar230[5] = cVar290;
              auVar230[6] = cVar291;
              auVar230[7] = cVar292;
              auVar230[8] = -(pcVar58[-0x60] == '\0');
              auVar230[9] = -(pcVar58[-0x5c] == '\0');
              auVar230[10] = -(pcVar58[-0x58] == '\0');
              auVar230[0xb] = -(pcVar58[-0x54] == '\0');
              auVar230[0xc] = -(pcVar58[-0x50] == '\0');
              auVar230[0xd] = -(pcVar58[-0x4c] == '\0');
              auVar230[0xe] = -(pcVar58[-0x48] == '\0');
              auVar230[0xf] = -(pcVar58[-0x44] == '\0');
              auVar209 = NEON_ext(auVar229,auVar230,8,1);
              uVar320 = CONCAT17(~-((int)((ulong)puVar67[-9] >> 0x20) == 0),
                                 CONCAT16(~-((int)puVar67[-9] == 0),
                                          CONCAT15(~(byte)(uVar6 >> 0x20),
                                                   CONCAT14(~(byte)uVar6,
                                                            CONCAT13(~-(*(int *)((long)puVar67 +
                                                                                -0x54) == 0),
                                                                     CONCAT12(~-(*(int *)(puVar67 +
                                                                                         -0xb) == 0)
                                                                              ,CONCAT11(~-(*(int *)(
                                                  (long)puVar67 + -0x5c) == 0),
                                                  ~-(*(int *)(puVar67 + -0xc) == 0)))))))) &
                        auVar209._0_8_;
              uVar228 = CONCAT17(~-(*(int *)((long)puVar67 + -100) == 0),
                                 CONCAT16(~-(*(int *)(puVar67 + -0xd) == 0),
                                          CONCAT15(~(byte)(uVar5 >> 0x20),
                                                   CONCAT14(~(byte)uVar5,
                                                            CONCAT13(~-(*(int *)((long)puVar67 +
                                                                                -0x74) == 0),
                                                                     CONCAT12(~-(*(int *)(puVar67 +
                                                                                         -0xf) == 0)
                                                                              ,CONCAT11(~-(*(int *)(
                                                  (long)puVar67 + -0x7c) == 0),
                                                  ~-(*(int *)(puVar67 + -0x10) == 0)))))))) &
                        CONCAT17(cVar292,CONCAT16(cVar291,CONCAT15(cVar290,CONCAT14(cVar289,CONCAT13
                                                  (cVar288,CONCAT12(cVar287,CONCAT11(cVar286,cVar285
                                                                                    )))))));
              auVar209[1] = cVar233;
              auVar209[0] = cVar175;
              auVar209[2] = cVar235;
              auVar209[3] = cVar237;
              auVar209[4] = cVar239;
              auVar209[5] = cVar241;
              auVar209[6] = cVar243;
              auVar209[7] = cVar245;
              auVar209[8] = in_register_00005208;
              auVar209[9] = in_register_00005209;
              auVar209[10] = in_register_0000520a;
              auVar209[0xb] = in_register_0000520b;
              auVar209[0xc] = in_register_0000520c;
              auVar209[0xd] = in_register_0000520d;
              auVar209[0xe] = in_register_0000520e;
              auVar209[0xf] = in_register_0000520f;
              auVar216[1] = cVar233;
              auVar216[0] = cVar175;
              auVar216[2] = cVar235;
              auVar216[3] = cVar237;
              auVar216[4] = cVar239;
              auVar216[5] = cVar241;
              auVar216[6] = cVar243;
              auVar216[7] = cVar245;
              auVar216[8] = in_register_00005208;
              auVar216[9] = in_register_00005209;
              auVar216[10] = in_register_0000520a;
              auVar216[0xb] = in_register_0000520b;
              auVar216[0xc] = in_register_0000520c;
              auVar216[0xd] = in_register_0000520d;
              auVar216[0xe] = in_register_0000520e;
              auVar216[0xf] = in_register_0000520f;
              auVar209 = NEON_ext(auVar209,auVar216,8,1);
              uVar317 = CONCAT17(~-(*(int *)((long)puVar67 + -4) == 0),
                                 CONCAT16(~-(*(int *)(puVar67 + -1) == 0),
                                          CONCAT15(~(byte)(uVar8 >> 0x20),
                                                   CONCAT14(~(byte)uVar8,
                                                            CONCAT13(~-((int)((ulong)puVar67[-3] >>
                                                                             0x20) == 0),
                                                                     CONCAT12(~-((int)puVar67[-3] ==
                                                                                0),CONCAT11(~-((int)
                                                  ((ulong)puVar67[-4] >> 0x20) == 0),
                                                  ~-((int)puVar67[-4] == 0)))))))) & auVar209._0_8_;
              uVar223 = CONCAT17(~-(*(int *)((long)puVar67 + -0x24) == 0),
                                 CONCAT16(~-(*(int *)(puVar67 + -5) == 0),
                                          CONCAT15(~(byte)(uVar7 >> 0x20),
                                                   CONCAT14(~(byte)uVar7,
                                                            CONCAT13(~-((int)((ulong)puVar67[-7] >>
                                                                             0x20) == 0),
                                                                     CONCAT12(~-((int)puVar67[-7] ==
                                                                                0),CONCAT11(~-((int)
                                                  ((ulong)puVar67[-8] >> 0x20) == 0),
                                                  ~-((int)puVar67[-8] == 0)))))))) &
                        CONCAT17(cVar245,CONCAT16(cVar243,CONCAT15(cVar241,CONCAT14(cVar239,CONCAT13
                                                  (cVar237,CONCAT12(cVar235,CONCAT11(cVar233,cVar175
                                                                                    )))))));
              uVar331 = CONCAT17(~-((int)((ulong)puVar67[3] >> 0x20) == 0),
                                 CONCAT16(~-((int)puVar67[3] == 0),
                                          CONCAT15(~(byte)(uVar10 >> 0x20),
                                                   CONCAT14(~(byte)uVar10,
                                                            CONCAT13(~-((int)((ulong)puVar67[1] >>
                                                                             0x20) == 0),
                                                                     CONCAT12(~-((int)puVar67[1] ==
                                                                                0),CONCAT11(~-((int)
                                                  ((ulong)*puVar67 >> 0x20) == 0),
                                                  ~-((int)*puVar67 == 0)))))))) & auVar337._0_8_;
              auVar209 = NEON_ext(auVar337,auVar337,8,1);
              uVar335 = CONCAT17(~-((int)((ulong)puVar67[7] >> 0x20) == 0),
                                 CONCAT16(~-((int)puVar67[7] == 0),
                                          CONCAT15(~(byte)(uVar9 >> 0x20),
                                                   CONCAT14(~(byte)uVar9,
                                                            CONCAT13(~-(*(int *)((long)puVar67 +
                                                                                0x2c) == 0),
                                                                     CONCAT12(~-(*(int *)(puVar67 +
                                                                                         5) == 0),
                                                                              CONCAT11(~-(*(int *)((
                                                  long)puVar67 + 0x24) == 0),
                                                  ~-(*(int *)(puVar67 + 4) == 0)))))))) &
                        auVar209._0_8_;
              uVar103 = CONCAT14((char)(uVar228 >> 0x28),(uint)((byte)(uVar228 >> 0x20) & 1)) &
                        0x1ffffffff;
              bVar111 = (byte)local_e0 | (byte)uVar103;
              bVar114 = local_e0._4_1_ | (byte)(uVar103 >> 0x20);
              bVar117 = (byte)uStack_d8 | (byte)(uVar228 >> 0x30) & 1;
              bVar120 = uStack_d8._4_1_ | (byte)(uVar228 >> 0x38) & 1;
              uStack_d8 = (ulong)CONCAT14(bVar120,(uint)bVar117);
              local_e0 = (ulong)CONCAT14(bVar114,(uint)bVar111);
              uVar103 = CONCAT14((char)(uVar228 >> 8),(uint)((byte)uVar228 & 1)) & 0x1ffffffff;
              bVar112 = (byte)local_c0 | (byte)uVar103;
              bVar115 = local_c0._4_1_ | (byte)(uVar103 >> 0x20);
              bVar118 = (byte)uStack_b8 | (byte)(uVar228 >> 0x10) & 1;
              bVar121 = uStack_b8._4_1_ | (byte)(uVar228 >> 0x18) & 1;
              uStack_b8 = (ulong)CONCAT14(bVar121,(uint)bVar118);
              local_c0 = (ulong)CONCAT14(bVar115,(uint)bVar112);
              uVar228 = CONCAT17(~-((int)((ulong)puVar67[0xb] >> 0x20) == 0),
                                 CONCAT16(~-((int)puVar67[0xb] == 0),
                                          CONCAT15(~-((int)((ulong)puVar67[10] >> 0x20) == 0),
                                                   CONCAT14(~-((int)puVar67[10] == 0),
                                                            CONCAT13(~-(*(int *)((long)puVar67 +
                                                                                0x4c) == 0),
                                                                     CONCAT12(~-(*(int *)(puVar67 +
                                                                                         9) == 0),
                                                                              CONCAT11(~-(*(int *)((
                                                  long)puVar67 + 0x44) == 0),
                                                  ~-(*(int *)(puVar67 + 8) == 0)))))))) &
                        CONCAT17(cVar307,CONCAT16(cVar305,CONCAT15(cVar303,CONCAT14(cVar301,CONCAT13
                                                  (cVar299,CONCAT12(cVar297,CONCAT11(cVar295,cVar293
                                                                                    )))))));
              auVar326[1] = cVar295;
              auVar326[0] = cVar293;
              auVar326[2] = cVar297;
              auVar326[3] = cVar299;
              auVar326[4] = cVar301;
              auVar326[5] = cVar303;
              auVar326[6] = cVar305;
              auVar326[7] = cVar307;
              auVar326[8] = -(pcVar58[0x60] == '\0');
              auVar326[9] = -(pcVar58[100] == '\0');
              auVar326[10] = -(pcVar58[0x68] == '\0');
              auVar326[0xb] = -(pcVar58[0x6c] == '\0');
              auVar326[0xc] = -(pcVar58[0x70] == '\0');
              auVar326[0xd] = -(pcVar58[0x74] == '\0');
              auVar326[0xe] = -(pcVar58[0x78] == '\0');
              auVar326[0xf] = -(pcVar58[0x7c] == '\0');
              auVar329[1] = cVar295;
              auVar329[0] = cVar293;
              auVar329[2] = cVar297;
              auVar329[3] = cVar299;
              auVar329[4] = cVar301;
              auVar329[5] = cVar303;
              auVar329[6] = cVar305;
              auVar329[7] = cVar307;
              auVar329[8] = -(pcVar58[0x60] == '\0');
              auVar329[9] = -(pcVar58[100] == '\0');
              auVar329[10] = -(pcVar58[0x68] == '\0');
              auVar329[0xb] = -(pcVar58[0x6c] == '\0');
              auVar329[0xc] = -(pcVar58[0x70] == '\0');
              auVar329[0xd] = -(pcVar58[0x74] == '\0');
              auVar329[0xe] = -(pcVar58[0x78] == '\0');
              auVar329[0xf] = -(pcVar58[0x7c] == '\0');
              auVar209 = NEON_ext(auVar326,auVar329,8,1);
              uVar104 = CONCAT17(~-(*(int *)((long)puVar67 + 0x7c) == 0),
                                 CONCAT16(~-(*(int *)(puVar67 + 0xf) == 0),
                                          CONCAT15(~-(*(int *)((long)puVar67 + 0x74) == 0),
                                                   CONCAT14(~-(*(int *)(puVar67 + 0xe) == 0),
                                                            CONCAT13(~-(*(int *)((long)puVar67 +
                                                                                0x6c) == 0),
                                                                     CONCAT12(~-(*(int *)(puVar67 +
                                                                                         0xd) == 0),
                                                                              CONCAT11(~-(*(int *)((
                                                  long)puVar67 + 100) == 0),
                                                  ~-(*(int *)(puVar67 + 0xc) == 0)))))))) &
                        auVar209._0_8_;
              uVar103 = CONCAT14((char)(uVar320 >> 0x28),(uint)((byte)(uVar320 >> 0x20) & 1)) &
                        0x1ffffffff;
              bVar123 = (byte)local_f0 | (byte)uVar103;
              bVar136 = (byte)(local_f0 >> 0x20) | (byte)(uVar103 >> 0x20);
              bVar149 = (byte)uStack_e8 | (byte)(uVar320 >> 0x30) & 1;
              bVar162 = (byte)(uStack_e8 >> 0x20) | (byte)(uVar320 >> 0x38) & 1;
              uStack_e8 = (ulong)CONCAT14(bVar162,(uint)bVar149);
              local_f0 = (ulong)CONCAT14(bVar136,(uint)bVar123);
              uVar103 = CONCAT14((char)(uVar223 >> 0x28),(uint)((byte)(uVar223 >> 0x20) & 1)) &
                        0x1ffffffff;
              bVar124 = (byte)local_160 | (byte)uVar103;
              bVar137 = (byte)(local_160 >> 0x20) | (byte)(uVar103 >> 0x20);
              bVar150 = (byte)uStack_158 | (byte)(uVar223 >> 0x30) & 1;
              bVar163 = (byte)(uStack_158 >> 0x20) | (byte)(uVar223 >> 0x38) & 1;
              uStack_158 = (ulong)CONCAT14(bVar163,(uint)bVar150);
              local_160 = (ulong)CONCAT14(bVar137,(uint)bVar124);
              bVar102 = (byte)(uVar228 >> 8);
              uVar103 = CONCAT14((char)(uVar320 >> 8),(uint)((byte)uVar320 & 1)) & 0x1ffffffff;
              bVar125 = (byte)local_d0 | (byte)uVar103;
              bVar138 = (byte)(local_d0 >> 0x20) | (byte)(uVar103 >> 0x20);
              bVar151 = (byte)uStack_c8 | (byte)(uVar320 >> 0x10) & 1;
              bVar164 = (byte)(uStack_c8 >> 0x20) | (byte)(uVar320 >> 0x18) & 1;
              uStack_c8 = (ulong)CONCAT14(bVar164,(uint)bVar151);
              local_d0 = (ulong)CONCAT14(bVar138,(uint)bVar125);
              uVar103 = CONCAT14((char)(uVar223 >> 8),(uint)((byte)uVar223 & 1)) & 0x1ffffffff;
              bVar126 = (byte)local_100 | (byte)uVar103;
              bVar139 = (byte)(local_100 >> 0x20) | (byte)(uVar103 >> 0x20);
              bVar152 = (byte)uStack_f8 | (byte)(uVar223 >> 0x10) & 1;
              bVar165 = (byte)(uStack_f8 >> 0x20) | (byte)(uVar223 >> 0x18) & 1;
              uStack_f8 = (ulong)CONCAT14(bVar165,(uint)bVar152);
              local_100 = (ulong)CONCAT14(bVar139,(uint)bVar126);
              uVar103 = CONCAT14((char)(uVar335 >> 0x28),(uint)((byte)(uVar335 >> 0x20) & 1)) &
                        0x1ffffffff;
              bVar127 = (byte)local_170 | (byte)uVar103;
              bVar140 = (byte)(local_170 >> 0x20) | (byte)(uVar103 >> 0x20);
              bVar153 = (byte)uStack_168 | (byte)(uVar335 >> 0x30) & 1;
              bVar166 = (byte)(uStack_168 >> 0x20) | (byte)(uVar335 >> 0x38) & 1;
              uStack_168 = (ulong)CONCAT14(bVar166,(uint)bVar153);
              local_170 = (ulong)CONCAT14(bVar140,(uint)bVar127);
              uVar103 = CONCAT14((char)(uVar317 >> 0x28),(uint)((byte)(uVar317 >> 0x20) & 1)) &
                        0x1ffffffff;
              bVar212 = (byte)local_190 | (byte)uVar103;
              bVar218 = (byte)(local_190 >> 0x20) | (byte)(uVar103 >> 0x20);
              bVar220 = (byte)uStack_188 | (byte)(uVar317 >> 0x30) & 1;
              bVar222 = (byte)(uStack_188 >> 0x20) | (byte)(uVar317 >> 0x38) & 1;
              uVar103 = CONCAT14((char)(uVar335 >> 8),(uint)((byte)uVar335 & 1)) & 0x1ffffffff;
              bVar128 = (byte)local_1a0 | (byte)uVar103;
              bVar141 = (byte)(local_1a0 >> 0x20) | (byte)(uVar103 >> 0x20);
              bVar154 = (byte)uStack_198 | (byte)(uVar335 >> 0x10) & 1;
              bVar167 = (byte)(uStack_198 >> 0x20) | (byte)(uVar335 >> 0x18) & 1;
              uStack_198 = (ulong)CONCAT14(bVar167,(uint)bVar154);
              local_1a0 = (ulong)CONCAT14(bVar141,(uint)bVar128);
              uStack_188 = (ulong)CONCAT14(bVar222,(uint)bVar220);
              local_190 = (ulong)CONCAT14(bVar218,(uint)bVar212);
              uVar103 = CONCAT14((char)(uVar331 >> 0x28),(uint)((byte)(uVar331 >> 0x20) & 1)) &
                        0x1ffffffff;
              bVar129 = (byte)local_110 | (byte)uVar103;
              bVar142 = (byte)(local_110 >> 0x20) | (byte)(uVar103 >> 0x20);
              bVar155 = (byte)uStack_108 | (byte)(uVar331 >> 0x30) & 1;
              bVar168 = (byte)(uStack_108 >> 0x20) | (byte)(uVar331 >> 0x38) & 1;
              uStack_108 = (ulong)CONCAT14(bVar168,(uint)bVar155);
              local_110 = (ulong)CONCAT14(bVar142,(uint)bVar129);
              uVar103 = CONCAT14((char)(uVar317 >> 8),(uint)((byte)uVar317 & 1)) & 0x1ffffffff;
              uVar83 = (undefined1)((ulong)uStack_128 >> 8);
              uVar84 = (undefined1)((ulong)uStack_128 >> 0x10);
              uVar85 = (undefined1)((ulong)uStack_128 >> 0x18);
              uVar86 = (undefined1)((ulong)uStack_128 >> 0x28);
              uVar88 = (undefined1)((ulong)uStack_128 >> 0x30);
              uVar89 = (undefined1)((ulong)uStack_128 >> 0x38);
              bVar213 = (byte)local_130 | (byte)uVar103;
              bVar219 = (byte)(local_130 >> 0x20) | (byte)(uVar103 >> 0x20);
              auVar333._0_8_ = CONCAT35(0,CONCAT14(bVar219,(uint)bVar213));
              auVar333[8] = (byte)uStack_128 | (byte)(uVar317 >> 0x10) & 1;
              auVar333[9] = uVar83;
              auVar333[10] = uVar84;
              auVar333[0xb] = uVar85;
              auVar333[0xc] = (byte)((ulong)uStack_128 >> 0x20) | (byte)(uVar317 >> 0x18) & 1;
              auVar333[0xd] = uVar86;
              auVar333[0xe] = uVar88;
              auVar333[0xf] = uVar89;
              uVar103 = CONCAT14((char)(uVar331 >> 8),(uint)((byte)uVar331 & 1)) & 0x1ffffffff;
              bVar130 = (byte)local_140 | (byte)uVar103;
              bVar143 = (byte)(local_140 >> 0x20) | (byte)(uVar103 >> 0x20);
              bVar156 = (byte)uStack_138 | (byte)(uVar331 >> 0x10) & 1;
              bVar169 = (byte)(uStack_138 >> 0x20) | (byte)(uVar331 >> 0x18) & 1;
              uStack_138 = (ulong)CONCAT14(bVar169,(uint)bVar156);
              local_140 = (ulong)CONCAT14(bVar143,(uint)bVar130);
              uStack_128 = auVar333._8_8_;
              uVar103 = CONCAT14((char)(uVar228 >> 0x28),(uint)((byte)(uVar228 >> 0x20) & 1)) &
                        0x1ffffffff;
              bVar131 = (byte)local_180 | (byte)uVar103;
              bVar144 = (byte)(local_180 >> 0x20) | (byte)(uVar103 >> 0x20);
              bVar157 = (byte)uStack_178 | (byte)(uVar228 >> 0x30) & 1;
              bVar170 = (byte)(uStack_178 >> 0x20) | (byte)(uVar228 >> 0x38) & 1;
              uStack_178 = (ulong)CONCAT14(bVar170,(uint)bVar157);
              local_180 = (ulong)CONCAT14(bVar144,(uint)bVar131);
              bVar113 = (byte)local_120 | (byte)uVar228 & 1;
              bVar116 = local_120._4_1_ | bVar102 & 1;
              bVar119 = (byte)uStack_118 | (byte)(uVar228 >> 0x10) & 1;
              bVar122 = uStack_118._4_1_ | (byte)(uVar228 >> 0x18) & 1;
              uStack_118 = (ulong)CONCAT14(bVar122,(uint)bVar119);
              local_120 = (ulong)CONCAT14(bVar116,(uint)bVar113);
              uVar2 = CONCAT12((char)(uVar104 >> 0x28),CONCAT11(bVar102,(char)(uVar104 >> 0x20))) &
                      0xff01ff;
              bVar102 = (byte)uVar2;
              bVar82 = bVar82 | bVar102 & 1;
              bVar87 = bVar87 | (byte)(uVar2 >> 0x10) & 1;
              bVar92 = bVar92 | (byte)(uVar104 >> 0x30) & 1;
              bVar97 = bVar97 | (byte)(uVar104 >> 0x38) & 1;
              uVar2 = CONCAT12((char)(uVar104 >> 8),CONCAT11(bVar102,(char)uVar104)) & 0xff01ff;
              bVar102 = (byte)local_150 | (byte)uVar2 & 1;
              bVar107 = local_150._4_1_ | (byte)(uVar2 >> 0x10) & 1;
              bVar108 = (byte)uStack_148 | (byte)(uVar104 >> 0x10) & 1;
              bVar110 = uStack_148._4_1_ | (byte)(uVar104 >> 0x18) & 1;
              uStack_148 = (ulong)CONCAT14(bVar110,(uint)bVar108);
              local_150 = (ulong)CONCAT14(bVar107,(uint)bVar102);
              pcVar58 = pcVar58 + 0x100;
              uVar78 = uVar78 - 0x40;
              puVar67 = puVar67 + 0x20;
              local_130 = auVar333._0_8_;
            } while (uVar74 != uVar78);
            bVar82 = bVar113 | bVar130 | bVar126 | bVar112 | bVar102 | bVar128 | bVar213 | bVar125 |
                     bVar131 | bVar129 | bVar124 | bVar111 | bVar82 | bVar127 | bVar212 | bVar123;
            bVar87 = bVar116 | bVar143 | bVar139 | bVar115 | bVar107 | bVar141 | bVar219 | bVar138 |
                     bVar144 | bVar142 | bVar137 | bVar114 | bVar87 | bVar140 | bVar218 | bVar136;
            bVar92 = bVar119 | bVar156 | bVar152 | bVar118 |
                     bVar108 | bVar154 | auVar333[8] | bVar151 |
                     bVar157 | bVar155 | bVar150 | bVar117 | bVar92 | bVar153 | bVar220 | bVar149;
            bVar97 = bVar122 | bVar169 | bVar165 | bVar121 |
                     bVar110 | bVar167 | auVar333[0xc] | bVar164 |
                     bVar170 | bVar168 | bVar163 | bVar120 | bVar97 | bVar166 | bVar222 | bVar162;
            auVar11._1_3_ = 0;
            auVar11[0] = bVar82;
            auVar11[4] = bVar87;
            auVar11._5_3_ = 0;
            auVar11[8] = bVar92;
            auVar11[9] = uVar83;
            auVar11[10] = uVar84;
            auVar11[0xb] = uVar85;
            auVar11[0xc] = bVar97;
            auVar11[0xd] = uVar86;
            auVar11[0xe] = uVar88;
            auVar11[0xf] = uVar89;
            auVar12._1_3_ = 0;
            auVar12[0] = bVar82;
            auVar12[4] = bVar87;
            auVar12._5_3_ = 0;
            auVar12[8] = bVar92;
            auVar12[9] = uVar83;
            auVar12[10] = uVar84;
            auVar12[0xb] = uVar85;
            auVar12[0xc] = bVar97;
            auVar12[0xd] = uVar86;
            auVar12[0xe] = uVar88;
            auVar12[0xf] = uVar89;
            auVar209 = NEON_ext(auVar11,auVar12,8,1);
            uVar76 = CONCAT13(auVar209[3],
                              CONCAT12(auVar209[2],CONCAT11(auVar209[1],bVar82 | auVar209[0])));
            uVar76 = uVar76 | (uint)(CONCAT17(auVar209[7],
                                              CONCAT16(auVar209[6],
                                                       CONCAT15(auVar209[5],
                                                                CONCAT14(bVar87 | auVar209[4],uVar76
                                                                        )))) >> 0x20);
            lVar72 = lVar73;
            if (uVar74 < 9) goto LAB_1006b57c0;
          }
          uVar74 = 8;
          if ((uVar1 & 7) != 0) {
            uVar74 = uVar1 & 7;
          }
          lVar73 = uVar1 - uVar74;
          bVar82 = 0;
          bVar87 = 0;
          bVar92 = 0;
          bVar97 = 0;
          pcVar58 = (char *)((long)param_10 + lVar72 * 4 + 2);
          lVar79 = (uVar74 + lVar72) - uVar1;
          puVar67 = (undefined8 *)((long)param_8 + lVar72 * 4);
          auVar209 = ZEXT416(uVar76);
          do {
            cVar175 = *pcVar58;
            pcVar51 = pcVar58 + 4;
            pcVar52 = pcVar58 + 8;
            pcVar53 = pcVar58 + 0xc;
            pcVar54 = pcVar58 + 0x10;
            pcVar55 = pcVar58 + 0x14;
            pcVar56 = pcVar58 + 0x18;
            pcVar57 = pcVar58 + 0x1c;
            pcVar58 = pcVar58 + 0x20;
            uVar74 = CONCAT17(~-((int)((ulong)puVar67[3] >> 0x20) == 0),
                              CONCAT16(~-((int)puVar67[3] == 0),
                                       CONCAT15(~-((int)((ulong)puVar67[2] >> 0x20) == 0),
                                                CONCAT14(~-((int)puVar67[2] == 0),
                                                         CONCAT13(~-((int)((ulong)puVar67[1] >> 0x20
                                                                          ) == 0),
                                                                  CONCAT12(~-((int)puVar67[1] == 0),
                                                                           CONCAT11(~-((int)((ulong)
                                                  *puVar67 >> 0x20) == 0),~-((int)*puVar67 == 0)))))
                                               ))) &
                     CONCAT17(-(*pcVar57 == '\0'),
                              CONCAT16(-(*pcVar56 == '\0'),
                                       CONCAT15(-(*pcVar55 == '\0'),
                                                CONCAT14(-(*pcVar54 == '\0'),
                                                         CONCAT13(-(*pcVar53 == '\0'),
                                                                  CONCAT12(-(*pcVar52 == '\0'),
                                                                           CONCAT11(-(*pcVar51 ==
                                                                                     '\0'),-(cVar175
                                                                                            == '\0')
                                                                                   )))))));
            bVar82 = bVar82 | (byte)(uVar74 >> 0x20) & 1;
            bVar87 = bVar87 | (byte)(uVar74 >> 0x28) & 1;
            bVar92 = bVar92 | (byte)(uVar74 >> 0x30) & 1;
            bVar97 = bVar97 | (byte)(uVar74 >> 0x38) & 1;
            auVar106[0] = auVar209[0] | (byte)uVar74 & 1;
            auVar106[1] = auVar209[1];
            auVar106[2] = auVar209[2];
            auVar106[3] = auVar209[3];
            auVar106[4] = auVar209[4] | (byte)(uVar74 >> 8) & 1;
            auVar106._5_3_ = 0;
            auVar106[8] = auVar209[8] | (byte)(uVar74 >> 0x10) & 1;
            auVar106[9] = auVar209[9];
            auVar106[10] = auVar209[10];
            auVar106[0xb] = auVar209[0xb];
            auVar106[0xc] = auVar209[0xc] | (byte)(uVar74 >> 0x18) & 1;
            auVar106[0xd] = auVar209[0xd];
            auVar106[0xe] = auVar209[0xe];
            auVar106[0xf] = auVar209[0xf];
            lVar79 = lVar79 + 8;
            puVar67 = puVar67 + 4;
            auVar209 = auVar106;
          } while (lVar79 != 0);
          bVar82 = auVar106[0] | bVar82;
          bVar87 = auVar106[4] | bVar87;
          auVar3[1] = auVar106[1];
          auVar3[0] = bVar82;
          auVar3[2] = auVar106[2];
          auVar3[3] = auVar106[3];
          auVar3[4] = bVar87;
          auVar3._5_3_ = 0;
          auVar3[8] = auVar106[8] | bVar92;
          auVar3[9] = auVar106[9];
          auVar3[10] = auVar106[10];
          auVar3[0xb] = auVar106[0xb];
          auVar3[0xc] = auVar106[0xc] | bVar97;
          auVar3[0xd] = auVar106[0xd];
          auVar3[0xe] = auVar106[0xe];
          auVar3[0xf] = auVar106[0xf];
          auVar4[1] = auVar106[1];
          auVar4[0] = bVar82;
          auVar4[2] = auVar106[2];
          auVar4[3] = auVar106[3];
          auVar4[4] = bVar87;
          auVar4._5_3_ = 0;
          auVar4[8] = auVar106[8] | bVar92;
          auVar4[9] = auVar106[9];
          auVar4[10] = auVar106[10];
          auVar4[0xb] = auVar106[0xb];
          auVar4[0xc] = auVar106[0xc] | bVar97;
          auVar4[0xd] = auVar106[0xd];
          auVar4[0xe] = auVar106[0xe];
          auVar4[0xf] = auVar106[0xf];
          auVar209 = NEON_ext(auVar3,auVar4,8,1);
          uVar76 = CONCAT13(auVar106[3] | auVar209[3],
                            CONCAT12(auVar106[2] | auVar209[2],
                                     CONCAT11(auVar106[1] | auVar209[1],bVar82 | auVar209[0])));
          uVar76 = uVar76 | (uint)(CONCAT17(auVar209[7],
                                            CONCAT16(auVar209[6],
                                                     CONCAT15(auVar209[5],
                                                              CONCAT14(bVar87 | auVar209[4],uVar76))
                                                    )) >> 0x20);
        }
LAB_1006b57c0:
        lVar72 = uVar1 - lVar73;
        pcVar58 = (char *)((long)param_10 + lVar73 * 4 + 2);
        piVar75 = (int *)((long)param_8 + lVar73 * 4);
        do {
          uVar76 = uVar76 | (*piVar75 != 0 && *pcVar58 == '\0');
          lVar72 = lVar72 + -1;
          pcVar58 = pcVar58 + 4;
          piVar75 = piVar75 + 1;
        } while (lVar72 != 0);
        if (uVar76 != 0) {
          *param_11 = 0;
          goto LAB_1006b5810;
        }
      }
      iVar71 = 1;
    }
    if (iVar71 != 0 && (param_11 != (int *)0x0 && param_12 != 0)) goto LAB_1006b5de4;
  }
LAB_1006b5810:
  FUN_1006b1d88(uVar81,param_4,local_ac[0],1);
  puVar67 = param_8 + 0x80;
  puVar68 = puVar67;
  FUN_1006b43a0(puVar67,param_8,local_ac[0],uVar81,param_8 + 0x100,0x1000);
  uVar76 = local_ac[0];
  if ((undefined8 *)0xffffffffffffff88 < puVar68) {
    return;
  }
  _bzero((undefined1 *)((long)puVar67 + (ulong)(local_ac[0] + 1) * 4),
         (ulong)(local_ac[0] + 1) * -4 + 0x400);
  puVar69 = param_1;
  FUN_1006b3a38(param_1,param_2,puVar67,uVar76,puVar68);
  if ((undefined1 *)0xffffffffffffff88 < puVar69) {
    return;
  }
  if (param_11 == (int *)0x0) {
    if (param_4 <= puVar69 + 0xc) {
      return;
    }
  }
  else {
    if (*param_11 == 0) {
      if (param_4 <= puVar69 + 0xc) {
        return;
      }
    }
    else {
      if ((int)local_ac[0] < 0) goto LAB_1006b5de4;
      uVar81 = (ulong)local_ac[0] + 1;
      if (local_ac[0] < 8) {
        lVar77 = 0;
        uVar74 = 0;
      }
      else {
        if (local_ac[0] < 0x20) {
          uVar74 = 0;
          lVar73 = 0;
        }
        else {
          uVar83 = 0;
          uVar84 = 0;
          uVar85 = 0;
          uVar86 = 0;
          uVar88 = 0;
          uVar89 = 0;
          uVar90 = 0;
          uVar91 = 0;
          uVar93 = 0;
          uVar94 = 0;
          uVar95 = 0;
          uVar96 = 0;
          uVar98 = 0;
          uVar99 = 0;
          uVar100 = 0;
          uVar101 = 0;
          lVar79 = 0;
          lVar105 = 0;
          lVar73 = 0;
          lVar72 = 0;
          uVar1 = 0x20;
          if ((uVar81 & 0x1f) != 0) {
            uVar1 = uVar81 & 0x1f;
          }
          uVar132 = 0;
          uVar133 = 0;
          uVar134 = 0;
          uVar135 = 0;
          uVar145 = 0;
          uVar146 = 0;
          uVar147 = 0;
          uVar148 = 0;
          uVar158 = 0;
          uVar159 = 0;
          uVar160 = 0;
          uVar161 = 0;
          uVar171 = 0;
          uVar172 = 0;
          uVar173 = 0;
          uVar174 = 0;
          lVar77 = uVar81 - uVar1;
          puVar66 = (undefined1 *)((long)param_10 + 0x42);
          piVar75 = (int *)(param_8 + 8);
          auVar48._9_7_ = _UNK_10084e999;
          auVar48._0_9_ = _DAT_10084e990;
          uVar176 = 0;
          uVar177 = 0;
          uVar178 = 0;
          uVar179 = 0;
          uVar180 = 0;
          uVar181 = 0;
          uVar182 = 0;
          uVar183 = 0;
          uVar184 = 0;
          uVar185 = 0;
          uVar186 = 0;
          uVar187 = 0;
          uVar188 = 0;
          uVar189 = 0;
          uVar190 = 0;
          uVar191 = 0;
          lVar207 = 0;
          lVar211 = 0;
          uVar232 = 0;
          uVar192 = 0;
          uVar193 = 0;
          uVar194 = 0;
          uVar195 = 0;
          uVar196 = 0;
          uVar197 = 0;
          uVar198 = 0;
          uVar199 = 0;
          uVar200 = 0;
          uVar201 = 0;
          uVar202 = 0;
          uVar203 = 0;
          uVar204 = 0;
          uVar205 = 0;
          uVar206 = 0;
          lVar214 = 0;
          lVar221 = 0;
          uVar231 = 0;
          uVar234 = 0;
          uVar236 = 0;
          uVar238 = 0;
          uVar240 = 0;
          uVar242 = 0;
          uVar244 = 0;
          uVar246 = 0;
          in_register_00005208 = '\0';
          in_register_00005209 = '\0';
          in_register_0000520a = '\0';
          in_register_0000520b = '\0';
          in_register_0000520c = '\0';
          in_register_0000520d = '\0';
          in_register_0000520e = '\0';
          in_register_0000520f = '\0';
          uVar249 = 0;
          uVar250 = 0;
          uVar251 = 0;
          uVar252 = 0;
          uVar253 = 0;
          uVar254 = 0;
          uVar255 = 0;
          uVar256 = 0;
          uVar257 = 0;
          uVar258 = 0;
          uVar259 = 0;
          uVar260 = 0;
          uVar261 = 0;
          uVar262 = 0;
          uVar263 = 0;
          uVar264 = 0;
          lVar265 = 0;
          lVar266 = 0;
          lVar267 = 0;
          lVar268 = 0;
          lVar247 = 0;
          lVar248 = 0;
          uVar294 = 0;
          uVar296 = 0;
          uVar298 = 0;
          uVar300 = 0;
          uVar302 = 0;
          uVar304 = 0;
          uVar306 = 0;
          uVar308 = 0;
          uVar309 = 0;
          uVar310 = 0;
          uVar311 = 0;
          uVar312 = 0;
          uVar313 = 0;
          uVar314 = 0;
          uVar315 = 0;
          uVar316 = 0;
          uVar269 = 0;
          uVar270 = 0;
          uVar271 = 0;
          uVar272 = 0;
          uVar273 = 0;
          uVar274 = 0;
          uVar275 = 0;
          uVar276 = 0;
          uVar277 = 0;
          uVar278 = 0;
          uVar279 = 0;
          uVar280 = 0;
          uVar281 = 0;
          uVar282 = 0;
          uVar283 = 0;
          uVar284 = 0;
          lVar318 = 0;
          lVar319 = 0;
          lVar109 = lVar77;
          do {
            auVar323[0] = puVar66[-0x40];
            auVar323[1] = puVar66[-0x3c];
            auVar323[2] = puVar66[-0x38];
            auVar323[3] = puVar66[-0x34];
            auVar323[4] = puVar66[-0x30];
            auVar323[5] = puVar66[-0x2c];
            auVar323[6] = puVar66[-0x28];
            auVar323[7] = puVar66[-0x24];
            auVar323[8] = puVar66[-0x20];
            auVar323[9] = puVar66[-0x1c];
            auVar323[10] = puVar66[-0x18];
            auVar323[0xb] = puVar66[-0x14];
            auVar323[0xc] = puVar66[-0x10];
            auVar323[0xd] = puVar66[-0xc];
            auVar323[0xe] = puVar66[-8];
            auVar323[0xf] = puVar66[-4];
            auVar224[0] = *puVar66;
            auVar224[1] = puVar66[4];
            auVar224[2] = puVar66[8];
            auVar224[3] = puVar66[0xc];
            auVar224[4] = puVar66[0x10];
            auVar224[5] = puVar66[0x14];
            auVar224[6] = puVar66[0x18];
            auVar224[7] = puVar66[0x1c];
            auVar224[8] = puVar66[0x20];
            auVar224[9] = puVar66[0x24];
            auVar224[10] = puVar66[0x28];
            auVar224[0xb] = puVar66[0x2c];
            auVar224[0xc] = puVar66[0x30];
            auVar224[0xd] = puVar66[0x34];
            auVar224[0xe] = puVar66[0x38];
            auVar224[0xf] = puVar66[0x3c];
            auVar216 = a64_TBL(ZEXT816(0),auVar323,auVar48);
            auVar32[9] = 0xff;
            auVar32._0_9_ = _DAT_10084e9a0;
            auVar32[10] = 0xff;
            auVar32[0xb] = 0xff;
            auVar32[0xc] = 7;
            auVar32[0xd] = 0xff;
            auVar32[0xe] = 0xff;
            auVar32[0xf] = 0xff;
            auVar229 = a64_TBL(ZEXT816(0),auVar323,auVar32);
            auVar36[9] = 0xff;
            auVar36._0_9_ = _DAT_10084e9b0;
            auVar36[10] = 0xff;
            auVar36[0xb] = 0xff;
            auVar36[0xc] = 0xb;
            auVar36[0xd] = 0xff;
            auVar36[0xe] = 0xff;
            auVar36[0xf] = 0xff;
            auVar230 = a64_TBL(ZEXT816(0),auVar323,auVar36);
            auVar42[9] = 0xff;
            auVar42._0_9_ = _DAT_10084e9c0;
            auVar42[10] = 0xff;
            auVar42[0xb] = 0xff;
            auVar42[0xc] = 0xf;
            auVar42[0xd] = 0xff;
            auVar42[0xe] = 0xff;
            auVar42[0xf] = 0xff;
            auVar326 = a64_TBL(ZEXT816(0),auVar323,auVar42);
            auVar43[9] = 0xff;
            auVar43._0_9_ = _DAT_10084e9c0;
            auVar43[10] = 0xff;
            auVar43[0xb] = 0xff;
            auVar43[0xc] = 0xf;
            auVar43[0xd] = 0xff;
            auVar43[0xe] = 0xff;
            auVar43[0xf] = 0xff;
            auVar329 = a64_TBL(ZEXT816(0),auVar224,auVar43);
            auVar333 = a64_TBL(ZEXT816(0),auVar224,auVar48);
            auVar33[9] = 0xff;
            auVar33._0_9_ = _DAT_10084e9a0;
            auVar33[10] = 0xff;
            auVar33[0xb] = 0xff;
            auVar33[0xc] = 7;
            auVar33[0xd] = 0xff;
            auVar33[0xe] = 0xff;
            auVar33[0xf] = 0xff;
            auVar337 = a64_TBL(ZEXT816(0),auVar224,auVar33);
            auVar37[9] = 0xff;
            auVar37._0_9_ = _DAT_10084e9b0;
            auVar37[10] = 0xff;
            auVar37[0xb] = 0xff;
            auVar37[0xc] = 0xb;
            auVar37[0xd] = 0xff;
            auVar37[0xe] = 0xff;
            auVar37[0xf] = 0xff;
            auVar209 = a64_TBL(ZEXT816(0),auVar224,auVar37);
            auVar324._0_4_ = (int)*(undefined8 *)(piVar75 + -4) * auVar326._0_4_;
            auVar324._4_4_ = (int)((ulong)*(undefined8 *)(piVar75 + -4) >> 0x20) * auVar326._4_4_;
            auVar324._8_4_ = (int)*(undefined8 *)(piVar75 + -2) * auVar326._8_4_;
            auVar324._12_4_ = (int)((ulong)*(undefined8 *)(piVar75 + -2) >> 0x20) * auVar326._12_4_;
            auVar225._0_4_ = piVar75[8] * auVar209._0_4_;
            auVar225._4_4_ = piVar75[9] * auVar209._4_4_;
            auVar225._8_4_ = piVar75[10] * auVar209._8_4_;
            auVar225._12_4_ = piVar75[0xb] * auVar209._12_4_;
            auVar336._0_4_ = piVar75[4] * auVar337._0_4_;
            auVar336._4_4_ = piVar75[5] * auVar337._4_4_;
            auVar336._8_4_ = piVar75[6] * auVar337._8_4_;
            auVar336._12_4_ = piVar75[7] * auVar337._12_4_;
            auVar332._0_4_ = *piVar75 * auVar333._0_4_;
            auVar332._4_4_ = piVar75[1] * auVar333._4_4_;
            auVar332._8_4_ = piVar75[2] * auVar333._8_4_;
            auVar332._12_4_ = piVar75[3] * auVar333._12_4_;
            auVar328._0_4_ = piVar75[0xc] * auVar329._0_4_;
            auVar328._4_4_ = piVar75[0xd] * auVar329._4_4_;
            auVar328._8_4_ = piVar75[0xe] * auVar329._8_4_;
            auVar328._12_4_ = piVar75[0xf] * auVar329._12_4_;
            lVar207 = lVar207 + (ulong)(uint)((int)*(undefined8 *)(piVar75 + -6) * auVar230._8_4_);
            lVar211 = lVar211 + (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar75 + -6) >> 0x20) *
                                             auVar230._12_4_);
            lVar17 = CONCAT17(uVar183,CONCAT16(uVar182,CONCAT15(uVar181,CONCAT14(uVar180,CONCAT13(
                                                  uVar179,CONCAT12(uVar178,CONCAT11(uVar177,uVar176)
                                                                  )))))) +
                     (ulong)(uint)((int)*(undefined8 *)(piVar75 + -8) * auVar230._0_4_);
            uVar176 = (undefined1)lVar17;
            uVar177 = (undefined1)((ulong)lVar17 >> 8);
            uVar178 = (undefined1)((ulong)lVar17 >> 0x10);
            uVar179 = (undefined1)((ulong)lVar17 >> 0x18);
            uVar180 = (undefined1)((ulong)lVar17 >> 0x20);
            uVar181 = (undefined1)((ulong)lVar17 >> 0x28);
            uVar182 = (undefined1)((ulong)lVar17 >> 0x30);
            uVar183 = (undefined1)((ulong)lVar17 >> 0x38);
            lVar18 = CONCAT17(uVar191,CONCAT16(uVar190,CONCAT15(uVar189,CONCAT14(uVar188,CONCAT13(
                                                  uVar187,CONCAT12(uVar186,CONCAT11(uVar185,uVar184)
                                                                  )))))) +
                     (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar75 + -8) >> 0x20) *
                                  auVar230._4_4_);
            uVar184 = (undefined1)lVar18;
            uVar185 = (undefined1)((ulong)lVar18 >> 8);
            uVar186 = (undefined1)((ulong)lVar18 >> 0x10);
            uVar187 = (undefined1)((ulong)lVar18 >> 0x18);
            uVar188 = (undefined1)((ulong)lVar18 >> 0x20);
            uVar189 = (undefined1)((ulong)lVar18 >> 0x28);
            uVar190 = (undefined1)((ulong)lVar18 >> 0x30);
            uVar191 = (undefined1)((ulong)lVar18 >> 0x38);
            lVar13 = CONCAT17(uVar148,CONCAT16(uVar147,CONCAT15(uVar146,CONCAT14(uVar145,CONCAT13(
                                                  uVar135,CONCAT12(uVar134,CONCAT11(uVar133,uVar132)
                                                                  )))))) +
                     (ulong)(uint)((int)*(undefined8 *)(piVar75 + -10) * auVar229._8_4_);
            uVar132 = (undefined1)lVar13;
            uVar133 = (undefined1)((ulong)lVar13 >> 8);
            uVar134 = (undefined1)((ulong)lVar13 >> 0x10);
            uVar135 = (undefined1)((ulong)lVar13 >> 0x18);
            uVar145 = (undefined1)((ulong)lVar13 >> 0x20);
            uVar146 = (undefined1)((ulong)lVar13 >> 0x28);
            uVar147 = (undefined1)((ulong)lVar13 >> 0x30);
            uVar148 = (undefined1)((ulong)lVar13 >> 0x38);
            lVar14 = CONCAT17(uVar174,CONCAT16(uVar173,CONCAT15(uVar172,CONCAT14(uVar171,CONCAT13(
                                                  uVar161,CONCAT12(uVar160,CONCAT11(uVar159,uVar158)
                                                                  )))))) +
                     (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar75 + -10) >> 0x20) *
                                  auVar229._12_4_);
            uVar158 = (undefined1)lVar14;
            uVar159 = (undefined1)((ulong)lVar14 >> 8);
            uVar160 = (undefined1)((ulong)lVar14 >> 0x10);
            uVar161 = (undefined1)((ulong)lVar14 >> 0x18);
            uVar171 = (undefined1)((ulong)lVar14 >> 0x20);
            uVar172 = (undefined1)((ulong)lVar14 >> 0x28);
            uVar173 = (undefined1)((ulong)lVar14 >> 0x30);
            uVar174 = (undefined1)((ulong)lVar14 >> 0x38);
            lVar73 = lVar73 + (ulong)(uint)((int)*(undefined8 *)(piVar75 + -0xc) * auVar229._0_4_);
            lVar72 = lVar72 + (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar75 + -0xc) >> 0x20) *
                                           auVar229._4_4_);
            lVar79 = lVar79 + (ulong)(uint)((int)*(undefined8 *)(piVar75 + -0xe) * auVar216._8_4_);
            lVar105 = lVar105 + (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar75 + -0xe) >> 0x20)
                                             * auVar216._12_4_);
            lVar321 = CONCAT17(uVar91,CONCAT16(uVar90,CONCAT15(uVar89,CONCAT14(uVar88,CONCAT13(
                                                  uVar86,CONCAT12(uVar85,CONCAT11(uVar84,uVar83)))))
                                              )) +
                      (ulong)(uint)((int)*(undefined8 *)(piVar75 + -0x10) * auVar216._0_4_);
            uVar83 = (undefined1)lVar321;
            uVar84 = (undefined1)((ulong)lVar321 >> 8);
            uVar85 = (undefined1)((ulong)lVar321 >> 0x10);
            uVar86 = (undefined1)((ulong)lVar321 >> 0x18);
            uVar88 = (undefined1)((ulong)lVar321 >> 0x20);
            uVar89 = (undefined1)((ulong)lVar321 >> 0x28);
            uVar90 = (undefined1)((ulong)lVar321 >> 0x30);
            uVar91 = (undefined1)((ulong)lVar321 >> 0x38);
            lVar322 = CONCAT17(uVar101,CONCAT16(uVar100,CONCAT15(uVar99,CONCAT14(uVar98,CONCAT13(
                                                  uVar96,CONCAT12(uVar95,CONCAT11(uVar94,uVar93)))))
                                               )) +
                      (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar75 + -0x10) >> 0x20) *
                                   auVar216._4_4_);
            uVar93 = (undefined1)lVar322;
            uVar94 = (undefined1)((ulong)lVar322 >> 8);
            uVar95 = (undefined1)((ulong)lVar322 >> 0x10);
            uVar96 = (undefined1)((ulong)lVar322 >> 0x18);
            uVar98 = (undefined1)((ulong)lVar322 >> 0x20);
            uVar99 = (undefined1)((ulong)lVar322 >> 0x28);
            uVar100 = (undefined1)((ulong)lVar322 >> 0x30);
            uVar101 = (undefined1)((ulong)lVar322 >> 0x38);
            lVar19 = CONCAT17(uVar198,CONCAT16(uVar197,CONCAT15(uVar196,CONCAT14(uVar195,CONCAT13(
                                                  uVar194,CONCAT12(uVar193,CONCAT11(uVar192,uVar232)
                                                                  )))))) + (ulong)auVar324._0_4_;
            uVar232 = (undefined1)lVar19;
            uVar192 = (undefined1)((ulong)lVar19 >> 8);
            uVar193 = (undefined1)((ulong)lVar19 >> 0x10);
            uVar194 = (undefined1)((ulong)lVar19 >> 0x18);
            uVar195 = (undefined1)((ulong)lVar19 >> 0x20);
            uVar196 = (undefined1)((ulong)lVar19 >> 0x28);
            uVar197 = (undefined1)((ulong)lVar19 >> 0x30);
            uVar198 = (undefined1)((ulong)lVar19 >> 0x38);
            lVar20 = CONCAT17(uVar206,CONCAT16(uVar205,CONCAT15(uVar204,CONCAT14(uVar203,CONCAT13(
                                                  uVar202,CONCAT12(uVar201,CONCAT11(uVar200,uVar199)
                                                                  )))))) + (ulong)auVar324._4_4_;
            uVar199 = (undefined1)lVar20;
            uVar200 = (undefined1)((ulong)lVar20 >> 8);
            uVar201 = (undefined1)((ulong)lVar20 >> 0x10);
            uVar202 = (undefined1)((ulong)lVar20 >> 0x18);
            uVar203 = (undefined1)((ulong)lVar20 >> 0x20);
            uVar204 = (undefined1)((ulong)lVar20 >> 0x28);
            uVar205 = (undefined1)((ulong)lVar20 >> 0x30);
            uVar206 = (undefined1)((ulong)lVar20 >> 0x38);
            lVar214 = lVar214 + (auVar324._8_8_ & 0xffffffff);
            lVar221 = lVar221 + (auVar324._8_8_ >> 0x20);
            lVar46 = CONCAT17(uVar308,CONCAT16(uVar306,CONCAT15(uVar304,CONCAT14(uVar302,CONCAT13(
                                                  uVar300,CONCAT12(uVar298,CONCAT11(uVar296,uVar294)
                                                                  )))))) +
                     (auVar225._8_8_ & 0xffffffff);
            uVar294 = (undefined1)lVar46;
            uVar296 = (undefined1)((ulong)lVar46 >> 8);
            uVar298 = (undefined1)((ulong)lVar46 >> 0x10);
            uVar300 = (undefined1)((ulong)lVar46 >> 0x18);
            uVar302 = (undefined1)((ulong)lVar46 >> 0x20);
            uVar304 = (undefined1)((ulong)lVar46 >> 0x28);
            uVar306 = (undefined1)((ulong)lVar46 >> 0x30);
            uVar308 = (undefined1)((ulong)lVar46 >> 0x38);
            lVar47 = CONCAT17(uVar316,CONCAT16(uVar315,CONCAT15(uVar314,CONCAT14(uVar313,CONCAT13(
                                                  uVar312,CONCAT12(uVar311,CONCAT11(uVar310,uVar309)
                                                                  )))))) + (auVar225._8_8_ >> 0x20);
            uVar309 = (undefined1)lVar47;
            uVar310 = (undefined1)((ulong)lVar47 >> 8);
            uVar311 = (undefined1)((ulong)lVar47 >> 0x10);
            uVar312 = (undefined1)((ulong)lVar47 >> 0x18);
            uVar313 = (undefined1)((ulong)lVar47 >> 0x20);
            uVar314 = (undefined1)((ulong)lVar47 >> 0x28);
            uVar315 = (undefined1)((ulong)lVar47 >> 0x30);
            uVar316 = (undefined1)((ulong)lVar47 >> 0x38);
            lVar247 = lVar247 + (ulong)auVar225._0_4_;
            lVar248 = lVar248 + (ulong)auVar225._4_4_;
            lVar267 = lVar267 + (auVar336._8_8_ & 0xffffffff);
            lVar268 = lVar268 + (auVar336._8_8_ >> 0x20);
            lVar265 = lVar265 + (ulong)auVar336._0_4_;
            lVar266 = lVar266 + (ulong)auVar336._4_4_;
            lVar38 = CONCAT17(uVar256,CONCAT16(uVar255,CONCAT15(uVar254,CONCAT14(uVar253,CONCAT13(
                                                  uVar252,CONCAT12(uVar251,CONCAT11(uVar250,uVar249)
                                                                  )))))) +
                     (auVar332._8_8_ & 0xffffffff);
            uVar249 = (undefined1)lVar38;
            uVar250 = (undefined1)((ulong)lVar38 >> 8);
            uVar251 = (undefined1)((ulong)lVar38 >> 0x10);
            uVar252 = (undefined1)((ulong)lVar38 >> 0x18);
            uVar253 = (undefined1)((ulong)lVar38 >> 0x20);
            uVar254 = (undefined1)((ulong)lVar38 >> 0x28);
            uVar255 = (undefined1)((ulong)lVar38 >> 0x30);
            uVar256 = (undefined1)((ulong)lVar38 >> 0x38);
            lVar39 = CONCAT17(uVar264,CONCAT16(uVar263,CONCAT15(uVar262,CONCAT14(uVar261,CONCAT13(
                                                  uVar260,CONCAT12(uVar259,CONCAT11(uVar258,uVar257)
                                                                  )))))) + (auVar332._8_8_ >> 0x20);
            uVar257 = (undefined1)lVar39;
            uVar258 = (undefined1)((ulong)lVar39 >> 8);
            uVar259 = (undefined1)((ulong)lVar39 >> 0x10);
            uVar260 = (undefined1)((ulong)lVar39 >> 0x18);
            uVar261 = (undefined1)((ulong)lVar39 >> 0x20);
            uVar262 = (undefined1)((ulong)lVar39 >> 0x28);
            uVar263 = (undefined1)((ulong)lVar39 >> 0x30);
            uVar264 = (undefined1)((ulong)lVar39 >> 0x38);
            lVar27 = CONCAT17(uVar246,CONCAT16(uVar244,CONCAT15(uVar242,CONCAT14(uVar240,CONCAT13(
                                                  uVar238,CONCAT12(uVar236,CONCAT11(uVar234,uVar231)
                                                                  )))))) + (ulong)auVar332._0_4_;
            uVar231 = (undefined1)lVar27;
            uVar234 = (undefined1)((ulong)lVar27 >> 8);
            uVar236 = (undefined1)((ulong)lVar27 >> 0x10);
            uVar238 = (undefined1)((ulong)lVar27 >> 0x18);
            uVar240 = (undefined1)((ulong)lVar27 >> 0x20);
            uVar242 = (undefined1)((ulong)lVar27 >> 0x28);
            uVar244 = (undefined1)((ulong)lVar27 >> 0x30);
            uVar246 = (undefined1)((ulong)lVar27 >> 0x38);
            lVar29 = CONCAT17(in_register_0000520f,
                              CONCAT16(in_register_0000520e,
                                       CONCAT15(in_register_0000520d,
                                                CONCAT14(in_register_0000520c,
                                                         CONCAT13(in_register_0000520b,
                                                                  CONCAT12(in_register_0000520a,
                                                                           CONCAT11(
                                                  in_register_00005209,in_register_00005208))))))) +
                     (ulong)auVar332._4_4_;
            in_register_00005208 = (char)lVar29;
            in_register_00005209 = (char)((ulong)lVar29 >> 8);
            in_register_0000520a = (char)((ulong)lVar29 >> 0x10);
            in_register_0000520b = (char)((ulong)lVar29 >> 0x18);
            in_register_0000520c = (char)((ulong)lVar29 >> 0x20);
            in_register_0000520d = (char)((ulong)lVar29 >> 0x28);
            in_register_0000520e = (char)((ulong)lVar29 >> 0x30);
            in_register_0000520f = (char)((ulong)lVar29 >> 0x38);
            lVar44 = CONCAT17(uVar276,CONCAT16(uVar275,CONCAT15(uVar274,CONCAT14(uVar273,CONCAT13(
                                                  uVar272,CONCAT12(uVar271,CONCAT11(uVar270,uVar269)
                                                                  )))))) + (ulong)auVar328._0_4_;
            uVar269 = (undefined1)lVar44;
            uVar270 = (undefined1)((ulong)lVar44 >> 8);
            uVar271 = (undefined1)((ulong)lVar44 >> 0x10);
            uVar272 = (undefined1)((ulong)lVar44 >> 0x18);
            uVar273 = (undefined1)((ulong)lVar44 >> 0x20);
            uVar274 = (undefined1)((ulong)lVar44 >> 0x28);
            uVar275 = (undefined1)((ulong)lVar44 >> 0x30);
            uVar276 = (undefined1)((ulong)lVar44 >> 0x38);
            lVar45 = CONCAT17(uVar284,CONCAT16(uVar283,CONCAT15(uVar282,CONCAT14(uVar281,CONCAT13(
                                                  uVar280,CONCAT12(uVar279,CONCAT11(uVar278,uVar277)
                                                                  )))))) + (ulong)auVar328._4_4_;
            uVar277 = (undefined1)lVar45;
            uVar278 = (undefined1)((ulong)lVar45 >> 8);
            uVar279 = (undefined1)((ulong)lVar45 >> 0x10);
            uVar280 = (undefined1)((ulong)lVar45 >> 0x18);
            uVar281 = (undefined1)((ulong)lVar45 >> 0x20);
            uVar282 = (undefined1)((ulong)lVar45 >> 0x28);
            uVar283 = (undefined1)((ulong)lVar45 >> 0x30);
            uVar284 = (undefined1)((ulong)lVar45 >> 0x38);
            lVar318 = lVar318 + (auVar328._8_8_ & 0xffffffff);
            lVar319 = lVar319 + (ulong)auVar328._12_4_;
            puVar66 = puVar66 + 0x80;
            piVar75 = piVar75 + 0x20;
            lVar109 = lVar109 + -0x20;
          } while (lVar109 != 0);
          uVar74 = lVar27 + lVar321 + lVar247 + lVar17 + lVar265 + lVar73 + lVar44 + lVar19 +
                   lVar38 + lVar79 + lVar46 + lVar207 + lVar267 + lVar13 + lVar318 + lVar214 +
                   lVar29 + lVar322 + lVar248 + lVar18 + lVar266 + lVar72 + lVar45 + lVar20 +
                   lVar39 + lVar105 + lVar47 + lVar211 + lVar268 + lVar14 + lVar319 + lVar221;
          lVar73 = lVar77;
          if (uVar1 < 9) goto LAB_1006b5b14;
        }
        uVar1 = 8;
        if ((uVar81 & 7) != 0) {
          uVar1 = uVar81 & 7;
        }
        lVar77 = uVar81 - uVar1;
        uVar83 = 0;
        uVar84 = 0;
        uVar85 = 0;
        uVar86 = 0;
        uVar88 = 0;
        uVar89 = 0;
        uVar90 = 0;
        uVar91 = 0;
        uVar93 = 0;
        uVar94 = 0;
        uVar95 = 0;
        uVar96 = 0;
        uVar98 = 0;
        uVar99 = 0;
        uVar100 = 0;
        uVar101 = 0;
        lVar79 = 0;
        puVar66 = (undefined1 *)((long)param_10 + lVar73 * 4 + 2);
        lVar72 = (uVar1 + lVar73) - uVar81;
        auVar49._9_7_ = _UNK_10084e999;
        auVar49._0_9_ = _DAT_10084e990;
        uVar132 = 0;
        uVar133 = 0;
        uVar134 = 0;
        uVar135 = 0;
        uVar145 = 0;
        uVar146 = 0;
        uVar147 = 0;
        uVar148 = 0;
        uVar158 = 0;
        uVar159 = 0;
        uVar160 = 0;
        uVar161 = 0;
        uVar171 = 0;
        uVar172 = 0;
        uVar173 = 0;
        uVar174 = 0;
        uVar176 = 0;
        uVar177 = 0;
        uVar178 = 0;
        uVar179 = 0;
        uVar180 = 0;
        uVar181 = 0;
        uVar182 = 0;
        uVar183 = 0;
        uVar184 = 0;
        uVar185 = 0;
        uVar186 = 0;
        uVar187 = 0;
        uVar188 = 0;
        uVar189 = 0;
        uVar190 = 0;
        uVar191 = 0;
        puVar68 = (undefined8 *)((long)param_8 + lVar73 * 4);
        do {
          uVar232 = *puVar66;
          puVar59 = puVar66 + 4;
          puVar60 = puVar66 + 8;
          puVar61 = puVar66 + 0xc;
          puVar62 = puVar66 + 0x10;
          puVar63 = puVar66 + 0x14;
          puVar64 = puVar66 + 0x18;
          puVar65 = puVar66 + 0x1c;
          puVar66 = puVar66 + 0x20;
          auVar25[1] = *puVar59;
          auVar25[0] = uVar232;
          auVar25[2] = *puVar60;
          auVar25[3] = *puVar61;
          auVar25[4] = *puVar62;
          auVar25[5] = *puVar63;
          auVar25[6] = *puVar64;
          auVar25[7] = *puVar65;
          auVar25[8] = in_register_00005208;
          auVar25[9] = in_register_00005209;
          auVar25[10] = in_register_0000520a;
          auVar25[0xb] = in_register_0000520b;
          auVar25[0xc] = in_register_0000520c;
          auVar25[0xd] = in_register_0000520d;
          auVar25[0xe] = in_register_0000520e;
          auVar25[0xf] = in_register_0000520f;
          auVar209 = a64_TBL(ZEXT816(0),auVar25,auVar49);
          auVar16[9] = 0xff;
          auVar16._0_9_ = _DAT_10084e9a0;
          auVar16[10] = 0xff;
          auVar16[0xb] = 0xff;
          auVar16[0xc] = 7;
          auVar16[0xd] = 0xff;
          auVar16[0xe] = 0xff;
          auVar16[0xf] = 0xff;
          auVar26[1] = *puVar59;
          auVar26[0] = uVar232;
          auVar26[2] = *puVar60;
          auVar26[3] = *puVar61;
          auVar26[4] = *puVar62;
          auVar26[5] = *puVar63;
          auVar26[6] = *puVar64;
          auVar26[7] = *puVar65;
          auVar26[8] = in_register_00005208;
          auVar26[9] = in_register_00005209;
          auVar26[10] = in_register_0000520a;
          auVar26[0xb] = in_register_0000520b;
          auVar26[0xc] = in_register_0000520c;
          auVar26[0xd] = in_register_0000520d;
          auVar26[0xe] = in_register_0000520e;
          auVar26[0xf] = in_register_0000520f;
          auVar216 = a64_TBL(ZEXT816(0),auVar26,auVar16);
          uVar28 = puVar68[1];
          in_register_00005208 = (char)uVar28;
          in_register_00005209 = (char)((ulong)uVar28 >> 8);
          in_register_0000520a = (char)((ulong)uVar28 >> 0x10);
          in_register_0000520b = (char)((ulong)uVar28 >> 0x18);
          in_register_0000520c = (char)((ulong)uVar28 >> 0x20);
          in_register_0000520d = (char)((ulong)uVar28 >> 0x28);
          in_register_0000520e = (char)((ulong)uVar28 >> 0x30);
          in_register_0000520f = (char)((ulong)uVar28 >> 0x38);
          auVar215._0_4_ = (int)puVar68[2] * auVar216._0_4_;
          auVar215._4_4_ = (int)((ulong)puVar68[2] >> 0x20) * auVar216._4_4_;
          auVar215._8_4_ = (int)puVar68[3] * auVar216._8_4_;
          auVar215._12_4_ = (int)((ulong)puVar68[3] >> 0x20) * auVar216._12_4_;
          auVar208._0_4_ = (int)*puVar68 * auVar209._0_4_;
          auVar208._4_4_ = (int)((ulong)*puVar68 >> 0x20) * auVar209._4_4_;
          auVar208._8_4_ = (int)uVar28 * auVar209._8_4_;
          auVar208._12_4_ = (int)((ulong)uVar28 >> 0x20) * auVar209._12_4_;
          lVar211 = CONCAT17(uVar183,CONCAT16(uVar182,CONCAT15(uVar181,CONCAT14(uVar180,CONCAT13(
                                                  uVar179,CONCAT12(uVar178,CONCAT11(uVar177,uVar176)
                                                                  )))))) +
                    (auVar215._8_8_ & 0xffffffff);
          uVar176 = (undefined1)lVar211;
          uVar177 = (undefined1)((ulong)lVar211 >> 8);
          uVar178 = (undefined1)((ulong)lVar211 >> 0x10);
          uVar179 = (undefined1)((ulong)lVar211 >> 0x18);
          uVar180 = (undefined1)((ulong)lVar211 >> 0x20);
          uVar181 = (undefined1)((ulong)lVar211 >> 0x28);
          uVar182 = (undefined1)((ulong)lVar211 >> 0x30);
          uVar183 = (undefined1)((ulong)lVar211 >> 0x38);
          lVar214 = CONCAT17(uVar191,CONCAT16(uVar190,CONCAT15(uVar189,CONCAT14(uVar188,CONCAT13(
                                                  uVar187,CONCAT12(uVar186,CONCAT11(uVar185,uVar184)
                                                                  )))))) + (auVar215._8_8_ >> 0x20);
          uVar184 = (undefined1)lVar214;
          uVar185 = (undefined1)((ulong)lVar214 >> 8);
          uVar186 = (undefined1)((ulong)lVar214 >> 0x10);
          uVar187 = (undefined1)((ulong)lVar214 >> 0x18);
          uVar188 = (undefined1)((ulong)lVar214 >> 0x20);
          uVar189 = (undefined1)((ulong)lVar214 >> 0x28);
          uVar190 = (undefined1)((ulong)lVar214 >> 0x30);
          uVar191 = (undefined1)((ulong)lVar214 >> 0x38);
          lVar73 = CONCAT17(uVar91,CONCAT16(uVar90,CONCAT15(uVar89,CONCAT14(uVar88,CONCAT13(uVar86,
                                                  CONCAT12(uVar85,CONCAT11(uVar84,uVar83))))))) +
                   (auVar208._8_8_ & 0xffffffff);
          uVar83 = (undefined1)lVar73;
          uVar84 = (undefined1)((ulong)lVar73 >> 8);
          uVar85 = (undefined1)((ulong)lVar73 >> 0x10);
          uVar86 = (undefined1)((ulong)lVar73 >> 0x18);
          uVar88 = (undefined1)((ulong)lVar73 >> 0x20);
          uVar89 = (undefined1)((ulong)lVar73 >> 0x28);
          uVar90 = (undefined1)((ulong)lVar73 >> 0x30);
          uVar91 = (undefined1)((ulong)lVar73 >> 0x38);
          lVar105 = CONCAT17(uVar101,CONCAT16(uVar100,CONCAT15(uVar99,CONCAT14(uVar98,CONCAT13(
                                                  uVar96,CONCAT12(uVar95,CONCAT11(uVar94,uVar93)))))
                                             )) + (ulong)auVar208._12_4_;
          uVar93 = (undefined1)lVar105;
          uVar94 = (undefined1)((ulong)lVar105 >> 8);
          uVar95 = (undefined1)((ulong)lVar105 >> 0x10);
          uVar96 = (undefined1)((ulong)lVar105 >> 0x18);
          uVar98 = (undefined1)((ulong)lVar105 >> 0x20);
          uVar99 = (undefined1)((ulong)lVar105 >> 0x28);
          uVar100 = (undefined1)((ulong)lVar105 >> 0x30);
          uVar101 = (undefined1)((ulong)lVar105 >> 0x38);
          lVar109 = CONCAT17(uVar148,CONCAT16(uVar147,CONCAT15(uVar146,CONCAT14(uVar145,CONCAT13(
                                                  uVar135,CONCAT12(uVar134,CONCAT11(uVar133,uVar132)
                                                                  )))))) + (ulong)auVar215._0_4_;
          uVar132 = (undefined1)lVar109;
          uVar133 = (undefined1)((ulong)lVar109 >> 8);
          uVar134 = (undefined1)((ulong)lVar109 >> 0x10);
          uVar135 = (undefined1)((ulong)lVar109 >> 0x18);
          uVar145 = (undefined1)((ulong)lVar109 >> 0x20);
          uVar146 = (undefined1)((ulong)lVar109 >> 0x28);
          uVar147 = (undefined1)((ulong)lVar109 >> 0x30);
          uVar148 = (undefined1)((ulong)lVar109 >> 0x38);
          lVar207 = CONCAT17(uVar174,CONCAT16(uVar173,CONCAT15(uVar172,CONCAT14(uVar171,CONCAT13(
                                                  uVar161,CONCAT12(uVar160,CONCAT11(uVar159,uVar158)
                                                                  )))))) + (ulong)auVar215._4_4_;
          uVar158 = (undefined1)lVar207;
          uVar159 = (undefined1)((ulong)lVar207 >> 8);
          uVar160 = (undefined1)((ulong)lVar207 >> 0x10);
          uVar161 = (undefined1)((ulong)lVar207 >> 0x18);
          uVar171 = (undefined1)((ulong)lVar207 >> 0x20);
          uVar172 = (undefined1)((ulong)lVar207 >> 0x28);
          uVar173 = (undefined1)((ulong)lVar207 >> 0x30);
          uVar174 = (undefined1)((ulong)lVar207 >> 0x38);
          uVar74 = uVar74 + auVar208._0_4_;
          lVar79 = lVar79 + (ulong)auVar208._4_4_;
          lVar72 = lVar72 + 8;
          puVar68 = puVar68 + 4;
        } while (lVar72 != 0);
        uVar74 = uVar74 + lVar109 + lVar73 + lVar211 + lVar79 + lVar207 + lVar105 + lVar214;
      }
LAB_1006b5b14:
      lVar73 = uVar81 - lVar77;
      piVar75 = (int *)((long)param_8 + lVar77 * 4);
      pbVar80 = (byte *)((long)param_10 + lVar77 * 4 + 2);
      do {
        uVar74 = uVar74 + *piVar75 * (uint)*pbVar80;
        lVar73 = lVar73 + -1;
        piVar75 = piVar75 + 1;
        pbVar80 = pbVar80 + 4;
      } while (lVar73 != 0);
      if (local_ac[0] < 8) {
        lVar72 = 0;
        uVar78 = 0;
      }
      else {
        if (local_ac[0] < 0x20) {
          uVar78 = 0;
          lVar73 = 0;
        }
        else {
          uVar83 = 0;
          uVar84 = 0;
          uVar85 = 0;
          uVar86 = 0;
          uVar88 = 0;
          uVar89 = 0;
          uVar90 = 0;
          uVar91 = 0;
          uVar93 = 0;
          uVar94 = 0;
          uVar95 = 0;
          uVar96 = 0;
          uVar98 = 0;
          uVar99 = 0;
          uVar100 = 0;
          uVar101 = 0;
          uVar1 = 0x20;
          if ((uVar81 & 0x1f) != 0) {
            uVar1 = uVar81 & 0x1f;
          }
          lVar109 = 0;
          lVar77 = 0;
          lVar79 = 0;
          lVar105 = 0;
          uVar132 = 0;
          uVar133 = 0;
          uVar134 = 0;
          uVar135 = 0;
          uVar145 = 0;
          uVar146 = 0;
          uVar147 = 0;
          uVar148 = 0;
          uVar158 = 0;
          uVar159 = 0;
          uVar160 = 0;
          uVar161 = 0;
          uVar171 = 0;
          uVar172 = 0;
          uVar173 = 0;
          uVar174 = 0;
          lVar72 = uVar81 - uVar1;
          uVar176 = 0;
          uVar177 = 0;
          uVar178 = 0;
          uVar179 = 0;
          uVar180 = 0;
          uVar181 = 0;
          uVar182 = 0;
          uVar183 = 0;
          uVar184 = 0;
          uVar185 = 0;
          uVar186 = 0;
          uVar187 = 0;
          uVar188 = 0;
          uVar189 = 0;
          uVar190 = 0;
          uVar191 = 0;
          lVar214 = 0;
          lVar221 = 0;
          lVar207 = 0;
          lVar211 = 0;
          lVar247 = 0;
          lVar248 = 0;
          uVar232 = 0;
          uVar192 = 0;
          uVar193 = 0;
          uVar194 = 0;
          uVar195 = 0;
          uVar196 = 0;
          uVar197 = 0;
          uVar198 = 0;
          in_register_00005208 = '\0';
          in_register_00005209 = '\0';
          in_register_0000520a = '\0';
          in_register_0000520b = '\0';
          in_register_0000520c = '\0';
          in_register_0000520d = '\0';
          in_register_0000520e = '\0';
          in_register_0000520f = '\0';
          uVar199 = 0;
          uVar200 = 0;
          uVar201 = 0;
          uVar202 = 0;
          uVar203 = 0;
          uVar204 = 0;
          uVar205 = 0;
          uVar206 = 0;
          uVar231 = 0;
          uVar234 = 0;
          uVar236 = 0;
          uVar238 = 0;
          uVar240 = 0;
          uVar242 = 0;
          uVar244 = 0;
          uVar246 = 0;
          lVar267 = 0;
          lVar268 = 0;
          lVar318 = 0;
          lVar319 = 0;
          lVar265 = 0;
          lVar266 = 0;
          uVar269 = 0;
          uVar270 = 0;
          uVar271 = 0;
          uVar272 = 0;
          uVar273 = 0;
          uVar274 = 0;
          uVar275 = 0;
          uVar276 = 0;
          uVar277 = 0;
          uVar278 = 0;
          uVar279 = 0;
          uVar280 = 0;
          uVar281 = 0;
          uVar282 = 0;
          uVar283 = 0;
          uVar284 = 0;
          uVar249 = 0;
          uVar250 = 0;
          uVar251 = 0;
          uVar252 = 0;
          uVar253 = 0;
          uVar254 = 0;
          uVar255 = 0;
          uVar256 = 0;
          uVar257 = 0;
          uVar258 = 0;
          uVar259 = 0;
          uVar260 = 0;
          uVar261 = 0;
          uVar262 = 0;
          uVar263 = 0;
          uVar264 = 0;
          lVar321 = 0;
          lVar322 = 0;
          lVar73 = lVar72;
          puVar68 = param_8;
          do {
            auVar325[0] = *(undefined1 *)((long)puVar68 + 0x402);
            auVar325[1] = *(undefined1 *)((long)puVar68 + 0x406);
            auVar325[2] = *(undefined1 *)((long)puVar68 + 0x40a);
            auVar325[3] = *(undefined1 *)((long)puVar68 + 0x40e);
            auVar325[4] = *(undefined1 *)((long)puVar68 + 0x412);
            auVar325[5] = *(undefined1 *)((long)puVar68 + 0x416);
            auVar325[6] = *(undefined1 *)((long)puVar68 + 0x41a);
            auVar325[7] = *(undefined1 *)((long)puVar68 + 0x41e);
            auVar325[8] = *(undefined1 *)((long)puVar68 + 0x422);
            auVar325[9] = *(undefined1 *)((long)puVar68 + 0x426);
            auVar325[10] = *(undefined1 *)((long)puVar68 + 0x42a);
            auVar325[0xb] = *(undefined1 *)((long)puVar68 + 0x42e);
            auVar325[0xc] = *(undefined1 *)((long)puVar68 + 0x432);
            auVar325[0xd] = *(undefined1 *)((long)puVar68 + 0x436);
            auVar325[0xe] = *(undefined1 *)((long)puVar68 + 0x43a);
            auVar325[0xf] = *(undefined1 *)((long)puVar68 + 0x43e);
            auVar226[0] = *(undefined1 *)((long)puVar68 + 0x442);
            auVar226[1] = *(undefined1 *)((long)puVar68 + 0x446);
            auVar226[2] = *(undefined1 *)((long)puVar68 + 0x44a);
            auVar226[3] = *(undefined1 *)((long)puVar68 + 0x44e);
            auVar226[4] = *(undefined1 *)((long)puVar68 + 0x452);
            auVar226[5] = *(undefined1 *)((long)puVar68 + 0x456);
            auVar226[6] = *(undefined1 *)((long)puVar68 + 0x45a);
            auVar226[7] = *(undefined1 *)((long)puVar68 + 0x45e);
            auVar226[8] = *(undefined1 *)((long)puVar68 + 0x462);
            auVar226[9] = *(undefined1 *)((long)puVar68 + 0x466);
            auVar226[10] = *(undefined1 *)((long)puVar68 + 0x46a);
            auVar226[0xb] = *(undefined1 *)((long)puVar68 + 0x46e);
            auVar226[0xc] = *(undefined1 *)((long)puVar68 + 0x472);
            auVar226[0xd] = *(undefined1 *)((long)puVar68 + 0x476);
            auVar226[0xe] = *(undefined1 *)((long)puVar68 + 0x47a);
            auVar226[0xf] = *(undefined1 *)((long)puVar68 + 0x47e);
            auVar21[9] = 0xff;
            auVar21._0_9_ = _DAT_10084e990;
            auVar21[10] = 0xff;
            auVar21[0xb] = 0xff;
            auVar21[0xc] = 3;
            auVar21[0xd] = 0xff;
            auVar21[0xe] = 0xff;
            auVar21[0xf] = 0xff;
            auVar216 = a64_TBL(ZEXT816(0),auVar325,auVar21);
            auVar30[9] = 0xff;
            auVar30._0_9_ = _DAT_10084e9a0;
            auVar30[10] = 0xff;
            auVar30[0xb] = 0xff;
            auVar30[0xc] = 7;
            auVar30[0xd] = 0xff;
            auVar30[0xe] = 0xff;
            auVar30[0xf] = 0xff;
            auVar229 = a64_TBL(ZEXT816(0),auVar325,auVar30);
            auVar34[9] = 0xff;
            auVar34._0_9_ = _DAT_10084e9b0;
            auVar34[10] = 0xff;
            auVar34[0xb] = 0xff;
            auVar34[0xc] = 0xb;
            auVar34[0xd] = 0xff;
            auVar34[0xe] = 0xff;
            auVar34[0xf] = 0xff;
            auVar230 = a64_TBL(ZEXT816(0),auVar325,auVar34);
            auVar40[9] = 0xff;
            auVar40._0_9_ = _DAT_10084e9c0;
            auVar40[10] = 0xff;
            auVar40[0xb] = 0xff;
            auVar40[0xc] = 0xf;
            auVar40[0xd] = 0xff;
            auVar40[0xe] = 0xff;
            auVar40[0xf] = 0xff;
            auVar326 = a64_TBL(ZEXT816(0),auVar325,auVar40);
            auVar22[9] = 0xff;
            auVar22._0_9_ = _DAT_10084e990;
            auVar22[10] = 0xff;
            auVar22[0xb] = 0xff;
            auVar22[0xc] = 3;
            auVar22[0xd] = 0xff;
            auVar22[0xe] = 0xff;
            auVar22[0xf] = 0xff;
            auVar329 = a64_TBL(ZEXT816(0),auVar226,auVar22);
            auVar31[9] = 0xff;
            auVar31._0_9_ = _DAT_10084e9a0;
            auVar31[10] = 0xff;
            auVar31[0xb] = 0xff;
            auVar31[0xc] = 7;
            auVar31[0xd] = 0xff;
            auVar31[0xe] = 0xff;
            auVar31[0xf] = 0xff;
            auVar333 = a64_TBL(ZEXT816(0),auVar226,auVar31);
            auVar35[9] = 0xff;
            auVar35._0_9_ = _DAT_10084e9b0;
            auVar35[10] = 0xff;
            auVar35[0xb] = 0xff;
            auVar35[0xc] = 0xb;
            auVar35[0xd] = 0xff;
            auVar35[0xe] = 0xff;
            auVar35[0xf] = 0xff;
            auVar337 = a64_TBL(ZEXT816(0),auVar226,auVar35);
            auVar41[9] = 0xff;
            auVar41._0_9_ = _DAT_10084e9c0;
            auVar41[10] = 0xff;
            auVar41[0xb] = 0xff;
            auVar41[0xc] = 0xf;
            auVar41[0xd] = 0xff;
            auVar41[0xe] = 0xff;
            auVar41[0xf] = 0xff;
            auVar209 = a64_TBL(ZEXT816(0),auVar226,auVar41);
            auVar327._0_4_ = (int)puVar68[6] * auVar326._0_4_;
            auVar327._4_4_ = (int)((ulong)puVar68[6] >> 0x20) * auVar326._4_4_;
            auVar327._8_4_ = (int)puVar68[7] * auVar326._8_4_;
            auVar327._12_4_ = (int)((ulong)puVar68[7] >> 0x20) * auVar326._12_4_;
            auVar227._0_4_ = *(int *)(puVar68 + 0xe) * auVar209._0_4_;
            auVar227._4_4_ = *(int *)((long)puVar68 + 0x74) * auVar209._4_4_;
            auVar227._8_4_ = *(int *)(puVar68 + 0xf) * auVar209._8_4_;
            auVar227._12_4_ = *(int *)((long)puVar68 + 0x7c) * auVar209._12_4_;
            auVar338._0_4_ = *(int *)(puVar68 + 0xc) * auVar337._0_4_;
            auVar338._4_4_ = *(int *)((long)puVar68 + 100) * auVar337._4_4_;
            auVar338._8_4_ = *(int *)(puVar68 + 0xd) * auVar337._8_4_;
            auVar338._12_4_ = *(int *)((long)puVar68 + 0x6c) * auVar337._12_4_;
            auVar334._0_4_ = *(int *)(puVar68 + 10) * auVar333._0_4_;
            auVar334._4_4_ = *(int *)((long)puVar68 + 0x54) * auVar333._4_4_;
            auVar334._8_4_ = *(int *)(puVar68 + 0xb) * auVar333._8_4_;
            auVar334._12_4_ = *(int *)((long)puVar68 + 0x5c) * auVar333._12_4_;
            auVar330._0_4_ = *(int *)(puVar68 + 8) * auVar329._0_4_;
            auVar330._4_4_ = *(int *)((long)puVar68 + 0x44) * auVar329._4_4_;
            auVar330._8_4_ = *(int *)(puVar68 + 9) * auVar329._8_4_;
            auVar330._12_4_ = *(int *)((long)puVar68 + 0x4c) * auVar329._12_4_;
            lVar214 = lVar214 + (ulong)(uint)((int)puVar68[5] * auVar230._8_4_);
            lVar221 = lVar221 + (ulong)(uint)((int)((ulong)puVar68[5] >> 0x20) * auVar230._12_4_);
            lVar19 = CONCAT17(uVar183,CONCAT16(uVar182,CONCAT15(uVar181,CONCAT14(uVar180,CONCAT13(
                                                  uVar179,CONCAT12(uVar178,CONCAT11(uVar177,uVar176)
                                                                  )))))) +
                     (ulong)(uint)((int)puVar68[4] * auVar230._0_4_);
            uVar176 = (undefined1)lVar19;
            uVar177 = (undefined1)((ulong)lVar19 >> 8);
            uVar178 = (undefined1)((ulong)lVar19 >> 0x10);
            uVar179 = (undefined1)((ulong)lVar19 >> 0x18);
            uVar180 = (undefined1)((ulong)lVar19 >> 0x20);
            uVar181 = (undefined1)((ulong)lVar19 >> 0x28);
            uVar182 = (undefined1)((ulong)lVar19 >> 0x30);
            uVar183 = (undefined1)((ulong)lVar19 >> 0x38);
            lVar20 = CONCAT17(uVar191,CONCAT16(uVar190,CONCAT15(uVar189,CONCAT14(uVar188,CONCAT13(
                                                  uVar187,CONCAT12(uVar186,CONCAT11(uVar185,uVar184)
                                                                  )))))) +
                     (ulong)(uint)((int)((ulong)puVar68[4] >> 0x20) * auVar230._4_4_);
            uVar184 = (undefined1)lVar20;
            uVar185 = (undefined1)((ulong)lVar20 >> 8);
            uVar186 = (undefined1)((ulong)lVar20 >> 0x10);
            uVar187 = (undefined1)((ulong)lVar20 >> 0x18);
            uVar188 = (undefined1)((ulong)lVar20 >> 0x20);
            uVar189 = (undefined1)((ulong)lVar20 >> 0x28);
            uVar190 = (undefined1)((ulong)lVar20 >> 0x30);
            uVar191 = (undefined1)((ulong)lVar20 >> 0x38);
            lVar17 = CONCAT17(uVar148,CONCAT16(uVar147,CONCAT15(uVar146,CONCAT14(uVar145,CONCAT13(
                                                  uVar135,CONCAT12(uVar134,CONCAT11(uVar133,uVar132)
                                                                  )))))) +
                     (ulong)(uint)((int)puVar68[3] * auVar229._8_4_);
            uVar132 = (undefined1)lVar17;
            uVar133 = (undefined1)((ulong)lVar17 >> 8);
            uVar134 = (undefined1)((ulong)lVar17 >> 0x10);
            uVar135 = (undefined1)((ulong)lVar17 >> 0x18);
            uVar145 = (undefined1)((ulong)lVar17 >> 0x20);
            uVar146 = (undefined1)((ulong)lVar17 >> 0x28);
            uVar147 = (undefined1)((ulong)lVar17 >> 0x30);
            uVar148 = (undefined1)((ulong)lVar17 >> 0x38);
            lVar18 = CONCAT17(uVar174,CONCAT16(uVar173,CONCAT15(uVar172,CONCAT14(uVar171,CONCAT13(
                                                  uVar161,CONCAT12(uVar160,CONCAT11(uVar159,uVar158)
                                                                  )))))) +
                     (ulong)(uint)((int)((ulong)puVar68[3] >> 0x20) * auVar229._12_4_);
            uVar158 = (undefined1)lVar18;
            uVar159 = (undefined1)((ulong)lVar18 >> 8);
            uVar160 = (undefined1)((ulong)lVar18 >> 0x10);
            uVar161 = (undefined1)((ulong)lVar18 >> 0x18);
            uVar171 = (undefined1)((ulong)lVar18 >> 0x20);
            uVar172 = (undefined1)((ulong)lVar18 >> 0x28);
            uVar173 = (undefined1)((ulong)lVar18 >> 0x30);
            uVar174 = (undefined1)((ulong)lVar18 >> 0x38);
            lVar79 = lVar79 + (ulong)(uint)((int)puVar68[2] * auVar229._0_4_);
            lVar105 = lVar105 + (ulong)(uint)((int)((ulong)puVar68[2] >> 0x20) * auVar229._4_4_);
            lVar109 = lVar109 + (ulong)(uint)((int)puVar68[1] * auVar216._8_4_);
            lVar77 = lVar77 + (ulong)(uint)((int)((ulong)puVar68[1] >> 0x20) * auVar216._12_4_);
            lVar13 = CONCAT17(uVar91,CONCAT16(uVar90,CONCAT15(uVar89,CONCAT14(uVar88,CONCAT13(uVar86
                                                  ,CONCAT12(uVar85,CONCAT11(uVar84,uVar83))))))) +
                     (ulong)(uint)((int)*puVar68 * auVar216._0_4_);
            uVar83 = (undefined1)lVar13;
            uVar84 = (undefined1)((ulong)lVar13 >> 8);
            uVar85 = (undefined1)((ulong)lVar13 >> 0x10);
            uVar86 = (undefined1)((ulong)lVar13 >> 0x18);
            uVar88 = (undefined1)((ulong)lVar13 >> 0x20);
            uVar89 = (undefined1)((ulong)lVar13 >> 0x28);
            uVar90 = (undefined1)((ulong)lVar13 >> 0x30);
            uVar91 = (undefined1)((ulong)lVar13 >> 0x38);
            lVar14 = CONCAT17(uVar101,CONCAT16(uVar100,CONCAT15(uVar99,CONCAT14(uVar98,CONCAT13(
                                                  uVar96,CONCAT12(uVar95,CONCAT11(uVar94,uVar93)))))
                                              )) +
                     (ulong)(uint)((int)((ulong)*puVar68 >> 0x20) * auVar216._4_4_);
            uVar93 = (undefined1)lVar14;
            uVar94 = (undefined1)((ulong)lVar14 >> 8);
            uVar95 = (undefined1)((ulong)lVar14 >> 0x10);
            uVar96 = (undefined1)((ulong)lVar14 >> 0x18);
            uVar98 = (undefined1)((ulong)lVar14 >> 0x20);
            uVar99 = (undefined1)((ulong)lVar14 >> 0x28);
            uVar100 = (undefined1)((ulong)lVar14 >> 0x30);
            uVar101 = (undefined1)((ulong)lVar14 >> 0x38);
            lVar207 = lVar207 + (ulong)auVar327._0_4_;
            lVar211 = lVar211 + (ulong)auVar327._4_4_;
            lVar247 = lVar247 + (auVar327._8_8_ & 0xffffffff);
            lVar248 = lVar248 + (auVar327._8_8_ >> 0x20);
            lVar46 = CONCAT17(uVar276,CONCAT16(uVar275,CONCAT15(uVar274,CONCAT14(uVar273,CONCAT13(
                                                  uVar272,CONCAT12(uVar271,CONCAT11(uVar270,uVar269)
                                                                  )))))) +
                     (auVar338._8_8_ & 0xffffffff);
            uVar269 = (undefined1)lVar46;
            uVar270 = (undefined1)((ulong)lVar46 >> 8);
            uVar271 = (undefined1)((ulong)lVar46 >> 0x10);
            uVar272 = (undefined1)((ulong)lVar46 >> 0x18);
            uVar273 = (undefined1)((ulong)lVar46 >> 0x20);
            uVar274 = (undefined1)((ulong)lVar46 >> 0x28);
            uVar275 = (undefined1)((ulong)lVar46 >> 0x30);
            uVar276 = (undefined1)((ulong)lVar46 >> 0x38);
            lVar47 = CONCAT17(uVar284,CONCAT16(uVar283,CONCAT15(uVar282,CONCAT14(uVar281,CONCAT13(
                                                  uVar280,CONCAT12(uVar279,CONCAT11(uVar278,uVar277)
                                                                  )))))) + (auVar338._8_8_ >> 0x20);
            uVar277 = (undefined1)lVar47;
            uVar278 = (undefined1)((ulong)lVar47 >> 8);
            uVar279 = (undefined1)((ulong)lVar47 >> 0x10);
            uVar280 = (undefined1)((ulong)lVar47 >> 0x18);
            uVar281 = (undefined1)((ulong)lVar47 >> 0x20);
            uVar282 = (undefined1)((ulong)lVar47 >> 0x28);
            uVar283 = (undefined1)((ulong)lVar47 >> 0x30);
            uVar284 = (undefined1)((ulong)lVar47 >> 0x38);
            lVar265 = lVar265 + (ulong)auVar338._0_4_;
            lVar266 = lVar266 + (ulong)auVar338._4_4_;
            lVar318 = lVar318 + (auVar334._8_8_ & 0xffffffff);
            lVar319 = lVar319 + (auVar334._8_8_ >> 0x20);
            lVar267 = lVar267 + (ulong)auVar334._0_4_;
            lVar268 = lVar268 + (ulong)auVar334._4_4_;
            lVar38 = CONCAT17(uVar206,CONCAT16(uVar205,CONCAT15(uVar204,CONCAT14(uVar203,CONCAT13(
                                                  uVar202,CONCAT12(uVar201,CONCAT11(uVar200,uVar199)
                                                                  )))))) +
                     (auVar330._8_8_ & 0xffffffff);
            uVar199 = (undefined1)lVar38;
            uVar200 = (undefined1)((ulong)lVar38 >> 8);
            uVar201 = (undefined1)((ulong)lVar38 >> 0x10);
            uVar202 = (undefined1)((ulong)lVar38 >> 0x18);
            uVar203 = (undefined1)((ulong)lVar38 >> 0x20);
            uVar204 = (undefined1)((ulong)lVar38 >> 0x28);
            uVar205 = (undefined1)((ulong)lVar38 >> 0x30);
            uVar206 = (undefined1)((ulong)lVar38 >> 0x38);
            lVar39 = CONCAT17(uVar246,CONCAT16(uVar244,CONCAT15(uVar242,CONCAT14(uVar240,CONCAT13(
                                                  uVar238,CONCAT12(uVar236,CONCAT11(uVar234,uVar231)
                                                                  )))))) + (auVar330._8_8_ >> 0x20);
            uVar231 = (undefined1)lVar39;
            uVar234 = (undefined1)((ulong)lVar39 >> 8);
            uVar236 = (undefined1)((ulong)lVar39 >> 0x10);
            uVar238 = (undefined1)((ulong)lVar39 >> 0x18);
            uVar240 = (undefined1)((ulong)lVar39 >> 0x20);
            uVar242 = (undefined1)((ulong)lVar39 >> 0x28);
            uVar244 = (undefined1)((ulong)lVar39 >> 0x30);
            uVar246 = (undefined1)((ulong)lVar39 >> 0x38);
            lVar27 = CONCAT17(uVar198,CONCAT16(uVar197,CONCAT15(uVar196,CONCAT14(uVar195,CONCAT13(
                                                  uVar194,CONCAT12(uVar193,CONCAT11(uVar192,uVar232)
                                                                  )))))) + (ulong)auVar330._0_4_;
            uVar232 = (undefined1)lVar27;
            uVar192 = (undefined1)((ulong)lVar27 >> 8);
            uVar193 = (undefined1)((ulong)lVar27 >> 0x10);
            uVar194 = (undefined1)((ulong)lVar27 >> 0x18);
            uVar195 = (undefined1)((ulong)lVar27 >> 0x20);
            uVar196 = (undefined1)((ulong)lVar27 >> 0x28);
            uVar197 = (undefined1)((ulong)lVar27 >> 0x30);
            uVar198 = (undefined1)((ulong)lVar27 >> 0x38);
            lVar29 = CONCAT17(in_register_0000520f,
                              CONCAT16(in_register_0000520e,
                                       CONCAT15(in_register_0000520d,
                                                CONCAT14(in_register_0000520c,
                                                         CONCAT13(in_register_0000520b,
                                                                  CONCAT12(in_register_0000520a,
                                                                           CONCAT11(
                                                  in_register_00005209,in_register_00005208))))))) +
                     (ulong)auVar330._4_4_;
            in_register_00005208 = (char)lVar29;
            in_register_00005209 = (char)((ulong)lVar29 >> 8);
            in_register_0000520a = (char)((ulong)lVar29 >> 0x10);
            in_register_0000520b = (char)((ulong)lVar29 >> 0x18);
            in_register_0000520c = (char)((ulong)lVar29 >> 0x20);
            in_register_0000520d = (char)((ulong)lVar29 >> 0x28);
            in_register_0000520e = (char)((ulong)lVar29 >> 0x30);
            in_register_0000520f = (char)((ulong)lVar29 >> 0x38);
            lVar44 = CONCAT17(uVar256,CONCAT16(uVar255,CONCAT15(uVar254,CONCAT14(uVar253,CONCAT13(
                                                  uVar252,CONCAT12(uVar251,CONCAT11(uVar250,uVar249)
                                                                  )))))) + (ulong)auVar227._0_4_;
            uVar249 = (undefined1)lVar44;
            uVar250 = (undefined1)((ulong)lVar44 >> 8);
            uVar251 = (undefined1)((ulong)lVar44 >> 0x10);
            uVar252 = (undefined1)((ulong)lVar44 >> 0x18);
            uVar253 = (undefined1)((ulong)lVar44 >> 0x20);
            uVar254 = (undefined1)((ulong)lVar44 >> 0x28);
            uVar255 = (undefined1)((ulong)lVar44 >> 0x30);
            uVar256 = (undefined1)((ulong)lVar44 >> 0x38);
            lVar45 = CONCAT17(uVar264,CONCAT16(uVar263,CONCAT15(uVar262,CONCAT14(uVar261,CONCAT13(
                                                  uVar260,CONCAT12(uVar259,CONCAT11(uVar258,uVar257)
                                                                  )))))) + (ulong)auVar227._4_4_;
            uVar257 = (undefined1)lVar45;
            uVar258 = (undefined1)((ulong)lVar45 >> 8);
            uVar259 = (undefined1)((ulong)lVar45 >> 0x10);
            uVar260 = (undefined1)((ulong)lVar45 >> 0x18);
            uVar261 = (undefined1)((ulong)lVar45 >> 0x20);
            uVar262 = (undefined1)((ulong)lVar45 >> 0x28);
            uVar263 = (undefined1)((ulong)lVar45 >> 0x30);
            uVar264 = (undefined1)((ulong)lVar45 >> 0x38);
            lVar321 = lVar321 + (auVar227._8_8_ & 0xffffffff);
            lVar322 = lVar322 + (ulong)auVar227._12_4_;
            puVar68 = puVar68 + 0x10;
            lVar73 = lVar73 + -0x20;
          } while (lVar73 != 0);
          uVar78 = lVar27 + lVar13 + lVar265 + lVar19 + lVar267 + lVar79 + lVar44 + lVar207 +
                   lVar38 + lVar109 + lVar46 + lVar214 + lVar318 + lVar17 + lVar321 + lVar247 +
                   lVar29 + lVar14 + lVar266 + lVar20 + lVar268 + lVar105 + lVar45 + lVar211 +
                   lVar39 + lVar77 + lVar47 + lVar221 + lVar319 + lVar18 + lVar322 + lVar248;
          lVar73 = lVar72;
          if (uVar1 < 9) goto LAB_1006b5d70;
        }
        uVar93 = 0;
        uVar94 = 0;
        uVar95 = 0;
        uVar96 = 0;
        uVar98 = 0;
        uVar99 = 0;
        uVar100 = 0;
        uVar101 = 0;
        uVar83 = (undefined1)uVar78;
        uVar84 = (undefined1)(uVar78 >> 8);
        uVar85 = (undefined1)(uVar78 >> 0x10);
        uVar86 = (undefined1)(uVar78 >> 0x18);
        uVar88 = (undefined1)(uVar78 >> 0x20);
        uVar89 = (undefined1)(uVar78 >> 0x28);
        uVar90 = (undefined1)(uVar78 >> 0x30);
        uVar91 = (undefined1)(uVar78 >> 0x38);
        uVar1 = 8;
        if ((uVar81 & 7) != 0) {
          uVar1 = uVar81 & 7;
        }
        lVar72 = uVar81 - uVar1;
        lVar105 = 0;
        lVar109 = 0;
        lVar79 = (uVar1 + lVar73) - uVar81;
        auVar50._9_7_ = _UNK_10084e999;
        auVar50._0_9_ = _DAT_10084e990;
        uVar132 = 0;
        uVar133 = 0;
        uVar134 = 0;
        uVar135 = 0;
        uVar145 = 0;
        uVar146 = 0;
        uVar147 = 0;
        uVar148 = 0;
        uVar158 = 0;
        uVar159 = 0;
        uVar160 = 0;
        uVar161 = 0;
        uVar171 = 0;
        uVar172 = 0;
        uVar173 = 0;
        uVar174 = 0;
        uVar176 = 0;
        uVar177 = 0;
        uVar178 = 0;
        uVar179 = 0;
        uVar180 = 0;
        uVar181 = 0;
        uVar182 = 0;
        uVar183 = 0;
        uVar184 = 0;
        uVar185 = 0;
        uVar186 = 0;
        uVar187 = 0;
        uVar188 = 0;
        uVar189 = 0;
        uVar190 = 0;
        uVar191 = 0;
        puVar68 = (undefined8 *)((long)param_8 + lVar73 * 4);
        do {
          auVar23[1] = *(undefined1 *)((long)puVar68 + 0x406);
          auVar23[0] = *(undefined1 *)((long)puVar68 + 0x402);
          auVar23[2] = *(undefined1 *)((long)puVar68 + 0x40a);
          auVar23[3] = *(undefined1 *)((long)puVar68 + 0x40e);
          auVar23[4] = *(undefined1 *)((long)puVar68 + 0x412);
          auVar23[5] = *(undefined1 *)((long)puVar68 + 0x416);
          auVar23[6] = *(undefined1 *)((long)puVar68 + 0x41a);
          auVar23[7] = *(undefined1 *)((long)puVar68 + 0x41e);
          auVar23[8] = in_register_00005208;
          auVar23[9] = in_register_00005209;
          auVar23[10] = in_register_0000520a;
          auVar23[0xb] = in_register_0000520b;
          auVar23[0xc] = in_register_0000520c;
          auVar23[0xd] = in_register_0000520d;
          auVar23[0xe] = in_register_0000520e;
          auVar23[0xf] = in_register_0000520f;
          auVar209 = a64_TBL(ZEXT816(0),auVar23,auVar50);
          auVar15[9] = 0xff;
          auVar15._0_9_ = _DAT_10084e9a0;
          auVar15[10] = 0xff;
          auVar15[0xb] = 0xff;
          auVar15[0xc] = 7;
          auVar15[0xd] = 0xff;
          auVar15[0xe] = 0xff;
          auVar15[0xf] = 0xff;
          auVar24[1] = *(undefined1 *)((long)puVar68 + 0x406);
          auVar24[0] = *(undefined1 *)((long)puVar68 + 0x402);
          auVar24[2] = *(undefined1 *)((long)puVar68 + 0x40a);
          auVar24[3] = *(undefined1 *)((long)puVar68 + 0x40e);
          auVar24[4] = *(undefined1 *)((long)puVar68 + 0x412);
          auVar24[5] = *(undefined1 *)((long)puVar68 + 0x416);
          auVar24[6] = *(undefined1 *)((long)puVar68 + 0x41a);
          auVar24[7] = *(undefined1 *)((long)puVar68 + 0x41e);
          auVar24[8] = in_register_00005208;
          auVar24[9] = in_register_00005209;
          auVar24[10] = in_register_0000520a;
          auVar24[0xb] = in_register_0000520b;
          auVar24[0xc] = in_register_0000520c;
          auVar24[0xd] = in_register_0000520d;
          auVar24[0xe] = in_register_0000520e;
          auVar24[0xf] = in_register_0000520f;
          auVar216 = a64_TBL(ZEXT816(0),auVar24,auVar15);
          uVar28 = puVar68[1];
          in_register_00005208 = (char)uVar28;
          in_register_00005209 = (char)((ulong)uVar28 >> 8);
          in_register_0000520a = (char)((ulong)uVar28 >> 0x10);
          in_register_0000520b = (char)((ulong)uVar28 >> 0x18);
          in_register_0000520c = (char)((ulong)uVar28 >> 0x20);
          in_register_0000520d = (char)((ulong)uVar28 >> 0x28);
          in_register_0000520e = (char)((ulong)uVar28 >> 0x30);
          in_register_0000520f = (char)((ulong)uVar28 >> 0x38);
          auVar217._0_4_ = (int)puVar68[2] * auVar216._0_4_;
          auVar217._4_4_ = (int)((ulong)puVar68[2] >> 0x20) * auVar216._4_4_;
          auVar217._8_4_ = (int)puVar68[3] * auVar216._8_4_;
          auVar217._12_4_ = (int)((ulong)puVar68[3] >> 0x20) * auVar216._12_4_;
          auVar210._0_4_ = (int)*puVar68 * auVar209._0_4_;
          auVar210._4_4_ = (int)((ulong)*puVar68 >> 0x20) * auVar209._4_4_;
          auVar210._8_4_ = (int)uVar28 * auVar209._8_4_;
          auVar210._12_4_ = (int)((ulong)uVar28 >> 0x20) * auVar209._12_4_;
          lVar214 = CONCAT17(uVar183,CONCAT16(uVar182,CONCAT15(uVar181,CONCAT14(uVar180,CONCAT13(
                                                  uVar179,CONCAT12(uVar178,CONCAT11(uVar177,uVar176)
                                                                  )))))) +
                    (auVar217._8_8_ & 0xffffffff);
          uVar176 = (undefined1)lVar214;
          uVar177 = (undefined1)((ulong)lVar214 >> 8);
          uVar178 = (undefined1)((ulong)lVar214 >> 0x10);
          uVar179 = (undefined1)((ulong)lVar214 >> 0x18);
          uVar180 = (undefined1)((ulong)lVar214 >> 0x20);
          uVar181 = (undefined1)((ulong)lVar214 >> 0x28);
          uVar182 = (undefined1)((ulong)lVar214 >> 0x30);
          uVar183 = (undefined1)((ulong)lVar214 >> 0x38);
          lVar221 = CONCAT17(uVar191,CONCAT16(uVar190,CONCAT15(uVar189,CONCAT14(uVar188,CONCAT13(
                                                  uVar187,CONCAT12(uVar186,CONCAT11(uVar185,uVar184)
                                                                  )))))) + (auVar217._8_8_ >> 0x20);
          uVar184 = (undefined1)lVar221;
          uVar185 = (undefined1)((ulong)lVar221 >> 8);
          uVar186 = (undefined1)((ulong)lVar221 >> 0x10);
          uVar187 = (undefined1)((ulong)lVar221 >> 0x18);
          uVar188 = (undefined1)((ulong)lVar221 >> 0x20);
          uVar189 = (undefined1)((ulong)lVar221 >> 0x28);
          uVar190 = (undefined1)((ulong)lVar221 >> 0x30);
          uVar191 = (undefined1)((ulong)lVar221 >> 0x38);
          lVar105 = lVar105 + (auVar210._8_8_ & 0xffffffff);
          lVar109 = lVar109 + (ulong)auVar210._12_4_;
          lVar207 = CONCAT17(uVar148,CONCAT16(uVar147,CONCAT15(uVar146,CONCAT14(uVar145,CONCAT13(
                                                  uVar135,CONCAT12(uVar134,CONCAT11(uVar133,uVar132)
                                                                  )))))) + (ulong)auVar217._0_4_;
          uVar132 = (undefined1)lVar207;
          uVar133 = (undefined1)((ulong)lVar207 >> 8);
          uVar134 = (undefined1)((ulong)lVar207 >> 0x10);
          uVar135 = (undefined1)((ulong)lVar207 >> 0x18);
          uVar145 = (undefined1)((ulong)lVar207 >> 0x20);
          uVar146 = (undefined1)((ulong)lVar207 >> 0x28);
          uVar147 = (undefined1)((ulong)lVar207 >> 0x30);
          uVar148 = (undefined1)((ulong)lVar207 >> 0x38);
          lVar211 = CONCAT17(uVar174,CONCAT16(uVar173,CONCAT15(uVar172,CONCAT14(uVar171,CONCAT13(
                                                  uVar161,CONCAT12(uVar160,CONCAT11(uVar159,uVar158)
                                                                  )))))) + (ulong)auVar217._4_4_;
          uVar158 = (undefined1)lVar211;
          uVar159 = (undefined1)((ulong)lVar211 >> 8);
          uVar160 = (undefined1)((ulong)lVar211 >> 0x10);
          uVar161 = (undefined1)((ulong)lVar211 >> 0x18);
          uVar171 = (undefined1)((ulong)lVar211 >> 0x20);
          uVar172 = (undefined1)((ulong)lVar211 >> 0x28);
          uVar173 = (undefined1)((ulong)lVar211 >> 0x30);
          uVar174 = (undefined1)((ulong)lVar211 >> 0x38);
          lVar73 = CONCAT17(uVar91,CONCAT16(uVar90,CONCAT15(uVar89,CONCAT14(uVar88,CONCAT13(uVar86,
                                                  CONCAT12(uVar85,CONCAT11(uVar84,uVar83))))))) +
                   (ulong)auVar210._0_4_;
          uVar83 = (undefined1)lVar73;
          uVar84 = (undefined1)((ulong)lVar73 >> 8);
          uVar85 = (undefined1)((ulong)lVar73 >> 0x10);
          uVar86 = (undefined1)((ulong)lVar73 >> 0x18);
          uVar88 = (undefined1)((ulong)lVar73 >> 0x20);
          uVar89 = (undefined1)((ulong)lVar73 >> 0x28);
          uVar90 = (undefined1)((ulong)lVar73 >> 0x30);
          uVar91 = (undefined1)((ulong)lVar73 >> 0x38);
          lVar77 = CONCAT17(uVar101,CONCAT16(uVar100,CONCAT15(uVar99,CONCAT14(uVar98,CONCAT13(uVar96
                                                  ,CONCAT12(uVar95,CONCAT11(uVar94,uVar93))))))) +
                   (ulong)auVar210._4_4_;
          uVar93 = (undefined1)lVar77;
          uVar94 = (undefined1)((ulong)lVar77 >> 8);
          uVar95 = (undefined1)((ulong)lVar77 >> 0x10);
          uVar96 = (undefined1)((ulong)lVar77 >> 0x18);
          uVar98 = (undefined1)((ulong)lVar77 >> 0x20);
          uVar99 = (undefined1)((ulong)lVar77 >> 0x28);
          uVar100 = (undefined1)((ulong)lVar77 >> 0x30);
          uVar101 = (undefined1)((ulong)lVar77 >> 0x38);
          lVar79 = lVar79 + 8;
          puVar68 = puVar68 + 4;
        } while (lVar79 != 0);
        uVar78 = lVar73 + lVar207 + lVar105 + lVar214 + lVar77 + lVar211 + lVar109 + lVar221;
      }
LAB_1006b5d70:
      lVar73 = uVar81 - lVar72;
      piVar75 = (int *)((long)param_8 + lVar72 * 4);
      do {
        uVar78 = uVar78 + *piVar75 * (uint)*(byte *)((long)piVar75 + 0x402);
        lVar73 = lVar73 + -1;
        piVar75 = piVar75 + 1;
      } while (lVar73 != 0);
      if ((param_4 <= puVar69 + 0xc) || ((undefined1 *)(uVar74 >> 3) <= puVar69 + (uVar78 >> 3)))
      goto LAB_1006b5de4;
    }
    *param_11 = 0;
  }
  if (param_10 != (undefined8 *)0x0) {
    _memcpy(param_10,puVar67,0x400);
  }
  puVar70 = param_1 + (long)puVar69;
  param_10 = puVar67;
LAB_1006b5de4:
  FUN_1006b6038(param_1,puVar70,param_1 + param_2,param_3,param_4,(int)param_7,param_10);
                    /* WARNING: Read-only address (ram,0x00010084e990) is written */
                    /* WARNING: Read-only address (ram,0x00010084e999) is written */
                    /* WARNING: Read-only address (ram,0x00010084e9a0) is written */
                    /* WARNING: Read-only address (ram,0x00010084e9b0) is written */
                    /* WARNING: Read-only address (ram,0x00010084e9c0) is written */
  return;
}

