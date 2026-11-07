// rea decompile_all
// name: FUN_1000c9470
// address: 0x1000c9470
// body: available
// range: 0x1000c9470-0x1000c97df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000c9470(undefined4 param_1,long param_2,undefined4 param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auStack_2c0 [16];
  long alStack_2b0 [2];
  char *local_2a0 [2];
  undefined1 auStack_290 [16];
  undefined4 local_280;
  long local_278;
  undefined4 local_270;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  lVar4 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)((long)alStack_2b0 + lVar2 + 0x10);
  uVar5 = 0;
  FUN_100401b14();
  local_2a0[0] = "TerminalHandler.swift";
  local_2a0[1] = (char *)uVar5;
  local_280 = param_1;
  local_278 = param_2;
  local_270 = param_3;
  FUN_1003fb48c(FUN_1000cdc10,auStack_290,0xd00000000000009c,0x8000000100885110,
                &DAT_d000000000000033,0x80000001008851b0,0x41,0);
  local_260 = param_2;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::_peerState,&local_160
                     ,0x21,0);
  puVar6 = &DAT_100a77460;
  FUN_100004bb4(&DAT_100a77460,&DAT_10080c138);
  FUN_10039f3d0(&local_260,puVar6);
  _swift_endAccess(&local_160);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar3 = DAT_100b360a8;
  uVar5 = *(undefined8 *)(DAT_100b360a8 + 0xa8);
  lVar7 = param_2;
  local_168 = uVar5;
  FUN_1000cdc20();
  uVar1 = 7;
  if (((uint)lVar7 & 0xff) != 8) {
    uVar1 = (char)lVar7;
  }
  local_260._0_5_ = CONCAT14(uVar1,param_1);
  FUN_1000cdc30(&local_260);
  uStack_98 = uStack_198;
  local_a0 = local_1a0;
  uStack_88 = uStack_188;
  uStack_90 = uStack_190;
  uStack_78 = uStack_178;
  local_80 = local_180;
  local_70 = local_170;
  uStack_d8 = uStack_1d8;
  local_e0 = local_1e0;
  uStack_c8 = uStack_1c8;
  uStack_d0 = uStack_1d0;
  uStack_b8 = uStack_1b8;
  local_c0 = local_1c0;
  uStack_a8 = uStack_1a8;
  uStack_b0 = uStack_1b0;
  uStack_118 = uStack_218;
  local_120 = local_220;
  uStack_108 = uStack_208;
  uStack_110 = uStack_210;
  uStack_f8 = uStack_1f8;
  local_100 = local_200;
  uStack_e8 = uStack_1e8;
  uStack_f0 = uStack_1f0;
  uStack_158 = uStack_258;
  local_160 = local_260;
  uStack_148 = uStack_248;
  uStack_150 = uStack_250;
  uStack_138 = uStack_238;
  local_140 = local_240;
  uStack_128 = uStack_228;
  uStack_130 = uStack_230;
  *puVar11 = 1;
  (**(code **)(lVar10 + 0x68))
            (puVar11,*(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,
             lVar4);
  FUN_100004b70(0);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ(uVar5);
  uVar8 = 0;
  FUN_1000fd494(0);
  FUN_1005d68b4(&local_160,puVar11,uVar5,0,0,uVar8,&PTR_PTR_10099cbd8);
  (**(code **)(lVar10 + 8))(puVar11,lVar4);
  if (param_2 < 5) {
    if (param_2 != 0) {
      if (param_2 != 1) {
        return;
      }
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)((long)alStack_2b0 + lVar2) = unaff_x20;
      pcVar9 = FUN_1000cdc3c;
      FUN_1003fb48c(FUN_1000cdc3c,auStack_2c0 + lVar2,0xd00000000000009c,
                    (ulong)local_2a0[0] | 0x8000000000000000,0xd000000000000015,0x80000001008851f0,
                    0x7a,0);
      FUN_1000c815c();
      FUN_100198d18();
      _swift_release(pcVar9);
      uVar5 = *(undefined8 *)(lVar3 + 0x80);
      _swift_retain(uVar5);
      FUN_100011fa4();
      _swift_release(uVar5);
      FUN_1001040b0(*(undefined8 *)(lVar3 + 0x58));
      return;
    }
  }
  else {
    if (param_2 == 5) {
      FUN_1000c9944(0);
      return;
    }
    if (param_2 != 6) {
      return;
    }
  }
  FUN_1000c9ba0();
  return;
}

