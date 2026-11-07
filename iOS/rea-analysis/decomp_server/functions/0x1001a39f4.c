// rea decompile_all
// name: FUN_1001a39f4
// address: 0x1001a39f4
// body: available
// range: 0x1001a39f4-0x1001a3ddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001a39f4(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  ulong uVar9;
  long extraout_x12;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_270 [16];
  ulong auStack_260 [4];
  undefined1 auStack_240 [8];
  undefined8 local_238;
  undefined1 *local_230;
  long local_228;
  long local_220;
  long local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  ulong local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_14d;
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
  ulong local_e8;
  ulong local_e0;
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
  undefined8 uStack_7d;
  
  lVar3 = 0;
  local_218 = param_5;
  __s10Foundation3URLVMa();
  local_228 = *(long *)(lVar3 + -8);
  lVar10 = *(long *)(local_228 + 0x40);
  local_220 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_230 = auStack_240 + -(lVar10 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar3 = (long)(auStack_240 + -(lVar10 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  _swift_bridgeObjectRetain(param_4);
  FUN_1001a743c(&local_210,param_1,param_2,param_3,param_4);
  uStack_98 = uStack_168;
  local_a0 = local_170;
  uStack_90 = uStack_160;
  uStack_7d = uStack_14d;
  uStack_d8 = uStack_1a8;
  local_e0 = local_1b0;
  uStack_c8 = uStack_198;
  uStack_d0 = uStack_1a0;
  uStack_b8 = uStack_188;
  local_c0 = local_190;
  uStack_a8 = uStack_178;
  uStack_b0 = uStack_180;
  uStack_118 = uStack_1e8;
  local_120 = local_1f0;
  uStack_108 = uStack_1d8;
  uStack_110 = uStack_1e0;
  uStack_f8 = uStack_1c8;
  local_100 = local_1d0;
  local_e8 = uStack_1b8;
  uStack_f0 = uStack_1c0;
  uStack_138 = uStack_208;
  local_140 = local_210;
  uStack_128 = uStack_1f8;
  uStack_130 = uStack_200;
  puVar5 = &local_140;
  FUN_1000efaa0();
  uVar11 = local_e0;
  uVar9 = local_e8;
  if ((int)puVar5 != 1) {
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRetain(uVar11);
    puVar5 = &local_210;
    FUN_100040bb4(puVar5,&DAT_100a781a8,&DAT_10080d410);
    param_4 = uVar11;
    param_3 = uVar9;
  }
  uVar9 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar9 = param_4 >> 0x38 & 0xf;
  }
  if (uVar9 != 0) {
    IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    uVar9 = param_3;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    IVar4 = NSFileManager::fileExistsAtPath_(IVar4,"fileExistsAtPath:",uVar9);
    puVar5 = (undefined8 *)0x0;
    if ((IVar4 & 1) != 0) {
      lVar6 = local_218;
      FUN_1001a98ec(local_218,param_6);
      uVar9 = param_3;
      FUN_1001a9e24(param_3,param_4);
      if (uVar9 != 0) {
        _swift_bridgeObjectRelease(lVar6);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ulong *)(lVar3 + -0x20) = param_3;
        *(ulong *)(lVar3 + -0x18) = param_4;
        *(ulong *)(lVar3 + -0x10) = uVar9;
        FUN_1003fb48c(FUN_1001ac57c,lVar3 + -0x30,0xd000000000000093,0x800000010089a630,
                      0xd00000000000001c,0x800000010089a8d0,0x232,0);
        _swift_bridgeObjectRelease(param_4);
        FUN_1001aa090(uVar9);
        return;
      }
      __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar3,param_3,param_4);
      _swift_bridgeObjectRelease(param_4);
      puVar7 = &DAT_100a76918;
      FUN_100004bb4(&DAT_100a76918,&DAT_10080d640);
      (*(code *)PTR____chkstk_darwin_100995498)
                (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar8 = 0;
      local_218 = lVar3 - extraout_x8;
      __sScPMa();
      (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar3 - extraout_x8,1,1,lVar8);
      lVar2 = local_220;
      lVar8 = local_228;
      puVar1 = local_230;
      local_238 = lVar6;
      (**(code **)(local_228 + 0x10))(local_230,lVar3,local_220);
      uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
      uVar11 = uVar9 + 0x28 & (uVar9 ^ 0xffffffffffffffff);
      puVar7 = &DAT_1009a21d8;
      _swift_allocObject(&DAT_1009a21d8,uVar11 + lVar10,uVar9 | 7);
      *(undefined8 *)(puVar7 + 0x10) = 0;
      *(undefined8 *)(puVar7 + 0x18) = 0;
      *(undefined8 *)(puVar7 + 0x20) = local_238;
      (**(code **)(lVar8 + 0x20))(puVar7 + uVar11,puVar1,lVar2);
      FUN_1001a7dac(0,0,local_218,&DAT_100811550,puVar7);
      _swift_release();
      (**(code **)(lVar8 + 8))(lVar3,lVar2);
      return;
    }
  }
  FUN_1000efab8();
  _swift_allocError(&DAT_1009a2038,puVar5,0,0);
  _swift_willThrow();
  _swift_bridgeObjectRelease(param_4);
  return;
}

