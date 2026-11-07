// rea decompile_all
// name: FUN_10010d6c4
// address: 0x10010d6c4
// body: available
// range: 0x10010d6c4-0x10010dc63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10010d6c4(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ID IVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x12;
  ulong uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined1 auStack_2e0 [16];
  uint auStack_2d0 [4];
  undefined *apuStack_2c0 [4];
  undefined8 local_2a0;
  long local_298;
  char *local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  uint local_274;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  lVar6 = 0;
  local_288 = param_2;
  uStack_280 = param_3;
  local_274 = param_1;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar17 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  puVar20 = (undefined8 *)((long)apuStack_2c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar7 = 0;
  __s10Foundation4UUIDVMa();
  local_298 = *(long *)(lVar7 + -8);
  lVar16 = *(long *)(local_298 + 0x40);
  local_290 = (char *)lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar21 = (long)puVar20 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar7 = lVar21 - extraout_x12;
  uVar8 = 0;
  FUN_1003a8798();
  FUN_1003a793c();
  if ((uVar8 & 1) == 0) {
    local_298 = lVar17;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(uint *)(lVar7 + -0x10) = local_274;
    local_290 = "butor";
    FUN_1003fb4ec(FUN_100112d24,lVar7 + -0x20,0xd0000000000000ac,0x800000010088b950,
                  0xd00000000000002b,0x800000010088c020,0xcd,0);
    FUN_10010cdd4(0x271a);
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar16 = DAT_100b360a8;
    uVar14 = *(undefined8 *)(DAT_100b360a8 + 0xa8);
    uVar10 = local_288;
    uVar12 = uStack_280;
    local_270 = uVar14;
    FUN_100435bb4(local_288,uStack_280,param_4);
    local_258 = 0x271a;
    local_268 = uVar10;
    uStack_260 = uVar12;
    FUN_100112d2c(&local_268);
    uStack_a8 = uStack_1a0;
    local_b0 = local_1a8;
    uStack_98 = uStack_190;
    uStack_a0 = uStack_198;
    uStack_88 = uStack_180;
    local_90 = local_188;
    local_80 = local_178;
    uStack_e8 = uStack_1e0;
    local_f0 = local_1e8;
    uStack_d8 = uStack_1d0;
    uStack_e0 = uStack_1d8;
    uStack_c8 = uStack_1c0;
    local_d0 = local_1c8;
    uStack_b8 = uStack_1b0;
    uStack_c0 = uStack_1b8;
    uStack_128 = uStack_220;
    local_130 = local_228;
    uStack_118 = uStack_210;
    uStack_120 = local_218;
    uStack_108 = uStack_200;
    local_110 = local_208;
    uStack_f8 = uStack_1f0;
    uStack_100 = local_1f8;
    uStack_160 = CONCAT44(uStack_254,local_258);
    uStack_168 = uStack_260;
    local_170 = local_268;
    uStack_158 = uStack_250;
    uStack_148 = uStack_240;
    local_150 = local_248;
    uStack_138 = uStack_230;
    uStack_140 = local_238;
    *puVar20 = 1;
    lVar17 = local_298;
    (**(code **)(local_298 + 0x68))
              (puVar20,*(undefined4 *)
                        PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,lVar6);
    FUN_100004b70(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ(uVar14);
    uVar10 = 0;
    FUN_1000fd494(0);
    FUN_1005d68b4(&local_170,puVar20,uVar14,0,0,uVar10,&PTR_PTR_10099cbd8);
    _swift_bridgeObjectRelease(uVar12);
    (**(code **)(lVar17 + 8))(puVar20,lVar6);
    uVar10 = *(undefined8 *)(lVar16 + 0x88);
    _swift_retain(uVar10);
    FUN_10008323c();
    _swift_release(uVar10);
    uVar5 = local_274;
    IVar11 = _objc_msgSend(*(ID *)(*(long *)(lVar16 + 0x28) +
                                  _TtC14UURemoteServer15StreamerManager::controlled),
                           "ControlledClearRoom:",(ulong)local_274);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(uint *)(lVar7 + -0x10) = uVar5;
    *(undefined4 *)(lVar7 + -0xc) = uVar15;
    FUN_1003fb48c(FUN_10003f65c,lVar7 + -0x20,0xd000000000000095,0x8000000100877f50,
                  0x6f6f527261656c63,0xed0000293a5f286d,0x174,0);
    (*(code *)PTR____chkstk_darwin_100995498)(0);
    *(uint *)(lVar7 + -0x10) = uVar5;
    *(undefined4 *)(lVar7 + -0xc) = 0x271a;
    uVar15 = (undefined4)IVar11;
    *(undefined4 *)(lVar7 + -8) = uVar15;
    FUN_1003fb48c(FUN_100112d38,lVar7 + -0x20,0xd0000000000000ac,
                  (ulong)local_290 | 0x8000000000000000,0xd000000000000046,0x800000010088c050,0x122,
                  0);
  }
  else {
    __s10Foundation4UUIDVACycfC(lVar7);
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    apuStack_2c0[3] = *(undefined **)(DAT_100b360a8 + 0x88);
    uVar10 = uStack_280;
    FUN_100435bb4(local_288,uStack_280,param_4);
    puVar9 = &DAT_10099d6c8;
    local_2a0 = uVar10;
    _swift_allocObject(&DAT_10099d6c8,0x18,7);
    apuStack_2c0[2] = puVar9;
    _swift_weakInit(puVar9 + 0x10);
    pcVar4 = local_290;
    lVar6 = local_298;
    (**(code **)(local_298 + 0x10))(lVar21,lVar7,local_290);
    uVar8 = (ulong)*(byte *)(lVar6 + 0x50);
    uVar18 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
    uVar19 = lVar16 + uVar18 + 3 & 0xfffffffffffffffc;
    uVar13 = uVar19 + 0xb & 0xfffffffffffffff8;
    puVar9 = &DAT_10099d768;
    apuStack_2c0[1] = (undefined *)param_4;
    _swift_allocObject(&DAT_10099d768,uVar13 + 0x20,uVar8 | 7);
    (**(code **)(lVar6 + 0x20))(puVar9 + uVar18,lVar21,pcVar4);
    uVar12 = uStack_280;
    uVar10 = local_288;
    puVar3 = apuStack_2c0[3];
    puVar2 = apuStack_2c0[2];
    puVar1 = apuStack_2c0[1];
    *(uint *)(puVar9 + uVar19) = local_274;
    *(undefined **)(puVar9 + uVar13) = apuStack_2c0[2];
    puVar20 = (undefined8 *)(puVar9 + uVar13 + 8);
    *puVar20 = local_288;
    puVar20[1] = uStack_280;
    puVar20[2] = apuStack_2c0[1];
    _swift_retain(apuStack_2c0[3]);
    _swift_retain(puVar2);
    FUN_100008184(uVar10,uVar12);
    _swift_retain(puVar1);
    FUN_1000927ac(lVar7,FUN_100112dd4,puVar9);
    _swift_release(puVar3);
    _swift_bridgeObjectRelease(local_2a0);
    _swift_release(puVar9);
    (**(code **)(lVar6 + 8))(lVar7,pcVar4);
    _swift_release(puVar2);
  }
  return;
}

