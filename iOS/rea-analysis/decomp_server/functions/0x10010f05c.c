// rea decompile_all
// name: FUN_10010f05c
// address: 0x10010f05c
// body: available
// range: 0x10010f05c-0x10010f85f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10010f82c to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10010f05c(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  undefined *puVar9;
  long lVar10;
  long extraout_x8;
  char *pcVar11;
  undefined8 unaff_x20;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  int iVar17;
  undefined1 auStack_2e0 [16];
  int aiStack_2d0 [4];
  char *apcStack_2c0 [3];
  long local_2a8;
  long local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_268;
  undefined8 uStack_260;
  int local_258;
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
  undefined8 local_160;
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
  
  lVar3 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined8 *)((long)apcStack_2c0 + lVar1);
  uVar16 = (undefined4)param_2;
  if ((param_1 >> 0x20 & 1) == 0) {
    local_2a8 = lVar3;
    local_298 = param_4;
    local_170 = param_3;
    uStack_168 = param_4;
    local_160 = param_5;
    FUN_100008184(param_3,param_4);
    local_290 = param_5;
    _swift_retain(param_5);
    FUN_100434388(param_1);
    uVar7 = local_160;
    uVar12 = uStack_168;
    uVar6 = local_170;
    FUN_10010ddc4(param_2,local_170,uStack_168,local_160);
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    local_2a0 = DAT_100b360a8;
    lVar3 = *(long *)(DAT_100b360a8 + 0x80);
    uVar4 = *(undefined8 *)(lVar3 + 0x10);
    _swift_retain(lVar3);
    uVar5 = param_2 & 0xffffffff;
    FUN_10001adc4(uVar5,uVar4,1);
    _swift_release(lVar3);
    FUN_100006cdc(uVar6,uVar12);
    _swift_release(uVar7);
    iVar17 = (int)uVar5;
    if (iVar17 == 0) {
      uVar12 = *(undefined8 *)(local_2a0 + 0x88);
      uVar6 = local_298;
      FUN_100435bb4(param_3,local_298,local_290);
      puVar9 = &DAT_10099d6c8;
      _swift_allocObject(&DAT_10099d6c8,0x18,7);
      _swift_weakInit(puVar9 + 0x10,unaff_x20);
      _swift_retain(uVar12);
      FUN_100091df4(param_3,uVar6,uVar16,uVar12,puVar9,param_1,uVar16);
      _swift_release(uVar12);
      _swift_bridgeObjectRelease(uVar6);
      _swift_release(puVar9);
      return;
    }
    uVar6 = 0;
    FUN_100401b14();
    apcStack_2c0[1] = (char *)uVar6;
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)((long)aiStack_2d0 + lVar1) = iVar17;
    apcStack_2c0[2] = "butor";
    FUN_1003fb4ec(FUN_100112e6c,auStack_2e0 + lVar1,0xd0000000000000ac,0x800000010088b950,
                  &DAT_d000000000000033,0x800000010088c0a0,0xf3,0);
    FUN_10010cdd4(uVar5);
    lVar2 = local_2a0;
    uVar12 = *(undefined8 *)(local_2a0 + 0xa8);
    uVar6 = local_298;
    FUN_100435bb4(param_3,local_298,local_290);
    local_268 = param_3;
    uStack_260 = uVar6;
    local_258 = iVar17;
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
    local_160 = CONCAT44(uStack_254,local_258);
    uStack_168 = uStack_260;
    local_170 = local_268;
    uStack_158 = uStack_250;
    uStack_148 = uStack_240;
    local_150 = local_248;
    uStack_138 = uStack_230;
    uStack_140 = local_238;
    *puVar15 = 1;
    lVar3 = local_2a8;
    (**(code **)(lVar10 + 0x68))
              (puVar15,*(undefined4 *)
                        PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,local_2a8);
    FUN_100004b70(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ(uVar12);
    uVar7 = 0;
    FUN_1000fd494(0);
    FUN_1005d68b4(&local_170,puVar15,uVar12,0,0,uVar7,&PTR_PTR_10099cbd8);
    _swift_bridgeObjectRelease(uVar6);
    (**(code **)(lVar10 + 8))(puVar15,lVar3);
    uVar6 = *(undefined8 *)(lVar2 + 0x88);
    _swift_retain(uVar6);
    FUN_10008323c();
    _swift_release(uVar6);
    IVar8 = _objc_msgSend(*(ID *)(*(long *)(lVar2 + 0x28) +
                                 _TtC14UURemoteServer15StreamerManager::controlled),
                          "ControlledClearRoom:",param_2 & 0xffffffff);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)((long)aiStack_2d0 + lVar1) = uVar16;
    *(undefined4 *)((long)aiStack_2d0 + lVar1 + 4) = uVar13;
    FUN_1003fb48c(thunk_FUN_10003f65c,auStack_2e0 + lVar1,0xd000000000000095,0x8000000100877f50,
                  0x6f6f527261656c63,0xed0000293a5f286d,0x174,0);
    (*(code *)PTR____chkstk_darwin_100995498)(0);
    *(undefined4 *)((long)aiStack_2d0 + lVar1) = uVar16;
    *(int *)((long)aiStack_2d0 + lVar1 + 4) = iVar17;
    uVar13 = (undefined4)IVar8;
    *(undefined4 *)((long)aiStack_2d0 + lVar1 + 8) = uVar13;
    pcVar11 = apcStack_2c0[2];
  }
  else {
    uVar6 = 0;
    FUN_100401b14();
    local_290 = uVar6;
    FUN_1003fb4ec(FUN_10010f860,0,0xd0000000000000ac,0x800000010088b950,&DAT_d000000000000033,
                  0x800000010088c0a0,0xec,0);
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar2 = DAT_100b360a8;
    FUN_10010cdd4(*(undefined4 *)(*(long *)(DAT_100b360a8 + 0x88) + 0x18));
    uVar6 = *(undefined8 *)(lVar2 + 0xa8);
    FUN_100435bb4(param_3,param_4,param_5);
    local_258 = -1;
    local_268 = param_3;
    uStack_260 = param_4;
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
    local_160 = CONCAT44(uStack_254,local_258);
    uStack_168 = uStack_260;
    local_170 = local_268;
    uStack_158 = uStack_250;
    uStack_148 = uStack_240;
    local_150 = local_248;
    uStack_138 = uStack_230;
    uStack_140 = local_238;
    *puVar15 = 1;
    (**(code **)(lVar10 + 0x68))
              (puVar15,*(undefined4 *)
                        PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,lVar3);
    FUN_100004b70(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ(uVar6);
    uVar12 = 0;
    FUN_1000fd494(0);
    FUN_1005d68b4(&local_170,puVar15,uVar6,0,0,uVar12,&PTR_PTR_10099cbd8);
    _swift_bridgeObjectRelease(param_4);
    (**(code **)(lVar10 + 8))(puVar15,lVar3);
    uVar6 = *(undefined8 *)(lVar2 + 0x88);
    _swift_retain(uVar6);
    FUN_10008323c();
    _swift_release(uVar6);
    IVar8 = _objc_msgSend(*(ID *)(*(long *)(lVar2 + 0x28) +
                                 _TtC14UURemoteServer15StreamerManager::controlled),
                          "ControlledClearRoom:",param_2 & 0xffffffff);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)((long)aiStack_2d0 + lVar1) = uVar16;
    *(undefined4 *)((long)aiStack_2d0 + lVar1 + 4) = uVar14;
    FUN_1003fb48c(thunk_FUN_10003f65c,auStack_2e0 + lVar1,0xd000000000000095,0x8000000100877f50,
                  0x6f6f527261656c63,0xed0000293a5f286d,0x174,0);
    (*(code *)PTR____chkstk_darwin_100995498)(0);
    *(undefined4 *)((long)aiStack_2d0 + lVar1) = uVar16;
    *(undefined4 *)((long)aiStack_2d0 + lVar1 + 4) = 0xffffffff;
    uVar14 = (undefined4)IVar8;
    *(undefined4 *)((long)aiStack_2d0 + lVar1 + 8) = uVar14;
    pcVar11 = "butor";
  }
  FUN_1003fb48c(thunk_FUN_100112d38,auStack_2e0 + lVar1,0xd0000000000000ac,
                (ulong)pcVar11 | 0x8000000000000000,0xd000000000000046,0x800000010088c050,0x122,0);
  return;
}

