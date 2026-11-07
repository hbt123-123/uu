// rea decompile_all
// name: FUN_1000ad28c
// address: 0x1000ad28c
// body: available
// range: 0x1000ad28c-0x1000ada03 inclusive
// range: 0x1000ed2e8-0x1000ed2eb inclusive
// range: 0x1000ed2fc-0x1000ed2ff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001000bfdfc) */
/* WARNING: Removing unreachable block (ram,0x0001000bc470) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [8] FUN_1000ad28c(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  ulong uVar12;
  ulong uVar13;
  code *pcVar14;
  bool in_ZR;
  bool bVar15;
  undefined1 auVar16 [8];
  TargetProtocolConformanceDescriptor *pTVar17;
  undefined8 uVar18;
  code **ppcVar19;
  TargetProtocolConformanceDescriptor *pTVar20;
  undefined *puVar21;
  TargetProtocolConformanceDescriptor *pTVar22;
  TargetProtocolConformanceDescriptor *pTVar23;
  undefined8 in_x3;
  code *in_x4;
  undefined4 in_w7;
  undefined8 *puVar24;
  long lVar25;
  ushort *puVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  byte bVar30;
  long *plVar31;
  ulong uVar32;
  long *plVar33;
  undefined8 *puVar34;
  long lVar35;
  long lVar36;
  code *UNRECOVERED_JUMPTABLE;
  TargetProtocolConformanceDescriptor *unaff_x20;
  long lVar37;
  ulong uVar38;
  ulong unaff_x27;
  TargetProtocolConformanceDescriptor *pTVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  long lVar42;
  TargetProtocolConformanceDescriptor *pTVar43;
  TargetProtocolConformanceDescriptor *pTVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  long lVar47;
  TargetProtocolConformanceDescriptor *pTVar48;
  TargetProtocolConformanceDescriptor *pTVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 in_d3;
  undefined8 uVar53;
  undefined8 in_register_00005068;
  undefined8 uVar54;
  undefined8 in_register_00005070;
  undefined8 in_register_00005078;
  undefined1 in_z4 [32];
  undefined1 in_z5 [32];
  undefined1 in_z7 [32];
  undefined1 in_z11 [32];
  undefined1 in_z12 [32];
  undefined4 unaff_s14;
  undefined1 in_register_000051c4 [28];
  undefined4 in_s18;
  undefined4 in_s25;
  undefined4 in_s27;
  undefined4 in_p0;
  undefined4 in_p2;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  code *in_stack_00000010;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined1 in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000070;
  undefined1 auStack_330 [16];
  dword *pdStack_320;
  TargetProtocolConformanceDescriptor *local_310;
  TargetProtocolConformanceDescriptor *pTStack_308;
  TargetProtocolConformanceDescriptor *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  code *pcStack_2e0;
  code *pcStack_2d8;
  undefined1 uStack_2cc;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a4;
  undefined1 auStack_2a0 [32];
  code *local_280 [2];
  undefined8 local_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 local_230;
  code *local_228 [2];
  code *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  code *local_1f8 [2];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  code *local_1c0;
  TargetProtocolConformanceDescriptor *pTStack_1b8;
  code *local_1b0;
  code *pcStack_1a8;
  code *local_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  code *local_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  ulong local_170;
  TargetProtocolConformanceDescriptor *pTStack_168;
  ulong local_160;
  TargetProtocolConformanceDescriptor *pTStack_158;
  undefined1 local_150;
  TargetProtocolConformanceDescriptor *local_148;
  undefined1 local_140 [8];
  undefined8 *puStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  code *apcStack_110 [2];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  code *pcStack_d8;
  undefined1 local_d0 [16];
  TargetProtocolConformanceDescriptor *local_c0;
  TargetProtocolConformanceDescriptor *pTStack_b8;
  code *local_b0;
  TargetProtocolConformanceDescriptor *pTStack_a8;
  long local_a0;
  long lStack_98;
  undefined8 *local_90;
  TargetProtocolConformanceDescriptor *pTStack_88;
  TargetProtocolConformanceDescriptor *local_80;
  ulong uStack_78;
  TargetProtocolConformanceDescriptor *pTStack_70;
  
  pdStack_320 = (dword *)&stack0xfffffffffffffff0;
  pTVar22 = (TargetProtocolConformanceDescriptor *)local_280;
  pTVar43 = *(TargetProtocolConformanceDescriptor **)&unaff_x20[1].WitnessTablePattern;
  pTVar39 = *(TargetProtocolConformanceDescriptor **)(unaff_x20 + 1);
  pTVar49 = *(TargetProtocolConformanceDescriptor **)&unaff_x20[2].WitnessTablePattern;
  pTVar48 = *(TargetProtocolConformanceDescriptor **)(unaff_x20 + 2);
  pTVar20 = *(TargetProtocolConformanceDescriptor **)&unaff_x20[3].WitnessTablePattern;
  puVar40 = *(undefined8 **)(unaff_x20 + 3);
  lVar29 = *(long *)&unaff_x20[4].WitnessTablePattern;
  lVar35._0_4_ = unaff_x20[4].Protocol;
  lVar35._4_4_ = unaff_x20[4].TypeRef;
  pTVar44 = *(TargetProtocolConformanceDescriptor **)&unaff_x20[5].WitnessTablePattern;
  puVar41 = *(undefined8 **)(unaff_x20 + 5);
  bVar6 = *(byte *)&unaff_x20[6].Protocol;
  local_80 = (TargetProtocolConformanceDescriptor *)CONCAT71(local_80._1_7_,bVar6);
  puVar24 = (undefined8 *)(ulong)bVar6;
  auVar16 = (undefined1  [8])0x0;
  puVar26 = &switchD_1000ad304::switchdataD_1000d6a90;
  uVar32 = (ulong)(&switchD_1000ad304::switchdataD_1000d6a90)[(long)puVar24];
  bVar30 = 0;
  pTVar23 = (TargetProtocolConformanceDescriptor *)0x0;
  pTVar17 = (TargetProtocolConformanceDescriptor *)auVar16;
  local_d0._0_8_ = pTVar39;
  local_d0._8_8_ = pTVar43;
  local_c0 = pTVar48;
  pTStack_b8 = pTVar49;
  local_b0 = (code *)puVar40;
  pTStack_a8 = pTVar20;
  local_a0 = lVar35;
  lStack_98 = lVar29;
  local_90 = puVar41;
  pTStack_88 = pTVar44;
  switch(bVar6) {
  case 0:
  case 1:
  case 2:
    break;
  default:
    if (pTVar43 == (TargetProtocolConformanceDescriptor *)0x0) {
      FUN_1000b0e58();
      return auVar16;
    }
  case 0x5c:
  case 0x80:
  case 0x86:
  case 0x87:
  case 0xb7:
  case 0xdc:
  case 0xf4:
  case 0xfb:
    auVar16 = (undefined1  [8])local_d0;
  case 0x62:
  case 0x69:
  case 0x83:
  case 0x9d:
  case 0xa7:
  case 0xab:
  case 0xaf:
  case 0xb3:
  case 0xe2:
  case 0xe9:
  case 0xed:
  case 0xf7:
    pTVar23 = (TargetProtocolConformanceDescriptor *)local_140;
  case 0xa3:
  case 0xf3:
    pTVar44 = pTVar39;
  case 0xa4:
  case 0xbb:
  case 0xff:
    pTVar17 = (TargetProtocolConformanceDescriptor *)auVar16;
    unaff_x20 = pTVar43;
  case 100:
  case 0xe4:
    auVar16 = (undefined1  [8])pTVar44;
    FUN_100095794(pTVar17,pTVar23);
  case 0x26:
  case 0x4e:
  case 0xd4:
    pTVar23 = unaff_x20;
  case 0xcc:
  case 0xd0:
    FUN_1000b0c10(auVar16,pTVar23);
  case 0x2a:
  case 0x32:
  case 0x52:
LAB_1000ad95c:
    FUN_1000837f4(local_d0);
    break;
  case 4:
    FUN_100095794(local_d0,local_140);
    FUN_1000b1064(pTVar49,puVar40,pTVar20);
    auVar16 = (undefined1  [8])pTVar49;
    goto LAB_1000ad95c;
  case 5:
    local_140._0_4_ = 0;
    local_140._4_4_ = 0;
    puStack_138 = (undefined8 *)0xe000000000000000;
    _swift_bridgeObjectRetain(pTVar43);
    __ss11_StringGutsV4growyySiF(0x12);
    _swift_bridgeObjectRelease(puStack_138);
    local_140 = (undefined1  [8])0xd000000000000010;
    puStack_138 = (undefined8 *)0x80000001000cab70;
    __sSS6appendyySSF(pTVar39,pTVar43);
    goto LAB_1000ad888;
  case 6:
    local_140 = (undefined1  [8])0x0;
    puStack_138 = (undefined8 *)0xe000000000000000;
    _swift_bridgeObjectRetain(pTVar43);
    __ss11_StringGutsV4growyySiF(0x13);
    __sSS6appendyySSF(0xd000000000000011,0x80000001000cab50);
    __sSJ5write2toyxz_ts16TextOutputStreamRzlF
              (local_140,pTVar39,pTVar43,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
LAB_1000ad888:
    FUN_1000837f4(local_d0);
    auVar16 = local_140;
    break;
  case 7:
    FUN_100095794(local_d0,local_140);
    auVar16 = (undefined1  [8])pTVar43;
    FUN_1000b1a38(pTVar43,pTVar48,pTVar49);
    goto LAB_1000ad920;
  case 8:
    _swift_bridgeObjectRetain(pTVar39);
    FUN_100065610(pTVar43,pTVar48,pTVar49);
    FUN_100065610(puVar40,pTVar20,lVar35);
    auVar16 = (undefined1  [8])pTVar39;
    FUN_1000adc90(pTVar39,pTVar43,pTVar48,pTVar49,puVar40,pTVar20,lVar35);
    FUN_100065628(puVar40,pTVar20,lVar35);
LAB_1000ad920:
    FUN_100065628(pTVar43,pTVar48,pTVar49);
    pTVar43 = pTVar39;
    goto LAB_1000ad930;
  case 9:
    local_140 = (undefined1  [8])0x0;
    puStack_138 = (undefined8 *)0xe000000000000000;
    FUN_100065610(pTVar49,puVar40,pTVar20);
  case 0xc9:
    _swift_bridgeObjectRetain(lVar29);
    __ss11_StringGutsV4growyySiF(0x40);
    auVar16 = (undefined1  [8])0x6854;
  case 0x9a:
    auVar16 = (undefined1  [8])((ulong)auVar16 | 0x6974706f20650000);
    pTVar23 = (TargetProtocolConformanceDescriptor *)0x27206e6f;
  case 0x4a:
  case 0x57:
  case 0x8e:
    __sSS6appendyySSF(auVar16,(ulong)pTVar23 | 0xec00000000000000);
    pTVar22 = pTVar49;
    puVar41 = puVar40;
    FUN_1000979e4(pTVar49,puVar40,pTVar20);
    FUN_100065628(pTVar49,puVar40,pTVar20);
    __sSS6appendyySSF(pTVar22,puVar41);
    _swift_bridgeObjectRelease(puVar41);
    __sSS6appendyySSF(0xd000000000000020,0x80000001000cab90);
    __sSS6appendyySSF(lVar35,lVar29);
    _swift_bridgeObjectRelease(lVar29);
    pcVar1 = "\' was specified.";
    uVar18 = 0xd000000000000010;
    goto LAB_1000ad574;
  case 10:
    FUN_100095794(local_d0,local_140);
    FUN_1000b1b88(pTVar39);
    auVar16 = (undefined1  [8])pTVar39;
    goto LAB_1000ad95c;
  case 0xb:
    FUN_100095794(local_d0,local_140);
    auVar16 = (undefined1  [8])pTVar39;
    FUN_1000b1dd0(pTVar39,pTVar43,pTVar48);
    _swift_bridgeObjectRelease(pTVar39);
    _swift_bridgeObjectRelease(pTVar43);
    pTVar43 = pTVar48;
    goto LAB_1000ad930;
  case 0xc:
    _swift_bridgeObjectRetain(pTVar43);
    _swift_bridgeObjectRetain(pTVar48);
    FUN_1000adf84(pTVar39,pTVar43,pTVar48);
    _swift_bridgeObjectRelease(pTVar48);
    auVar16 = (undefined1  [8])pTVar39;
LAB_1000ad930:
    _swift_bridgeObjectRelease(pTVar43);
    break;
  case 0xd:
    FUN_100095794(local_d0,local_140);
    auVar16 = (undefined1  [8])pTVar43;
    FUN_1000b1f80(pTVar43,pTVar48,pTVar49,puVar40,pTVar20,lVar35,lVar29,puVar41);
    _swift_errorRelease(pTVar44);
    _swift_bridgeObjectRelease(pTVar20);
    _swift_bridgeObjectRelease(puVar41);
    _swift_bridgeObjectRelease(lVar29);
    FUN_10008f6ec(pTVar43,pTVar48,pTVar49);
    _swift_bridgeObjectRelease(pTVar39);
    break;
  case 0xe:
  case 0x19:
  case 0x21:
    _swift_getErrorValue(pTVar39,&pcStack_2e0,&local_2f8);
    _swift_errorRetain(local_d0._0_8_);
    auVar16 = (undefined1  [8])CONCAT44(uStack_2ec,uStack_2f0);
    local_1b0 = (code *)CONCAT44(uStack_2e4,local_2e8);
    goto LAB_1000ad958;
  case 0xf:
    local_148 = pTVar39;
    FUN_100095794(local_d0,local_140);
    _swift_errorRetain(pTVar39);
    puVar21 = &DAT_100104828;
    FUN_10000eb08(&DAT_100104828,&DAT_1000d5ba0);
    ppcVar19 = &local_1a0;
    _swift_dynamicCast(ppcVar19,&local_148,puVar21,&DAT_1000fa8c8,0);
    if ((int)ppcVar19 != 0) {
      uStack_248 = pTStack_168;
      local_250 = local_170;
      uStack_238 = pTStack_158;
      uStack_240 = local_160;
      local_280[1] = pcStack_198;
      local_280[0] = local_1a0;
      uStack_268 = uStack_188;
      local_270 = uStack_190;
      pcStack_260 = local_180;
      local_230 = local_150;
      local_228[0] = *(code **)unaff_x20;
      uVar51._0_4_ = unaff_x20->WitnessTablePattern;
      uVar51._4_4_ = unaff_x20->Flags;
      uStack_200 = uStack_188;
      local_208 = uStack_190;
      uStack_210 = pcStack_198;
      local_218 = local_1a0;
      local_1c8 = CONCAT71(local_1c8._1_7_,local_150);
      uStack_1d0 = pTStack_158;
      local_1d8 = local_160;
      uStack_1e0 = (ulong)pTStack_168;
      local_1e8 = local_170;
      local_1f8[0] = local_180;
      uStack_128 = pcStack_198;
      pcStack_130 = local_1a0;
      local_e0 = CONCAT71(local_e0._1_7_,local_150);
      uStack_f8 = (ulong)pTStack_168;
      local_100 = local_170;
      uStack_e8 = pTStack_158;
      uStack_f0 = local_160;
      uStack_118 = uStack_188;
      local_120 = uStack_190;
      apcStack_110[0] = local_180;
      local_228[1] = (code *)uVar51;
      local_140 = (undefined1  [8])local_228[0];
      puStack_138 = (undefined8 *)uVar51;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar51);
      pTVar22 = (TargetProtocolConformanceDescriptor *)local_280;
      FUN_100095794(pTVar22,&pcStack_2d8);
      FUN_1000ad28c();
      FUN_1000837f4(local_d0);
      FUN_1000b0af8(local_228);
      FUN_1000837f4((TargetProtocolConformanceDescriptor *)local_280);
      _swift_errorRelease(local_148);
      return (undefined1  [8])pTVar22;
    }
    _swift_errorRelease(local_148);
    _swift_getErrorValue(pTVar39,&pcStack_1a8,&local_1c0);
    auVar16 = (undefined1  [8])pTStack_1b8;
LAB_1000ad958:
    FUN_1000b2a50(auVar16,local_1b0);
    goto LAB_1000ad95c;
  case 0x10:
    puVar24 = (undefined8 *)0xe000000000000000;
  case 0x2e:
    local_140 = (undefined1  [8])0x0;
    auVar16 = (undefined1  [8])pTVar43;
    pTVar44 = pTVar39;
    puStack_138 = puVar24;
  case 0x66:
  case 0xe6:
    _swift_bridgeObjectRetain(auVar16);
    __ss11_StringGutsV4growyySiF(0x34);
    pTVar22 = pTVar43;
  case 0xd5:
    auVar16 = (undefined1  [8])0x6d6d6f43;
  case 0x6b:
  case 0xeb:
    __sSS6appendyySSF((ulong)auVar16 | 0x20646e6100000000,0xe900000000000027);
    __sSS6appendyySSF(pTVar44,pTVar22);
    FUN_1000837f4(local_d0);
    pcVar1 = "\' is not a parent of the current command.";
    uVar18 = 0xd000000000000029;
LAB_1000ad574:
    __sSS6appendyySSF(uVar18,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    auVar16 = local_140;
    break;
  case 0x11:
    if (((((pTVar48 == (TargetProtocolConformanceDescriptor *)0x0 &&
           pTVar43 == (TargetProtocolConformanceDescriptor *)0x0) &&
          (pTVar39 == (TargetProtocolConformanceDescriptor *)0x0 &&
          pTVar49 == (TargetProtocolConformanceDescriptor *)0x0)) &&
         ((puVar40 == (undefined8 *)0x0 && pTVar20 == (TargetProtocolConformanceDescriptor *)0x0) &&
         lVar35 == 0)) &&
         ((lVar29 == 0 && puVar41 == (undefined8 *)0x0) &&
         pTVar44 == (TargetProtocolConformanceDescriptor *)0x0)) ||
       ((pTVar39 == (TargetProtocolConformanceDescriptor *)0x1 &&
        ((((pTVar48 == (TargetProtocolConformanceDescriptor *)0x0 &&
           pTVar43 == (TargetProtocolConformanceDescriptor *)0x0) &&
          pTVar49 == (TargetProtocolConformanceDescriptor *)0x0) &&
         ((puVar40 == (undefined8 *)0x0 && pTVar20 == (TargetProtocolConformanceDescriptor *)0x0) &&
         lVar35 == 0)) &&
         ((lVar29 == 0 && puVar41 == (undefined8 *)0x0) &&
         pTVar44 == (TargetProtocolConformanceDescriptor *)0x0))))) {
      auVar16 = (undefined1  [8])(TargetProtocolConformanceDescriptor *)0x0;
    }
    else if ((pTVar39 == (TargetProtocolConformanceDescriptor *)0x2) &&
            ((((pTVar48 == (TargetProtocolConformanceDescriptor *)0x0 &&
               pTVar43 == (TargetProtocolConformanceDescriptor *)0x0) &&
              pTVar49 == (TargetProtocolConformanceDescriptor *)0x0) &&
             ((puVar40 == (undefined8 *)0x0 && pTVar20 == (TargetProtocolConformanceDescriptor *)0x0
              ) && lVar35 == 0)) &&
             ((lVar29 == 0 && puVar41 == (undefined8 *)0x0) &&
             pTVar44 == (TargetProtocolConformanceDescriptor *)0x0))) {
      auVar16 = (undefined1  [8])(TargetProtocolConformanceDescriptor *)0xd00000000000004b;
    }
    else if ((pTVar39 == (TargetProtocolConformanceDescriptor *)0x3) &&
            ((((pTVar48 == (TargetProtocolConformanceDescriptor *)0x0 &&
               pTVar43 == (TargetProtocolConformanceDescriptor *)0x0) &&
              pTVar49 == (TargetProtocolConformanceDescriptor *)0x0) &&
             ((puVar40 == (undefined8 *)0x0 && pTVar20 == (TargetProtocolConformanceDescriptor *)0x0
              ) && lVar35 == 0)) &&
             ((lVar29 == 0 && puVar41 == (undefined8 *)0x0) &&
             pTVar44 == (TargetProtocolConformanceDescriptor *)0x0))) {
      auVar16 = (undefined1  [8])(TargetProtocolConformanceDescriptor *)0xd000000000000043;
    }
    else {
      auVar16 = (undefined1  [8])(TargetProtocolConformanceDescriptor *)0xd00000000000001c;
    }
    break;
  case 0x13:
  case 0x1b:
    uVar32 = in_stack_00000060 & 0xffffffffffff;
    if (((ulong)unaff_x20 & 0x2000000000000000) != 0) {
      uVar32 = (ulong)unaff_x20 >> 0x38 & 0xf;
    }
    if (uVar32 == 0) {
      _swift_bridgeObjectRelease();
      in_stack_00000060 = 0;
      unaff_x20 = (TargetProtocolConformanceDescriptor *)0x0;
    }
    if (pTVar22 == (TargetProtocolConformanceDescriptor *)0x0) {
      in_stack_00000070 = 0;
    }
    else {
      uVar32 = in_stack_00000070 & 0xffffffffffff;
      if (((ulong)pTVar22 & 0x2000000000000000) != 0) {
        uVar32 = (ulong)pTVar22 >> 0x38 & 0xf;
      }
      if (uVar32 == 0) {
        _swift_bridgeObjectRelease(pTVar22);
        in_stack_00000070 = 0;
        pTVar22 = (TargetProtocolConformanceDescriptor *)0x0;
      }
    }
    local_1f8[0] = (code *)(CONCAT62(local_1f8[0]._2_6_,CONCAT11((undefined1)local_2e8,uStack_2cc))
                           & 0xffffffffffff01ff);
    local_1f8[1] = (code *)uStack_2c0;
    local_1e8 = uStack_2b0;
    uStack_1e0 = CONCAT71(uStack_1e0._1_7_,(undefined1)uStack_2e4) & 0xffffffffffffff01;
    uStack_1e0 = CONCAT62(uStack_1e0._2_6_,CONCAT11((undefined1)uStack_2ec,(undefined1)uStack_1e0))
                 & 0xffffffffffff01ff;
    uStack_1e0._0_3_ = CONCAT12(uStack_2a4,(undefined2)uStack_1e0);
    local_1d8 = uStack_2b8;
    uStack_1d0 = in_stack_00000000;
    local_1c8 = in_stack_00000008;
    local_1c0 = in_stack_00000010;
    pTStack_1b8 = local_2f8;
    local_1b0 = pcStack_2d8;
    local_1a0 = pcStack_2c8;
    pcStack_198 = pcStack_2e0;
    uStack_188 = in_stack_00000048;
    local_180 = (code *)in_stack_00000050;
    uStack_178 = in_stack_00000058;
    apcStack_110[0] =
         (code *)(CONCAT62(apcStack_110[0]._2_6_,CONCAT11((undefined1)local_2e8,uStack_2cc)) &
                 0xffffffffffff01ff);
    apcStack_110[1] = (code *)uStack_2c0;
    local_100 = uStack_2b0;
    uStack_f8 = CONCAT71(uStack_f8._1_7_,(undefined1)uStack_2e4) & 0xffffffffffffff01;
    uStack_f8 = CONCAT62(uStack_f8._2_6_,CONCAT11((undefined1)uStack_2ec,(undefined1)uStack_f8)) &
                0xffffffffffff01ff;
    uStack_f8._0_3_ = CONCAT12(uStack_2a4,(undefined2)uStack_f8);
    uStack_f0 = uStack_2b8;
    uStack_e8 = in_stack_00000000;
    local_e0 = in_stack_00000008;
    pcStack_d8 = in_stack_00000010;
    local_d0._0_8_ = local_2f8;
    local_d0._8_8_ = pcStack_2d8;
    pTStack_b8 = (TargetProtocolConformanceDescriptor *)pcStack_2c8;
    local_b0 = pcStack_2e0;
    local_a0 = in_stack_00000048;
    lStack_98 = in_stack_00000050;
    local_90 = (undefined8 *)CONCAT71(local_90._1_7_,in_stack_00000058);
    pcStack_1a8 = in_x4;
    uStack_190 = in_x3;
    local_170 = in_stack_00000060;
    pTStack_168 = unaff_x20;
    local_160 = in_stack_00000070;
    pTStack_158 = pTVar22;
    local_c0 = (TargetProtocolConformanceDescriptor *)in_x4;
    pTStack_a8 = (TargetProtocolConformanceDescriptor *)in_x3;
    pTStack_88 = (TargetProtocolConformanceDescriptor *)in_stack_00000060;
    local_80 = unaff_x20;
    uStack_78 = in_stack_00000070;
    pTStack_70 = pTVar22;
    FUN_1000bbe94(local_1f8,auStack_2a0);
    pTVar22 = (TargetProtocolConformanceDescriptor *)apcStack_110;
    FUN_1000bbea4(pTVar22);
    pTVar44[8].WitnessTablePattern = (undefined4)local_170;
    pTVar44[8].Flags = (ConformanceFlags)local_170._4_4_;
    pTVar44[8].Protocol = (int)CONCAT71(uStack_177,uStack_178);
    pTVar44[8].TypeRef = (int)((uint7)uStack_177 >> 0x18);
    pTVar44[9].WitnessTablePattern = (undefined4)local_160;
    pTVar44[9].Flags = (ConformanceFlags)local_160._4_4_;
    *(TargetProtocolConformanceDescriptor **)(pTVar44 + 9) = pTStack_168;
    *(TargetProtocolConformanceDescriptor **)(pTVar44 + 10) = pTStack_158;
    *(code **)&pTVar44[4].WitnessTablePattern = local_1b0;
    *(TargetProtocolConformanceDescriptor **)(pTVar44 + 4) = pTStack_1b8;
    *(code **)&pTVar44[5].WitnessTablePattern = local_1a0;
    *(code **)(pTVar44 + 5) = pcStack_1a8;
    pTVar44[6].WitnessTablePattern = (undefined4)uStack_190;
    pTVar44[6].Flags = (ConformanceFlags)uStack_190._4_4_;
    *(code **)(pTVar44 + 6) = pcStack_198;
    *(code **)&pTVar44[7].WitnessTablePattern = local_180;
    pTVar44[7].Protocol = (undefined4)uStack_188;
    pTVar44[7].TypeRef = uStack_188._4_4_;
    *(code **)&pTVar44->WitnessTablePattern = local_1f8[1];
    *(code **)pTVar44 = local_1f8[0];
    pTVar44[1].WitnessTablePattern = (undefined4)uStack_1e0;
    pTVar44[1].Flags = (ConformanceFlags)uStack_1e0._4_4_;
    pTVar44[1].Protocol = (undefined4)local_1e8;
    pTVar44[1].TypeRef = local_1e8._4_4_;
    pTVar44[2].WitnessTablePattern = (undefined4)uStack_1d0;
    pTVar44[2].Flags = (ConformanceFlags)uStack_1d0._4_4_;
    pTVar44[2].Protocol = (undefined4)local_1d8;
    pTVar44[2].TypeRef = local_1d8._4_4_;
    *(code **)&pTVar44[3].WitnessTablePattern = local_1c0;
    pTVar44[3].Protocol = (undefined4)local_1c8;
    pTVar44[3].TypeRef = local_1c8._4_4_;
    return (undefined1  [8])pTVar22;
  case 0x15:
  case 0x1d:
    do {
      if ((long)puVar41 < (long)puVar24) {
        plVar31 = (long *)((long)puVar26 + (long)puVar40 * lVar29 + 0x20);
        puVar34 = puVar41;
        do {
          puVar41 = puVar34;
          if ((*(byte *)((long)plVar31 + 0x21) & 1) == 0) {
            if (((*(byte *)((long)plVar31 + 9) & 1) != 0) ||
               (plVar31[2] < plVar31[0xffffffffffffffff])) goto LAB_1000b0060;
            if (plVar31[2] != plVar31[0xffffffffffffffff]) goto LAB_1000b0028;
            if ((*(byte *)(plVar31 + 4) & 1) == 0) {
              if (((*(byte *)(plVar31 + 1) & 1) != 0) || (*plVar31 <= plVar31[3]))
              goto LAB_1000b0028;
            }
            else if ((*(byte *)(plVar31 + 1) & 1) != 0) goto LAB_1000b0028;
LAB_1000b0060:
            if ((bVar30 & 1) == 0) goto LAB_1000b0124;
          }
          else {
LAB_1000b0028:
            if ((bVar30 & 1) != 0) goto LAB_1000b009c;
          }
          puVar34 = (undefined8 *)((long)puVar41 + 1);
          plVar31 = plVar31 + 3;
          puVar41 = puVar24;
        } while (puVar24 != puVar34);
      }
      if ((bVar30 & 1) != 0) {
LAB_1000b009c:
        if ((long)puVar41 < (long)puVar40) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1000b03f4);
          (*pcVar14)();
        }
        if ((long)puVar40 < (long)puVar41) {
          lVar25 = (long)puVar41 * 0x18;
          lVar35 = (long)puVar40 * 0x18;
          puVar34 = puVar41;
          puVar24 = puVar40;
          do {
            puVar34 = (undefined8 *)((long)puVar34 + -1);
            if (puVar24 != puVar34) {
              if (puVar26 == (ushort *)0x0) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x1000b0414);
                (*pcVar14)();
              }
              puVar2 = (undefined8 *)((long)puVar26 + lVar35);
              uVar7 = *(undefined1 *)(puVar2 + 2);
              uVar8 = *(undefined1 *)((long)puVar2 + 0x11);
              uVar46 = puVar2[1];
              uVar45 = *puVar2;
              uVar18 = *(undefined8 *)((long)puVar26 + lVar25 + -8);
              uVar50 = *(undefined8 *)((long)puVar26 + lVar25 + -0x18);
              puVar2[1] = *(undefined8 *)((long)puVar26 + lVar25 + -0x10);
              *puVar2 = uVar50;
              puVar2[2] = uVar18;
              *(undefined8 *)((long)puVar26 + lVar25 + -0x10) = uVar46;
              *(undefined8 *)((long)puVar26 + lVar25 + -0x18) = uVar45;
              *(undefined1 *)((long)puVar26 + lVar25 + -8) = uVar7;
              *(undefined1 *)((long)puVar26 + lVar25 + -7) = uVar8;
            }
            puVar24 = (undefined8 *)((long)puVar24 + 1);
            lVar25 = lVar25 + -0x18;
            lVar35 = lVar35 + 0x18;
          } while ((long)puVar24 < (long)puVar34);
          puVar24 = *(undefined8 **)&unaff_x20->WitnessTablePattern;
        }
      }
LAB_1000b0124:
      do {
        pTVar22 = local_2f8;
        puVar34 = puVar41;
        if ((long)puVar41 < (long)puVar24) {
          if (SBORROW8((long)puVar41,(long)puVar40)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x1000b03f0);
            (*pcVar14)();
          }
          if ((long)puVar41 - (long)puVar40 < (long)pTVar48) {
            if (SCARRY8((long)puVar40,(long)pTVar48)) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1000b03f8);
              (*pcVar14)();
            }
            puVar2 = (undefined8 *)((long)puVar40 + (long)pTVar48);
            if ((long)puVar24 <= (long)puVar40 + (long)pTVar48) {
              puVar2 = puVar24;
            }
            if ((long)puVar2 < (long)puVar40) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1000b03fc);
              (*pcVar14)();
            }
            if (puVar41 != puVar2) {
              lVar27 = *(long *)unaff_x20;
              plVar31 = (long *)(lVar27 + (long)puVar41 * lVar29 + -0x18);
              lVar35 = (long)puVar40 - (long)puVar41;
              lVar25 = lVar35;
              plVar33 = plVar31;
LAB_1000b018c:
              do {
                if ((*(byte *)((long)plVar31 + 0x29) & 1) == 0) {
                  lVar36 = plVar31[3];
                  if (((*(byte *)((long)plVar31 + 0x11) & 1) != 0) || (lVar36 < *plVar31))
                  goto LAB_1000b01dc;
                  if (lVar36 == *plVar31) {
                    if ((*(byte *)(plVar31 + 5) & 1) == 0) {
                      if (((*(byte *)(plVar31 + 2) & 1) == 0) && (plVar31[4] < plVar31[1]))
                      goto LAB_1000b01dc;
                    }
                    else if ((*(byte *)(plVar31 + 2) & 1) == 0) {
LAB_1000b01dc:
                      if (lVar27 == 0) {
                    /* WARNING: Does not return */
                        pcVar14 = (code *)SoftwareBreakpoint(1,0x1000b0400);
                        (*pcVar14)();
                      }
                      lVar47 = plVar31[1];
                      lVar42 = *plVar31;
                      lVar37 = plVar31[2];
                      *plVar31 = lVar36;
                      plVar31[1] = plVar31[4];
                      *(byte *)(plVar31 + 2) = *(byte *)(plVar31 + 5);
                      *(undefined1 *)((long)plVar31 + 0x11) = 0;
                      plVar31[4] = lVar47;
                      plVar31[3] = lVar42;
                      plVar31[5] = lVar37;
                      bVar15 = lVar35 != -1;
                      lVar35 = lVar35 + 1;
                      plVar31 = plVar31 + 0xfffffffffffffffd;
                      if (bVar15) goto LAB_1000b018c;
                    }
                  }
                }
                puVar41 = (undefined8 *)((long)puVar41 + 1);
                plVar31 = plVar33 + 3;
                lVar35 = lVar25 + -1;
                puVar34 = puVar2;
                lVar25 = lVar35;
                plVar33 = plVar31;
              } while (puVar41 != puVar2);
            }
          }
        }
        if ((long)puVar34 < (long)puVar40) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1000b03e0);
          (*pcVar14)();
        }
        pTVar23 = local_2f8;
        _swift_isUniquelyReferenced_nonNull_native();
        pTVar20 = pTVar22;
        if (((ulong)pTVar23 & 1) == 0) {
          pTVar20 = (TargetProtocolConformanceDescriptor *)0x0;
          FUN_100058444(0,*(long *)(pTVar22 + 1) + 1,1,pTVar22);
        }
        uVar32 = *(ulong *)(pTVar20 + 1);
        uVar5._0_4_ = pTVar20[1].WitnessTablePattern;
        uVar5._4_4_ = pTVar20[1].Flags;
        pTVar22 = pTVar20;
        if (uVar5 >> 1 <= uVar32) {
          pTVar22 = (TargetProtocolConformanceDescriptor *)(ulong)(1 < uVar5);
          FUN_100058444(pTVar22,uVar32 + 1,1,pTVar20);
        }
        *(ulong *)(pTVar22 + 1) = uVar32 + 1;
        *(undefined8 **)(pTVar22 + uVar32 + 2) = puVar40;
        *(undefined8 **)&pTVar22[uVar32 + 2].WitnessTablePattern = puVar34;
        lVar25._0_4_ = pTVar49->Protocol;
        lVar25._4_4_ = pTVar49->TypeRef;
        local_2f8 = pTVar22;
        if (lVar25 == 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1000b0418);
          (*pcVar14)();
        }
        FUN_1000b04e4(&local_2f8,lVar25,pTStack_308);
        pTVar22 = local_2f8;
        if (pTVar44 != (TargetProtocolConformanceDescriptor *)0x0) goto LAB_1000b03b0;
        puVar24 = *(undefined8 **)&pTStack_308->WitnessTablePattern;
        if ((long)puVar24 <= (long)puVar34) {
          lVar29._0_4_ = pTVar49->Protocol;
          lVar29._4_4_ = pTVar49->TypeRef;
          if (lVar29 == 0) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x1000b0420);
            (*pcVar14)();
          }
          pTVar23 = local_2f8;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)pTVar23 & 1) == 0) {
            FUN_100058430();
          }
          pTVar23 = pTVar22 + 1;
          uVar38._0_4_ = pTVar23->Protocol;
          uVar38._4_4_ = pTVar23->TypeRef;
          while (1 < uVar38) {
            lVar35 = *(long *)pTStack_308;
            if (lVar35 == 0) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1000b041c);
              (*pcVar14)();
            }
            pTVar20 = pTVar22 + uVar38;
            lVar27 = *(long *)pTVar20;
            pTVar43 = pTVar23 + uVar38;
            lVar25 = *(long *)&pTVar43->WitnessTablePattern;
            FUN_1000b0758(lVar35 + lVar27 * 0x18,lVar35 + *(ulong *)pTVar43 * 0x18,
                          lVar35 + lVar25 * 0x18,lVar29);
            if (lVar25 < lVar27) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1000b03e4);
              (*pcVar14)();
            }
            uVar28._0_4_ = pTVar23->Protocol;
            uVar28._4_4_ = pTVar23->TypeRef;
            if (uVar28 <= uVar38 - 2) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1000b03e8);
              (*pcVar14)();
            }
            pTVar20->Protocol = (int)lVar27;
            pTVar20->TypeRef = (int)((ulong)lVar27 >> 0x20);
            pTVar20->WitnessTablePattern = (int)lVar25;
            pTVar20->Flags = (ConformanceFlags)(int)((ulong)lVar25 >> 0x20);
            uVar32 = *(ulong *)pTVar23;
            lVar35 = uVar32 - uVar38;
            if (uVar32 < uVar38) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1000b03ec);
              (*pcVar14)();
            }
            uVar38 = uVar32 - 1;
            _memmove(pTVar43,pTVar43 + 1,lVar35 * 0x10);
            *(ulong *)pTVar23 = uVar38;
          }
LAB_1000b03b0:
          _swift_bridgeObjectRelease(pTVar22);
          return (undefined1  [8])pTVar22;
        }
        puVar41 = (undefined8 *)((long)puVar34 + 1);
        unaff_x20 = pTStack_308;
        puVar40 = puVar34;
      } while ((long)puVar24 <= (long)puVar41);
      puVar26 = *(ushort **)pTStack_308;
      plVar31 = (long *)((long)puVar26 + (long)puVar41 * lVar29);
      if ((*(byte *)((long)plVar31 + 0x11) & 1) == 0) {
        plVar33 = (long *)((long)puVar26 + (long)puVar34 * lVar29);
        if (((*(byte *)((long)plVar33 + 0x11) & 1) == 0) && (*plVar33 <= *plVar31)) {
          if (*plVar31 != *plVar33) goto LAB_1000affe4;
          bVar30 = plVar31[1] < plVar33[1] & (*(byte *)(plVar33 + 2) ^ 0xff);
          if ((*(byte *)(plVar31 + 2) & 1) != 0) {
            bVar30 = *(byte *)(plVar33 + 2) ^ 1;
          }
        }
        else {
          bVar30 = 1;
        }
      }
      else {
LAB_1000affe4:
        bVar30 = 0;
      }
      puVar41 = (undefined8 *)((long)puVar34 + 2);
    } while( true );
  case 0x16:
  case 0x1e:
    FUN_1000bc2f4();
    puVar21 = &DAT_1000fbf80;
    __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
              (lVar35,&DAT_1000fbf80,&DAT_1000fbf80,auVar16,pTVar20,lVar29);
    if (pTVar49 == (TargetProtocolConformanceDescriptor *)0x0) {
      pTVar20 = (TargetProtocolConformanceDescriptor *)(unaff_x27 >> 0x38);
      FUN_1000c03d8();
      __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
                (&stack0xffffffffffffffaf,&DAT_1000fb9f0,&stack0xffffffffffffffae,pTVar48,
                 &DAT_1000fb9f0,puVar21);
      __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(&stack0xffffffffffffffad,pTVar48);
      (*(code *)puVar40[1])(lVar35,pTVar48);
      FUN_100001428(pTVar44);
    }
    else {
      FUN_100001428(pTVar44);
    }
    return (undefined1  [8])pTVar20;
  case 0x17:
  case 0x1f:
    do {
      pTVar22 = (TargetProtocolConformanceDescriptor *)auVar16;
      puVar24 = puVar41;
      do {
        *(TargetProtocolConformanceDescriptor **)&pTVar44[0xd].WitnessTablePattern = pTVar48;
        *(TargetProtocolConformanceDescriptor **)(pTVar44 + 0xe) = pTVar49;
        *(char *)&pTVar44[0xe].WitnessTablePattern = (char)lVar29;
        pdStack_320 = &pTVar44[0xd].WitnessTablePattern;
        FUN_10006ff98(pTVar44 + 0x10,&pTVar44->WitnessTablePattern);
        uVar32 = 0;
        FUN_1000b38d0(FUN_1000b2a38,auStack_330,pTVar22);
        _swift_bridgeObjectRelease(pTVar22);
        if ((uVar32 & 1) != 0) {
          FUN_10001fc18(&pTVar44[0xf].WitnessTablePattern,&DAT_100104d48,&USHORT_1000d6ae0);
          FUN_10001fc18(pTVar44 + 0xf,&DAT_100104d68,&USHORT_1000d6ae8);
          pTVar22 = *(TargetProtocolConformanceDescriptor **)&pTVar44[0x16].WitnessTablePattern;
          uVar13._0_4_ = pTVar44[0x17].Protocol;
          uVar13._4_4_ = pTVar44[0x17].TypeRef;
          uVar32 = (ulong)pTVar22 & 0xffffffffffff;
          if ((uVar13 & 0x2000000000000000) != 0) {
            uVar32 = uVar13 >> 0x38 & 0xf;
          }
          if (uVar32 == 0) {
            FUN_10006ff98(pTVar44 + 0x10,&pTVar44->WitnessTablePattern);
            FUN_100084a5c(&pTVar44->WitnessTablePattern,pTVar44 + 0x10);
            FUN_10008efb4(pTVar44 + 0x10);
            FUN_10008efb4(pTVar44 + 0x10);
            pTVar22 = *(TargetProtocolConformanceDescriptor **)&pTVar44->WitnessTablePattern;
          }
          else {
            _swift_bridgeObjectRetain();
            FUN_10008efb4(pTVar44 + 0x10);
          }
          return (undefined1  [8])pTVar22;
        }
        FUN_10008efb4(pTVar44 + 0x10);
        puVar41 = puVar24 + 0x1a;
        puVar40 = (undefined8 *)((long)puVar40 + -1);
        if (puVar40 == (undefined8 *)0x0) {
          FUN_10001fc18(&pTVar44[0xf].WitnessTablePattern,&DAT_100104d48,&USHORT_1000d6ae0);
          FUN_10001fc18(pTVar44 + 0xf,&DAT_100104d68,&USHORT_1000d6ae8);
          return (undefined1  [8])(TargetProtocolConformanceDescriptor *)0x0;
        }
        uVar45 = puVar24[0x1b];
        uVar18 = *puVar41;
        pTVar44[0x10].WitnessTablePattern = (int)uVar45;
        pTVar44[0x10].Flags = (ConformanceFlags)(int)((ulong)uVar45 >> 0x20);
        pTVar44[0x10].Protocol = (int)uVar18;
        pTVar44[0x10].TypeRef = (int)((ulong)uVar18 >> 0x20);
        uVar45 = puVar24[0x1d];
        uVar18 = puVar24[0x1c];
        uVar50 = puVar24[0x1f];
        uVar46 = puVar24[0x1e];
        uVar52 = puVar24[0x21];
        uVar51 = puVar24[0x20];
        uVar54 = puVar24[0x23];
        uVar53 = puVar24[0x22];
        pTVar44[0x13].WitnessTablePattern = (int)uVar52;
        pTVar44[0x13].Flags = (ConformanceFlags)(int)((ulong)uVar52 >> 0x20);
        pTVar44[0x13].Protocol = (int)uVar51;
        pTVar44[0x13].TypeRef = (int)((ulong)uVar51 >> 0x20);
        pTVar44[0x14].WitnessTablePattern = (int)uVar54;
        pTVar44[0x14].Flags = (ConformanceFlags)(int)((ulong)uVar54 >> 0x20);
        pTVar44[0x14].Protocol = (int)uVar53;
        pTVar44[0x14].TypeRef = (int)((ulong)uVar53 >> 0x20);
        pTVar44[0x11].WitnessTablePattern = (int)uVar45;
        pTVar44[0x11].Flags = (ConformanceFlags)(int)((ulong)uVar45 >> 0x20);
        pTVar44[0x11].Protocol = (int)uVar18;
        pTVar44[0x11].TypeRef = (int)((ulong)uVar18 >> 0x20);
        pTVar44[0x12].WitnessTablePattern = (int)uVar50;
        pTVar44[0x12].Flags = (ConformanceFlags)(int)((ulong)uVar50 >> 0x20);
        pTVar44[0x12].Protocol = (int)uVar46;
        pTVar44[0x12].TypeRef = (int)((ulong)uVar46 >> 0x20);
        uVar45 = puVar24[0x25];
        uVar18 = puVar24[0x24];
        uVar50 = puVar24[0x27];
        uVar46 = puVar24[0x26];
        uVar52 = puVar24[0x29];
        uVar51 = puVar24[0x28];
        uVar54 = puVar24[0x2b];
        uVar53 = puVar24[0x2a];
        pTVar44[0x17].WitnessTablePattern = (int)uVar52;
        pTVar44[0x17].Flags = (ConformanceFlags)(int)((ulong)uVar52 >> 0x20);
        pTVar44[0x17].Protocol = (int)uVar51;
        pTVar44[0x17].TypeRef = (int)((ulong)uVar51 >> 0x20);
        pTVar44[0x18].WitnessTablePattern = (int)uVar54;
        pTVar44[0x18].Flags = (ConformanceFlags)(int)((ulong)uVar54 >> 0x20);
        pTVar44[0x18].Protocol = (int)uVar53;
        pTVar44[0x18].TypeRef = (int)((ulong)uVar53 >> 0x20);
        pTVar44[0x15].WitnessTablePattern = (int)uVar45;
        pTVar44[0x15].Flags = (ConformanceFlags)(int)((ulong)uVar45 >> 0x20);
        pTVar44[0x15].Protocol = (int)uVar18;
        pTVar44[0x15].TypeRef = (int)((ulong)uVar18 >> 0x20);
        pTVar44[0x16].WitnessTablePattern = (int)uVar50;
        pTVar44[0x16].Flags = (ConformanceFlags)(int)((ulong)uVar50 >> 0x20);
        pTVar44[0x16].Protocol = (int)uVar46;
        pTVar44[0x16].TypeRef = (int)((ulong)uVar46 >> 0x20);
        uVar45 = puVar24[0x2d];
        uVar18 = puVar24[0x2c];
        uVar50 = puVar24[0x2f];
        uVar46 = puVar24[0x2e];
        uVar52 = puVar24[0x31];
        uVar51 = puVar24[0x30];
        uVar54 = puVar24[0x33];
        uVar53 = puVar24[0x32];
        pTVar44[0x1b].WitnessTablePattern = (int)uVar52;
        pTVar44[0x1b].Flags = (ConformanceFlags)(int)((ulong)uVar52 >> 0x20);
        pTVar44[0x1b].Protocol = (int)uVar51;
        pTVar44[0x1b].TypeRef = (int)((ulong)uVar51 >> 0x20);
        pTVar44[0x1c].WitnessTablePattern = (int)uVar54;
        pTVar44[0x1c].Flags = (ConformanceFlags)(int)((ulong)uVar54 >> 0x20);
        pTVar44[0x1c].Protocol = (int)uVar53;
        pTVar44[0x1c].TypeRef = (int)((ulong)uVar53 >> 0x20);
        pTVar44[0x19].WitnessTablePattern = (int)uVar45;
        pTVar44[0x19].Flags = (ConformanceFlags)(int)((ulong)uVar45 >> 0x20);
        pTVar44[0x19].Protocol = (int)uVar18;
        pTVar44[0x19].TypeRef = (int)((ulong)uVar18 >> 0x20);
        pTVar44[0x1a].WitnessTablePattern = (int)uVar50;
        pTVar44[0x1a].Flags = (ConformanceFlags)(int)((ulong)uVar50 >> 0x20);
        pTVar44[0x1a].Protocol = (int)uVar46;
        pTVar44[0x1a].TypeRef = (int)((ulong)uVar46 >> 0x20);
        auVar16 = *(undefined1 (*) [8])(pTVar44 + 0x10);
        pTVar22 = (TargetProtocolConformanceDescriptor *)PTR___swiftEmptyArrayStorage_1000f0740;
        puVar24 = puVar41;
      } while ((ulong)auVar16 < (TargetProtocolConformanceDescriptor *)0x2);
      _swift_bridgeObjectRetain();
    } while( true );
  case 0x18:
  case 0x20:
    FUN_1000bc5e8();
    pTVar22 = (TargetProtocolConformanceDescriptor *)0x0;
    __ss9CodingKeyPsE16debugDescriptionSSvg(0,auVar16);
    return (undefined1  [8])pTVar22;
  case 0x28:
  case 0x2c:
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    return auVar16;
  case 0x30:
    uVar32 = 0x646e696b;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x646e696b,0xe400000000000000);
    if ((uVar32 & 1) != 0) {
      _swift_bridgeObjectRelease(pTVar44);
      return (undefined1  [8])(TargetProtocolConformanceDescriptor *)0x0;
    }
    pTVar23 = (TargetProtocolConformanceDescriptor *)0x7073;
  case 0x24:
    uVar32 = 0x6944646c756f6873;
    if (((unaff_x20 == (TargetProtocolConformanceDescriptor *)0x6944646c756f6873) &&
        (pTVar44 == (TargetProtocolConformanceDescriptor *)((ulong)pTVar23 | 0xed000079616c0000)))
       || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (), (uVar32 & 1) != 0)) {
      _swift_bridgeObjectRelease(pTVar44);
      pTVar22 = (TargetProtocolConformanceDescriptor *)0x1;
    }
    else {
      uVar32 = 0x546e6f6974636573;
      if (((unaff_x20 == (TargetProtocolConformanceDescriptor *)0x546e6f6974636573) &&
          (pTVar44 == (TargetProtocolConformanceDescriptor *)0xec000000656c7469)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar32 & 1) != 0)) {
        _swift_bridgeObjectRelease(pTVar44);
        pTVar22 = (TargetProtocolConformanceDescriptor *)0x2;
      }
      else {
        uVar32 = 0x6e6f6974704f7369;
        if (((unaff_x20 == (TargetProtocolConformanceDescriptor *)0x6e6f6974704f7369) &&
            (pTVar44 == (TargetProtocolConformanceDescriptor *)0xea00000000006c61)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x6e6f6974704f7369,0xea00000000006c61), (uVar32 & 1) != 0)) {
          _swift_bridgeObjectRelease(pTVar44);
          pTVar22 = (TargetProtocolConformanceDescriptor *)0x3;
        }
        else {
          uVar32 = 0x7461657065527369;
          if (((unaff_x20 == (TargetProtocolConformanceDescriptor *)0x7461657065527369) &&
              (pTVar44 == (TargetProtocolConformanceDescriptor *)0xeb00000000676e69)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar32 & 1) != 0)) {
            _swift_bridgeObjectRelease(pTVar44);
            pTVar22 = (TargetProtocolConformanceDescriptor *)0x4;
          }
          else {
            uVar32 = 0;
            if (((unaff_x20 == (TargetProtocolConformanceDescriptor *)0x53676e6973726170) &&
                (pTVar44 == (TargetProtocolConformanceDescriptor *)0xef79676574617274)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar32 & 1) != 0)) {
              _swift_bridgeObjectRelease(pTVar44);
              pTVar22 = (TargetProtocolConformanceDescriptor *)0x5;
            }
            else {
              uVar32 = 0;
              if (((unaff_x20 == (TargetProtocolConformanceDescriptor *)0x73656d616e) &&
                  (pTVar44 == (TargetProtocolConformanceDescriptor *)0xe500000000000000)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x73656d616e,0xe500000000000000), (uVar32 & 1) != 0)) {
                _swift_bridgeObjectRelease(pTVar44);
                pTVar22 = (TargetProtocolConformanceDescriptor *)0x6;
              }
              else {
                uVar32 = 0;
                if (((unaff_x20 == (TargetProtocolConformanceDescriptor *)0x6572726566657270) &&
                    (pTVar44 == (TargetProtocolConformanceDescriptor *)0xed0000656d614e64)) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar32 & 1) != 0)) {
                  _swift_bridgeObjectRelease(pTVar44);
                  pTVar22 = (TargetProtocolConformanceDescriptor *)0x7;
                }
                else {
                  uVar32 = 0;
                  if (((unaff_x20 == (TargetProtocolConformanceDescriptor *)0x6d614e65756c6176) &&
                      (pTVar44 == (TargetProtocolConformanceDescriptor *)0xe900000000000065)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x6d614e65756c6176,0xe900000000000065), (uVar32 & 1) != 0)) {
                    _swift_bridgeObjectRelease(pTVar44);
                    pTVar22 = (TargetProtocolConformanceDescriptor *)0x8;
                  }
                  else {
                    uVar32 = 0;
                    if (((unaff_x20 == (TargetProtocolConformanceDescriptor *)0x56746c7561666564) &&
                        (pTVar44 == (TargetProtocolConformanceDescriptor *)0xec00000065756c61)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (), (uVar32 & 1) != 0)) {
                      _swift_bridgeObjectRelease(pTVar44);
                      pTVar22 = (TargetProtocolConformanceDescriptor *)0x9;
                    }
                    else {
                      uVar32 = 0x65756c61566c6c61;
                      if (((unaff_x20 == (TargetProtocolConformanceDescriptor *)0x65756c61566c6c61)
                          && (pTVar44 == (TargetProtocolConformanceDescriptor *)0xe900000000000073))
                         || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                       (), (uVar32 & 1) != 0)) {
                        _swift_bridgeObjectRelease(pTVar44);
                        pTVar22 = (TargetProtocolConformanceDescriptor *)0xa;
                      }
                      else {
                        if ((unaff_x20 != (TargetProtocolConformanceDescriptor *)0xd000000000000014)
                           || (pTVar44 != (TargetProtocolConformanceDescriptor *)0x80000001000cb120)
                           ) {
                          uVar32 = 0;
                          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                    ();
                          if ((uVar32 & 1) == 0) {
                            uVar32 = 0x6974656c706d6f63;
                            if (((unaff_x20 !=
                                  (TargetProtocolConformanceDescriptor *)0x6974656c706d6f63) ||
                                (pTVar44 !=
                                 (TargetProtocolConformanceDescriptor *)0xee00646e694b6e6f)) &&
                               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                          (), (uVar32 & 1) == 0)) {
                              uVar32 = 0x7463617274736261;
                              if (((unaff_x20 !=
                                    (TargetProtocolConformanceDescriptor *)0x7463617274736261) ||
                                  (pTVar44 !=
                                   (TargetProtocolConformanceDescriptor *)0xe800000000000000)) &&
                                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                            (0x7463617274736261,0xe800000000000000),
                                 (uVar32 & 1) == 0)) {
                                uVar32 = 0;
                                if ((unaff_x20 ==
                                     (TargetProtocolConformanceDescriptor *)0x6973737563736964) &&
                                   (pTVar44 ==
                                    (TargetProtocolConformanceDescriptor *)0xea00000000006e6f)) {
                                  _swift_bridgeObjectRelease(0xea00000000006e6f);
                                  return (undefined1  [8])(TargetProtocolConformanceDescriptor *)0xe
                                  ;
                                }
                                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                          ();
                                _swift_bridgeObjectRelease(pTVar44);
                                uVar12._0_4_ = 0xe;
                                if ((uVar32 & 1) == 0) {
                                  uVar12._0_4_ = 0xf;
                                }
                                return (undefined1  [8])
                                       (TargetProtocolConformanceDescriptor *)(ulong)(uint)uVar12;
                              }
                              _swift_bridgeObjectRelease(pTVar44);
                              return (undefined1  [8])(TargetProtocolConformanceDescriptor *)0xd;
                            }
                            _swift_bridgeObjectRelease(pTVar44);
                            return (undefined1  [8])(TargetProtocolConformanceDescriptor *)0xc;
                          }
                        }
                        _swift_bridgeObjectRelease(pTVar44);
                        pTVar22 = (TargetProtocolConformanceDescriptor *)0xb;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return (undefined1  [8])pTVar22;
  case 0x34:
  case 0x6c:
  case 0x8f:
  case 0xc0:
    *(undefined4 *)(uVar32 - 0x100) = unaff_s14;
    *(undefined4 *)(uVar32 - 0xfc) = in_s25;
    uRamffffffffffffff3c = SUB84(pTVar48,0);
                    /* WARNING: Does not return */
    pcVar14 = (code *)UndefinedInstructionException(0x27,0x1000c9c18);
    uRamffffffffffffff38 = in_w7;
    (*pcVar14)();
  case 0x35:
  case 0x6d:
  case 0x90:
  case 0xc1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x36:
  case 0x6e:
  case 0x91:
  case 0xc2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x37:
  case 0x6f:
  case 0x92:
  case 0xc3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x38:
  case 0x70:
  case 0x93:
  case 0xc4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x39:
  case 0x71:
  case 0x94:
  case 0xc5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3a:
  case 0x72:
  case 0x95:
  case 0xc6:
                    /* WARNING: Does not return */
    pcVar14 = (code *)UndefinedInstructionException(0,0x1000c9ca0);
    (*pcVar14)();
  case 0x40:
  case 0x8c:
                    /* WARNING: Does not return */
    pcVar14 = (code *)UndefinedInstructionException(0,0x1000c9c1c);
    (*pcVar14)();
  case 0x41:
  case 0x8d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x42:
    pTVar22 = unaff_x20;
    FUN_1000c05b8();
    if (pTVar22 == (TargetProtocolConformanceDescriptor *)0x2) {
      lVar35 = 0xc0;
      if ((unaff_x20[2].Protocol & 0x1000000) != 0) {
        lVar35 = 0xd0;
      }
      _swift_errorRetain(*(undefined8 *)
                          ((long)&unaff_x20[1].Protocol +
                          ((ulong)((uint)unaff_x20[2].Protocol >> 0x17) & 8) + lVar35));
    }
    else {
      if (pTVar22 != (TargetProtocolConformanceDescriptor *)0x1) {
        return (undefined1  [8])pTVar22;
      }
      lVar35 = 0xc0;
      if ((unaff_x20[2].Protocol & 0x1000000) != 0) {
        lVar35 = 0xd0;
      }
      lVar35 = ((ulong)((uint)unaff_x20[2].Protocol >> 0x17) & 8) + lVar35;
      lVar29 = *(long *)(*(long *)((long)&unaff_x20->WitnessTablePattern + lVar35) + -8);
      uVar32 = (ulong)*(byte *)(lVar29 + 0x50);
      (**(code **)(lVar29 + 0x10))
                (pTVar44,(long)&unaff_x20[1].WitnessTablePattern + uVar32 + lVar35 &
                         (uVar32 ^ 0xffffffffffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x0001000c098c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)local_310)();
    return (undefined1  [8])local_310;
  case 0x43:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x44:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x46:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x47:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x48:
    auVar11._4_28_ = in_register_000051c4;
    auVar11._0_4_ = unaff_s14;
    SVE_fnmls(in_z12,in_p2,in_z11,auVar11);
    halt_baddata();
  case 0x49:
                    /* WARNING: Does not return */
    pcVar14 = (code *)UndefinedInstructionException(0,0x1000c90d8);
    (*pcVar14)();
  case 0x4c:
  case 0x50:
    pTVar22 = &TargetProtocolConformanceDescriptor_1000d7170;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d7170,&DAT_1000fb958);
    DAT_100105248 = pTVar22;
    return (undefined1  [8])pTVar22;
  case 0x54:
    (**(code **)&pTVar48->WitnessTablePattern)(pTVar20,puVar41);
    pTVar44[10].Protocol = 0;
    pTVar44[10].TypeRef = 0;
    pTVar44[10].WitnessTablePattern = 0;
    pTVar44[10].Flags.field_0x0 = 0;
    pTVar44[10].Flags.NumConditionalRequirements = 0;
    pTVar44[10].Flags.field_0x2 = 0;
    pTVar44[10].Flags.NumConditionalPackDescriptor = 0;
    pTVar44[9].Protocol = 0;
    pTVar44[9].TypeRef = 0;
    uVar50._0_4_ = pTVar44[8].WitnessTablePattern;
    uVar50._4_4_ = pTVar44[8].Flags;
    uVar18._0_4_ = pTVar44[9].WitnessTablePattern;
    uVar18._4_4_ = pTVar44[9].Flags;
    FUN_100001428(uVar18);
    _swift_bridgeObjectRelease(uVar50);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    uVar45._0_4_ = pTVar44[9].Protocol;
    uVar45._4_4_ = pTVar44[9].TypeRef;
    uVar46._0_4_ = pTVar44[10].Protocol;
    uVar46._4_4_ = pTVar44[10].TypeRef;
    FUN_1000bd300(uVar45,uVar46,0xff);
    pTVar22 = *(TargetProtocolConformanceDescriptor **)&pTVar44[10].WitnessTablePattern;
    _swift_bridgeObjectRelease(pTVar22);
    return (undefined1  [8])pTVar22;
  case 0x55:
    auVar10._8_8_ = in_register_00005068;
    auVar10._0_8_ = in_d3;
    auVar10._16_8_ = in_register_00005070;
    auVar10._24_8_ = in_register_00005078;
    SVE_fmls(in_z5,in_p0,auVar10,in_z7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x56:
    *(undefined4 *)(uVar32 - 0x100) = in_s18;
    *(undefined4 *)(uVar32 - 0xfc) = in_s27;
  case 0x45:
    auVar9._8_8_ = in_register_00005068;
    auVar9._0_8_ = in_d3;
    auVar9._16_8_ = in_register_00005070;
    auVar9._24_8_ = in_register_00005078;
    SVE_fmls(in_z4,in_p0,auVar9,in_z4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x58:
    pTVar22 = &TargetProtocolConformanceDescriptor_1000d799c;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d799c,&DAT_1000fbef0);
    DAT_100121918 = pTVar22;
    return (undefined1  [8])pTVar22;
  case 0x59:
  case 0xd9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5b:
  case 0x5f:
  case 0xa9:
  case 0xad:
  case 0xb1:
  case 0xb5:
  case 0xdb:
  case 0xdf:
  case 0xf9:
                    /* WARNING: Does not return */
    pcVar14 = (code *)UndefinedInstructionException(0,0x1000ed2fc);
    (*pcVar14)();
  case 0x5e:
                    /* WARNING: Does not return */
    pcVar14 = (code *)UndefinedInstructionException(0,0x1000dd8b8);
    (*pcVar14)();
  case 0x68:
    return (undefined1  [8])&DAT_1000fbcc0;
  case 0x73:
    FUN_1000c1038();
    if (((ulong)pTVar49 & 1) != 0) {
      uVar32._0_4_ = pTVar44[5].Protocol;
      uVar32._4_4_ = pTVar44[5].TypeRef;
      uVar12._0_4_ = pTVar44[5].WitnessTablePattern;
      uVar12._4_4_ = pTVar44[5].Flags;
      uVar13 = uVar12;
      while (((uint)uVar12 >> 9 & 1) == 0) {
        uVar12 = uVar13;
        if (((uint)uVar13 >> 10 & 1) != 0) {
          uVar12 = uVar13 & 0xfffffffffffff9ff;
          *(char *)((long)&pTVar44[2].Protocol + 1) = (char)uVar13;
        }
        pTVar22 = pTVar44 + 5;
        uVar3._0_4_ = pTVar22->Protocol;
        uVar3._4_4_ = pTVar22->TypeRef;
        uVar4._0_4_ = pTVar44[5].WitnessTablePattern;
        uVar4._4_4_ = pTVar44[5].Flags;
        if ((uVar3 == uVar13) && (uVar4 == uVar32)) {
          pTVar22->Protocol = (int)(uVar12 | 0x800);
          pTVar22->TypeRef = (int)((uVar12 | 0x800) >> 0x20);
          pTVar44[5].WitnessTablePattern = (int)uVar32;
          pTVar44[5].Flags = (ConformanceFlags)(int)(uVar32 >> 0x20);
        }
        if (uVar3 == uVar32 && uVar4 == uVar13) goto LAB_1000c0764;
        uVar32 = uVar3;
        uVar13 = uVar4;
        uVar12._0_4_ = (undefined4)uVar4;
      }
      FUN_1000c09c4(pTVar44);
LAB_1000c0764:
      FUN_1000c0de8(pTVar44);
      FUN_1000c183c(pTVar44 + 8);
    }
    return (undefined1  [8])pTVar20;
  case 0x74:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x75:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7d:
                    /* WARNING: Does not return */
    pcVar14 = (code *)UndefinedInstructionException(0x2c,0x1000ed2e8);
    (*pcVar14)();
  case 0x81:
    if (in_ZR) {
      return auVar16;
    }
    FUN_1000bd314();
    return auVar16;
  case 0x82:
    return auVar16;
  case 0x84:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x85:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x88:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x89:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8a:
                    /* WARNING: Does not return */
    pcVar14 = (code *)UndefinedInstructionException(0,0x1000c5898);
    (*pcVar14)();
  case 0x8b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x96:
                    /* WARNING: Subroutine does not return */
    FUN_1000c0da0(0,"\'%s\' failed with error \'%s\'(%d)\n");
  case 0x97:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x98:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x99:
                    /* WARNING: Does not return */
    pcVar14 = (code *)UndefinedInstructionException(0,0x1000c9cc4);
    (*pcVar14)();
  case 0x9c:
    return (undefined1  [8])&DAT_1000fc0a0;
  case 0x9e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa6:
  case 0xaa:
  case 0xae:
  case 0xb2:
    if (!in_ZR) {
      uRam0000000000000001 = 0xd6a90;
      return auVar16;
    }
    uRam0000000000000001 = CONCAT22(uRam0000000000000001._2_2_,0x6a90);
    return auVar16;
  case 0xa8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xac:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb0:
                    /* WARNING: Does not return */
    pcVar14 = (code *)UndefinedInstructionException(0,0x1000deb68);
    (*pcVar14)();
  case 0xb4:
                    /* WARNING: Does not return */
    pcVar14 = (code *)UndefinedInstructionException(0,0x1000deb98);
    (*pcVar14)();
  case 0xba:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 199:
                    /* WARNING: Could not recover jumptable at 0x0001000c2308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return auVar16;
  case 200:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd8:
    if ((TargetProtocolConformanceDescriptor *)puVar24[0xa4] ==
        (TargetProtocolConformanceDescriptor *)0x0) {
      pTVar22 = &TargetProtocolConformanceDescriptor_1000d7de4;
      _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d7de4,&DAT_1000fbc30);
      DAT_100121520 = pTVar22;
      return (undefined1  [8])pTVar22;
    }
    return (undefined1  [8])puVar24[0xa4];
  case 0xda:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xde:
                    /* WARNING: Does not return */
    pcVar14 = (code *)UndefinedInstructionException(2,0x1000e1138);
    (*pcVar14)();
  case 0xe8:
    return auVar16;
  case 0xec:
    _swift_getWitnessTable(0,0xde0);
    DAT_100121648 = (TargetProtocolConformanceDescriptor *)auVar16;
    return auVar16;
  case 0xee:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf6:
    return auVar16;
  case 0xf8:
                    /* WARNING: Does not return */
    pcVar14 = (code *)UndefinedInstructionException(2,0x1000e14f8);
    (*pcVar14)();
  case 0xfe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return auVar16;
}

