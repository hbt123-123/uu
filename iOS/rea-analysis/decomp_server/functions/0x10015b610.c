// rea decompile_all
// name: FUN_10015b610
// address: 0x10015b610
// body: available
// range: 0x10015b610-0x10015bf97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10015b610(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long extraout_x8;
  code *pcVar12;
  long unaff_x20;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_270 [16];
  undefined8 auStack_260 [2];
  undefined8 auStack_250 [2];
  long alStack_240 [2];
  undefined1 auStack_230 [8];
  undefined1 auStack_200 [16];
  uint *local_1f0;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [192];
  undefined1 local_108;
  uint local_100 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  uint local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulong local_b8 [6];
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar5 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = -extraout_x8;
  puVar13 = auStack_230 + lVar8;
  FUN_100401b14(0);
  pcVar12 = FUN_10016b3c8;
  local_1f0 = param_2;
  FUN_1003fb45c(FUN_10016b3c8,auStack_200,0xd0000000000000a4,0x800000010088d870,0xd000000000000038,
                0x8000000100893090,0x19e,7);
  if (*(char *)(unaff_x20 +
               _TtC14UURemoteServer18ClipboardPCManager::remoteAssistFileTransferEnabled) == '\x01')
  {
    uVar2 = param_2[2];
    FUN_100153208();
    pcVar6 = pcVar12;
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(uint **)((long)auStack_250 + lVar8) = param_2;
    *(code **)((long)auStack_250 + lVar8 + 8) = pcVar6;
    *(undefined8 **)((long)alStack_240 + lVar8) = param_1;
    puVar5 = &DAT_100a7a338;
    FUN_100004bb4(&DAT_100a7a338,&DAT_10080ecd0);
    puVar7 = puVar5;
    _swift_allocObject();
    if (uVar2 - 3 < 2) {
      pcVar6 = FUN_10016b46c;
      FUN_100615648(FUN_10016b46c,(long)auStack_260 + lVar8,puVar7);
      _swift_release(pcVar12);
      lVar8 = 0;
      __s8Dispatch0A13WorkItemFlagsVMa();
      pcVar12 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
      (*pcVar12)(puVar13,1,1,lVar8);
      puVar7 = &DAT_10099f470;
      _swift_allocObject(&DAT_10099f470,0x108,7);
      uVar14 = *(undefined8 *)param_2;
      uVar16 = *(undefined8 *)(param_2 + 6);
      uVar15 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(puVar7 + 0x20) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(puVar7 + 0x18) = uVar14;
      *(undefined8 *)(puVar7 + 0x30) = uVar16;
      *(undefined8 *)(puVar7 + 0x28) = uVar15;
      uVar14 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar7 + 0x40) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(puVar7 + 0x38) = uVar14;
      uVar14 = param_1[0x10];
      uVar16 = param_1[0x13];
      uVar15 = param_1[0x12];
      *(undefined8 *)(puVar7 + 0xd0) = param_1[0x11];
      *(undefined8 *)(puVar7 + 200) = uVar14;
      *(undefined8 *)(puVar7 + 0xe0) = uVar16;
      *(undefined8 *)(puVar7 + 0xd8) = uVar15;
      uVar14 = param_1[0x14];
      uVar16 = param_1[0x17];
      uVar15 = param_1[0x16];
      *(undefined8 *)(puVar7 + 0xf0) = param_1[0x15];
      *(undefined8 *)(puVar7 + 0xe8) = uVar14;
      *(undefined8 *)(puVar7 + 0x100) = uVar16;
      *(undefined8 *)(puVar7 + 0xf8) = uVar15;
      uVar14 = param_1[8];
      uVar16 = param_1[0xb];
      uVar15 = param_1[10];
      *(undefined8 *)(puVar7 + 0x90) = param_1[9];
      *(undefined8 *)(puVar7 + 0x88) = uVar14;
      *(undefined8 *)(puVar7 + 0xa0) = uVar16;
      *(undefined8 *)(puVar7 + 0x98) = uVar15;
      uVar14 = param_1[0xc];
      uVar16 = param_1[0xf];
      uVar15 = param_1[0xe];
      *(undefined8 *)(puVar7 + 0xb0) = param_1[0xd];
      *(undefined8 *)(puVar7 + 0xa8) = uVar14;
      *(undefined8 *)(puVar7 + 0xc0) = uVar16;
      *(undefined8 *)(puVar7 + 0xb8) = uVar15;
      uVar14 = *param_1;
      uVar16 = param_1[3];
      uVar15 = param_1[2];
      *(undefined8 *)(puVar7 + 0x50) = param_1[1];
      *(undefined8 *)(puVar7 + 0x48) = uVar14;
      *(undefined8 *)(puVar7 + 0x60) = uVar16;
      *(undefined8 *)(puVar7 + 0x58) = uVar15;
      uVar14 = param_1[4];
      uVar16 = param_1[7];
      uVar15 = param_1[6];
      *(undefined8 *)(puVar7 + 0x70) = param_1[5];
      *(undefined8 *)(puVar7 + 0x68) = uVar14;
      *(long *)(puVar7 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar7 + 0x80) = uVar16;
      *(undefined8 *)(puVar7 + 0x78) = uVar15;
      FUN_100135bf4(param_2,auStack_1c8);
      puVar10 = param_1;
      FUN_1000408d0(param_1,auStack_1c8);
      FUN_10060edd8();
      _swift_beginAccess();
      uVar14 = puVar10[1];
      puVar11 = &DAT_100a7a340;
      FUN_10003f840(&DAT_100a7a340,&DAT_100a7a338,&DAT_10080ecd0,
                    &TargetProtocolConformanceDescriptor_1008488a0);
      FUN_1006170a4(uVar14,puVar13,FUN_10016b488,puVar7,puVar5,puVar11);
      _swift_release(pcVar6);
      _swift_release(puVar7);
      FUN_100040bb4(puVar13,&DAT_100a77040,&DAT_10080e910);
      (*pcVar12)(puVar13,1,1,lVar8);
      puVar5 = &DAT_10099f498;
      _swift_allocObject(&DAT_10099f498,0x108,7);
      uVar15 = *(undefined8 *)param_2;
      uVar17 = *(undefined8 *)(param_2 + 6);
      uVar16 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(puVar5 + 0x18) = uVar15;
      *(undefined8 *)(puVar5 + 0x30) = uVar17;
      *(undefined8 *)(puVar5 + 0x28) = uVar16;
      uVar15 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar5 + 0x40) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(puVar5 + 0x38) = uVar15;
      uVar15 = param_1[0x10];
      uVar17 = param_1[0x13];
      uVar16 = param_1[0x12];
      *(undefined8 *)(puVar5 + 0xd0) = param_1[0x11];
      *(undefined8 *)(puVar5 + 200) = uVar15;
      *(undefined8 *)(puVar5 + 0xe0) = uVar17;
      *(undefined8 *)(puVar5 + 0xd8) = uVar16;
      uVar15 = param_1[0x14];
      uVar17 = param_1[0x17];
      uVar16 = param_1[0x16];
      *(undefined8 *)(puVar5 + 0xf0) = param_1[0x15];
      *(undefined8 *)(puVar5 + 0xe8) = uVar15;
      *(undefined8 *)(puVar5 + 0x100) = uVar17;
      *(undefined8 *)(puVar5 + 0xf8) = uVar16;
      uVar15 = param_1[8];
      uVar17 = param_1[0xb];
      uVar16 = param_1[10];
      *(undefined8 *)(puVar5 + 0x90) = param_1[9];
      *(undefined8 *)(puVar5 + 0x88) = uVar15;
      *(undefined8 *)(puVar5 + 0xa0) = uVar17;
      *(undefined8 *)(puVar5 + 0x98) = uVar16;
      uVar15 = param_1[0xc];
      uVar17 = param_1[0xf];
      uVar16 = param_1[0xe];
      *(undefined8 *)(puVar5 + 0xb0) = param_1[0xd];
      *(undefined8 *)(puVar5 + 0xa8) = uVar15;
      *(undefined8 *)(puVar5 + 0xc0) = uVar17;
      *(undefined8 *)(puVar5 + 0xb8) = uVar16;
      uVar15 = *param_1;
      uVar17 = param_1[3];
      uVar16 = param_1[2];
      *(undefined8 *)(puVar5 + 0x50) = param_1[1];
      *(undefined8 *)(puVar5 + 0x48) = uVar15;
      *(undefined8 *)(puVar5 + 0x60) = uVar17;
      *(undefined8 *)(puVar5 + 0x58) = uVar16;
      uVar15 = param_1[4];
      uVar17 = param_1[7];
      uVar16 = param_1[6];
      *(undefined8 *)(puVar5 + 0x70) = param_1[5];
      *(undefined8 *)(puVar5 + 0x68) = uVar15;
      *(long *)(puVar5 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar5 + 0x80) = uVar17;
      *(undefined8 *)(puVar5 + 0x78) = uVar16;
      _swift_beginAccess(puVar10,local_100,0,0);
      uVar15 = puVar10[1];
      _swift_beginAccess(puVar10,auStack_1e0,0,0);
      uVar3 = *(undefined1 *)(puVar10 + 2);
      FUN_100135bf4(param_2,auStack_1c8);
      FUN_1000408d0(param_1,auStack_1c8);
      puVar7 = &DAT_100a77058;
      FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
      puVar11 = &DAT_100a77060;
      FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                    &TargetProtocolConformanceDescriptor_1008488bc);
      FUN_10060913c(uVar15,puVar13,uVar3,FUN_10016b554,puVar5,puVar7,puVar11);
      _swift_release();
    }
    else {
      pcVar6 = FUN_10016b41c;
      FUN_100615648(FUN_10016b41c,(long)auStack_260 + lVar8,puVar7);
      _swift_release(pcVar12);
      lVar8 = 0;
      __s8Dispatch0A13WorkItemFlagsVMa();
      pcVar12 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
      (*pcVar12)(puVar13,1,1,lVar8);
      puVar7 = &DAT_10099f420;
      _swift_allocObject(&DAT_10099f420,0x108,7);
      uVar14 = *(undefined8 *)param_2;
      uVar16 = *(undefined8 *)(param_2 + 6);
      uVar15 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(puVar7 + 0x20) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(puVar7 + 0x18) = uVar14;
      *(undefined8 *)(puVar7 + 0x30) = uVar16;
      *(undefined8 *)(puVar7 + 0x28) = uVar15;
      uVar14 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar7 + 0x40) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(puVar7 + 0x38) = uVar14;
      uVar14 = param_1[0x10];
      uVar16 = param_1[0x13];
      uVar15 = param_1[0x12];
      *(undefined8 *)(puVar7 + 0xd0) = param_1[0x11];
      *(undefined8 *)(puVar7 + 200) = uVar14;
      *(undefined8 *)(puVar7 + 0xe0) = uVar16;
      *(undefined8 *)(puVar7 + 0xd8) = uVar15;
      uVar14 = param_1[0x14];
      uVar16 = param_1[0x17];
      uVar15 = param_1[0x16];
      *(undefined8 *)(puVar7 + 0xf0) = param_1[0x15];
      *(undefined8 *)(puVar7 + 0xe8) = uVar14;
      *(undefined8 *)(puVar7 + 0x100) = uVar16;
      *(undefined8 *)(puVar7 + 0xf8) = uVar15;
      uVar14 = param_1[8];
      uVar16 = param_1[0xb];
      uVar15 = param_1[10];
      *(undefined8 *)(puVar7 + 0x90) = param_1[9];
      *(undefined8 *)(puVar7 + 0x88) = uVar14;
      *(undefined8 *)(puVar7 + 0xa0) = uVar16;
      *(undefined8 *)(puVar7 + 0x98) = uVar15;
      uVar14 = param_1[0xc];
      uVar16 = param_1[0xf];
      uVar15 = param_1[0xe];
      *(undefined8 *)(puVar7 + 0xb0) = param_1[0xd];
      *(undefined8 *)(puVar7 + 0xa8) = uVar14;
      *(undefined8 *)(puVar7 + 0xc0) = uVar16;
      *(undefined8 *)(puVar7 + 0xb8) = uVar15;
      uVar14 = *param_1;
      uVar16 = param_1[3];
      uVar15 = param_1[2];
      *(undefined8 *)(puVar7 + 0x50) = param_1[1];
      *(undefined8 *)(puVar7 + 0x48) = uVar14;
      *(undefined8 *)(puVar7 + 0x60) = uVar16;
      *(undefined8 *)(puVar7 + 0x58) = uVar15;
      uVar14 = param_1[4];
      uVar16 = param_1[7];
      uVar15 = param_1[6];
      *(undefined8 *)(puVar7 + 0x70) = param_1[5];
      *(undefined8 *)(puVar7 + 0x68) = uVar14;
      *(long *)(puVar7 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar7 + 0x80) = uVar16;
      *(undefined8 *)(puVar7 + 0x78) = uVar15;
      FUN_100135bf4(param_2,auStack_1c8);
      puVar10 = param_1;
      FUN_1000408d0(param_1,auStack_1c8);
      FUN_10060edd8();
      _swift_beginAccess();
      uVar14 = puVar10[1];
      puVar11 = &DAT_100a7a340;
      FUN_10003f840(&DAT_100a7a340,&DAT_100a7a338,&DAT_10080ecd0,
                    &TargetProtocolConformanceDescriptor_1008488a0);
      FUN_1006170a4(uVar14,puVar13,FUN_10016b43c,puVar7,puVar5,puVar11);
      _swift_release(pcVar6);
      _swift_release(puVar7);
      FUN_100040bb4(puVar13,&DAT_100a77040,&DAT_10080e910);
      (*pcVar12)(puVar13,1,1,lVar8);
      puVar5 = &DAT_10099f448;
      _swift_allocObject(&DAT_10099f448,0x108,7);
      uVar15 = *(undefined8 *)param_2;
      uVar17 = *(undefined8 *)(param_2 + 6);
      uVar16 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(puVar5 + 0x18) = uVar15;
      *(undefined8 *)(puVar5 + 0x30) = uVar17;
      *(undefined8 *)(puVar5 + 0x28) = uVar16;
      uVar15 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar5 + 0x40) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(puVar5 + 0x38) = uVar15;
      uVar15 = param_1[0x10];
      uVar17 = param_1[0x13];
      uVar16 = param_1[0x12];
      *(undefined8 *)(puVar5 + 0xd0) = param_1[0x11];
      *(undefined8 *)(puVar5 + 200) = uVar15;
      *(undefined8 *)(puVar5 + 0xe0) = uVar17;
      *(undefined8 *)(puVar5 + 0xd8) = uVar16;
      uVar15 = param_1[0x14];
      uVar17 = param_1[0x17];
      uVar16 = param_1[0x16];
      *(undefined8 *)(puVar5 + 0xf0) = param_1[0x15];
      *(undefined8 *)(puVar5 + 0xe8) = uVar15;
      *(undefined8 *)(puVar5 + 0x100) = uVar17;
      *(undefined8 *)(puVar5 + 0xf8) = uVar16;
      uVar15 = param_1[8];
      uVar17 = param_1[0xb];
      uVar16 = param_1[10];
      *(undefined8 *)(puVar5 + 0x90) = param_1[9];
      *(undefined8 *)(puVar5 + 0x88) = uVar15;
      *(undefined8 *)(puVar5 + 0xa0) = uVar17;
      *(undefined8 *)(puVar5 + 0x98) = uVar16;
      uVar15 = param_1[0xc];
      uVar17 = param_1[0xf];
      uVar16 = param_1[0xe];
      *(undefined8 *)(puVar5 + 0xb0) = param_1[0xd];
      *(undefined8 *)(puVar5 + 0xa8) = uVar15;
      *(undefined8 *)(puVar5 + 0xc0) = uVar17;
      *(undefined8 *)(puVar5 + 0xb8) = uVar16;
      uVar15 = *param_1;
      uVar17 = param_1[3];
      uVar16 = param_1[2];
      *(undefined8 *)(puVar5 + 0x50) = param_1[1];
      *(undefined8 *)(puVar5 + 0x48) = uVar15;
      *(undefined8 *)(puVar5 + 0x60) = uVar17;
      *(undefined8 *)(puVar5 + 0x58) = uVar16;
      uVar15 = param_1[4];
      uVar17 = param_1[7];
      uVar16 = param_1[6];
      *(undefined8 *)(puVar5 + 0x70) = param_1[5];
      *(undefined8 *)(puVar5 + 0x68) = uVar15;
      *(long *)(puVar5 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar5 + 0x80) = uVar17;
      *(undefined8 *)(puVar5 + 0x78) = uVar16;
      _swift_beginAccess(puVar10,local_100,0,0);
      uVar15 = puVar10[1];
      _swift_beginAccess(puVar10,auStack_1e0,0,0);
      uVar3 = *(undefined1 *)(puVar10 + 2);
      FUN_100135bf4(param_2,auStack_1c8);
      FUN_1000408d0(param_1,auStack_1c8);
      puVar7 = &DAT_100a77058;
      FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
      puVar11 = &DAT_100a77060;
      FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                    &TargetProtocolConformanceDescriptor_1008488bc);
      FUN_10060913c(uVar15,puVar13,uVar3,FUN_10016b45c,puVar5,puVar7,puVar11);
      _swift_release();
    }
    _swift_release(uVar14);
    _swift_release(puVar5);
    FUN_100040bb4(puVar13,&DAT_100a77040,&DAT_10080e910);
  }
  else {
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(uint **)((long)alStack_240 + lVar8) = param_2;
    FUN_1003fb48c(FUN_10016b3d0,(long)auStack_250 + lVar8,0xd0000000000000a4,0x800000010088d870,
                  0xd000000000000038,0x8000000100893090,0x1c4,0);
    lVar9 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar9 == 0) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(uint **)((long)auStack_250 + lVar8) = param_2;
      *(undefined8 *)((long)auStack_250 + lVar8 + 8) = 0xd000000000000020;
      *(undefined8 *)((long)alStack_240 + lVar8) = 0x80000001008930d0;
      *(undefined8 *)((long)alStack_240 + lVar8 + 8) = 0;
      FUN_1003fb4ec(FUN_10016b3d8,(long)auStack_260 + lVar8,0xd0000000000000a4,0x800000010088d870,
                    0xd00000000000001c,0x8000000100893100,0x1a6,7);
    }
    else {
      uVar2 = *param_2;
      local_b8[0] = (ulong)uVar2;
      uVar1 = param_2[1];
      uStack_88 = (ulong)uVar1;
      uVar14 = *(undefined8 *)(param_2 + 4);
      local_108 = 1;
      local_b8[2] = 0xc000000000000000;
      local_b8[1] = 0;
      local_b8[3] = 2;
      local_b8[4] = 1;
      uStack_78 = 0xe000000000000000;
      local_80 = 0;
      local_b8[5] = uVar14;
      FUN_100193df4(auStack_1c8,local_b8);
      FUN_1001bddd8(param_1,auStack_1c8);
      uVar4 = SUB84(param_1,0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(uint **)((long)auStack_260 + lVar8) = param_2;
      *(undefined8 *)((long)auStack_260 + lVar8 + 8) = 0xd000000000000020;
      *(undefined8 *)((long)auStack_250 + lVar8) = 0x80000001008930d0;
      *(undefined8 *)((long)auStack_250 + lVar8 + 8) = 0;
      *(undefined4 *)((long)alStack_240 + lVar8) = uVar4;
      FUN_1003fb4ec(thunk_FUN_10016c040,auStack_270 + lVar8,0xd0000000000000a4,0x800000010088d870,
                    0xd00000000000001c,0x8000000100893100,0x1b1,7);
      FUN_10016b308(auStack_1c8);
      _swift_unknownObjectRelease(lVar9);
      uStack_f0 = 0xc000000000000000;
      local_f8 = 0;
      local_e8 = 2;
      local_e0 = local_108;
      uStack_c0 = 0xc000000000000000;
      local_c8 = 0;
      local_100[0] = uVar2;
      local_d8 = uVar14;
      local_d0 = uVar1;
      FUN_10016b3e8(local_100);
    }
  }
  return;
}

