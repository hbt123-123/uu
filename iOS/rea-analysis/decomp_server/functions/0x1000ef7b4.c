// rea decompile_all
// name: FUN_1000ef7b4
// address: 0x1000ef7b4
// body: available
// range: 0x1000ef7b4-0x1000efa3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000ef7b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ID IVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *in_x4;
  ulong uVar9;
  undefined1 auStack_230 [16];
  undefined *local_220;
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
  ulong uStack_1a8;
  ulong local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_13d;
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
  ulong local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_6d;
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar1 = *in_x4;
  uVar2 = in_x4[1];
  uVar7 = in_x4[4];
  uVar9 = in_x4[5];
  _swift_bridgeObjectRetain(uVar9);
  FUN_1001a743c(&local_200,uVar1,uVar2,uVar7,uVar9);
  uStack_98 = uStack_168;
  local_a0 = uStack_170;
  uStack_88 = uStack_158;
  uStack_90 = local_160;
  local_80 = uStack_150;
  uStack_6d = uStack_13d;
  uStack_c8 = uStack_198;
  local_d0 = local_1a0;
  uStack_b8 = uStack_188;
  uStack_c0 = uStack_190;
  uStack_a8 = uStack_178;
  local_b0 = local_180;
  uStack_108 = uStack_1d8;
  local_110 = local_1e0;
  uStack_f8 = uStack_1c8;
  uStack_100 = uStack_1d0;
  uStack_e8 = uStack_1b8;
  local_f0 = local_1c0;
  local_d8 = uStack_1a8;
  uStack_e0 = uStack_1b0;
  uStack_128 = uStack_1f8;
  local_130 = local_200;
  uStack_118 = uStack_1e8;
  uStack_120 = uStack_1f0;
  puVar6 = &local_130;
  FUN_1000efaa0();
  uVar3 = local_d0;
  uVar5 = local_d8;
  if ((int)puVar6 != 1) {
    _swift_bridgeObjectRelease(uVar9);
    _swift_bridgeObjectRetain(uVar3);
    puVar6 = &local_200;
    FUN_1000efb10(puVar6);
    uVar7 = uVar5;
    uVar9 = uVar3;
  }
  uVar5 = uVar7 & 0xffffffffffff;
  if ((uVar9 & 0x2000000000000000) != 0) {
    uVar5 = uVar9 >> 0x38 & 0xf;
  }
  if (uVar5 != 0) {
    IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    uVar5 = uVar7;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,uVar9);
    IVar4 = NSFileManager::fileExistsAtPath_(IVar4,"fileExistsAtPath:",uVar5);
    puVar6 = (undefined8 *)0x0;
    if ((int)IVar4 != 0) {
      FUN_1001a9e24(uVar7,uVar9);
      _swift_bridgeObjectRelease(uVar9);
      if (uVar7 == 0) {
        return;
      }
      FUN_1001aa090(uVar7);
      return;
    }
  }
  FUN_1000efab8();
  puVar8 = &DAT_1009a2038;
  _swift_allocError(&DAT_1009a2038,puVar6,0,0);
  _swift_willThrow();
  _swift_bridgeObjectRelease(uVar9);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_220 = puVar8;
  FUN_1003fb4ec(FUN_1000efaf8,auStack_230,0xd00000000000009f,0x8000000100888c10,0xd000000000000025,
                0x8000000100888ce0,0x45,0);
  _swift_errorRelease(puVar8);
  return;
}

