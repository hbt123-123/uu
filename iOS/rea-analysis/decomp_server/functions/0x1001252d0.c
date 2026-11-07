// rea decompile_all
// name: FUN_1001252d0
// address: 0x1001252d0
// body: available
// range: 0x1001252d0-0x10012563f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001252d0(undefined4 param_1,ulong param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auStack_330 [16];
  undefined4 auStack_320 [2];
  ulong auStack_318 [4];
  char *local_2f8;
  char *pcStack_2f0;
  undefined8 local_2e8;
  undefined4 local_2dc;
  long local_2d8;
  undefined1 auStack_2d0 [16];
  undefined4 local_2c0;
  ulong local_2b8;
  undefined1 auStack_2a8 [24];
  ulong local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  long lStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
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
  undefined1 local_198;
  undefined8 local_190;
  undefined1 auStack_188 [24];
  undefined8 local_170;
  long lStack_168;
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
  
  lVar4 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar9 = *(long *)(lVar4 + -8);
  local_2d8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)((long)auStack_318 + lVar4 + 0x18);
  uVar5 = 0;
  FUN_100401b14();
  local_2f8 = "newControlFinish(_:)";
  pcStack_2f0 = "connectStateCode";
  local_2e8 = uVar5;
  local_2c0 = param_1;
  local_2b8 = param_2;
  FUN_1003fb48c(FUN_1001264e4,auStack_2d0,0xd000000000000098,0x800000010088de90,0xd000000000000024,
                0x800000010088dfa0,0x6a,0);
  FUN_1001242a8();
  _swift_release();
  lVar8 = *(long *)(unaff_x20 + _TtC14UURemoteServer18StreamerDispatcher::room);
  _swift_beginAccess(lVar8 + 0x28,auStack_188,0,0);
  lStack_280 = (long)*(int *)(lVar8 + 0x28);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar5 = *(undefined8 *)(DAT_100b360a8 + 0xa8);
  uVar1 = param_2;
  if (3 < param_2) {
    uVar1 = 4;
  }
  uStack_284 = CONCAT31(uStack_284._1_3_,(char)uVar1);
  local_2dc = param_1;
  local_288 = param_1;
  local_190 = uVar5;
  FUN_1001264f0(&local_288);
  uStack_a8 = uStack_1c0;
  local_b0 = local_1c8;
  uStack_98 = uStack_1b0;
  uStack_a0 = uStack_1b8;
  uStack_88 = uStack_1a0;
  local_90 = local_1a8;
  local_80 = local_198;
  uStack_e8 = uStack_200;
  local_f0 = local_208;
  uStack_d8 = uStack_1f0;
  uStack_e0 = uStack_1f8;
  uStack_c8 = uStack_1e0;
  local_d0 = local_1e8;
  uStack_b8 = uStack_1d0;
  uStack_c0 = uStack_1d8;
  uStack_128 = uStack_240;
  local_130 = local_248;
  uStack_118 = uStack_230;
  uStack_120 = uStack_238;
  uStack_108 = uStack_220;
  local_110 = local_228;
  uStack_f8 = uStack_210;
  uStack_100 = uStack_218;
  local_170 = CONCAT44(uStack_284,local_288);
  lStack_168 = lStack_280;
  uStack_158 = uStack_270;
  uStack_160 = local_278;
  uStack_148 = uStack_260;
  local_150 = local_268;
  uStack_138 = uStack_250;
  uStack_140 = local_258;
  *puVar10 = 1;
  lVar3 = local_2d8;
  (**(code **)(lVar9 + 0x68))
            (puVar10,*(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,
             local_2d8);
  FUN_100004b70(0);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ(uVar5);
  uVar6 = 0;
  FUN_1000fd494(0);
  FUN_1005d68b4(&local_170,puVar10,uVar5,0,0,uVar6,&PTR_PTR_10099cbd8);
  (**(code **)(lVar9 + 8))(puVar10,lVar3);
  if ((param_2 == 3) || (param_2 == 0)) {
    (*(code *)PTR____chkstk_darwin_100995498)(0);
    uVar2 = local_2dc;
    *(undefined4 *)((long)auStack_320 + lVar4) = local_2dc;
    *(ulong *)((long)auStack_318 + lVar4) = param_2;
    *(long *)((long)auStack_318 + lVar4 + 8) = unaff_x20;
    FUN_1003fb48c(FUN_1001264fc,auStack_330 + lVar4,0xd000000000000098,
                  (ulong)pcStack_2f0 | 0x8000000000000000,0xd000000000000024,
                  (ulong)local_2f8 | 0x8000000000000000,0x6d,0);
    if (*(long *)(unaff_x20 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession) != 0)
    {
      FUN_1000c9470(uVar2,0,*(undefined4 *)(lVar8 + 0x28));
    }
    FUN_10012601c(uVar2,*(undefined4 *)(lVar8 + 0x28));
  }
  local_290 = param_2;
  _swift_beginAccess(lVar8 + 0x18,auStack_2a8,0x21,0);
  puVar7 = &DAT_100a79718;
  FUN_100004bb4(&DAT_100a79718,&DAT_10080e5b0);
  FUN_10039f3d0(&local_290,puVar7);
  _swift_endAccess(auStack_2a8);
  return;
}

