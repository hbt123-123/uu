// rea decompile_all
// name: FUN_1001c3bfc
// address: 0x1001c3bfc
// body: available
// range: 0x1001c3bfc-0x1001c3e8f inclusive
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

undefined8 FUN_1001c3bfc(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ID IVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined1 auStack_220 [16];
  undefined *local_210;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  ulong local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_12d;
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
  ulong local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_5d;
  
  if (param_1 != 2) {
    return 0;
  }
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  _swift_bridgeObjectRetain(param_3);
  FUN_1001a743c(&local_1f0,0,0xe000000000000000,param_2,param_3);
  uStack_88 = uStack_158;
  local_90 = uStack_160;
  uStack_78 = uStack_148;
  uStack_80 = local_150;
  local_70 = uStack_140;
  uStack_5d = uStack_12d;
  uStack_b8 = uStack_188;
  local_c0 = local_190;
  uStack_a8 = uStack_178;
  uStack_b0 = uStack_180;
  uStack_98 = uStack_168;
  local_a0 = local_170;
  uStack_f8 = uStack_1c8;
  local_100 = local_1d0;
  uStack_e8 = uStack_1b8;
  uStack_f0 = uStack_1c0;
  uStack_d8 = uStack_1a8;
  local_e0 = local_1b0;
  local_c8 = uStack_198;
  uStack_d0 = uStack_1a0;
  uStack_118 = uStack_1e8;
  local_120 = local_1f0;
  uStack_108 = uStack_1d8;
  uStack_110 = uStack_1e0;
  puVar4 = &local_120;
  FUN_1000efaa0();
  uVar1 = local_c0;
  uVar3 = local_c8;
  if ((int)puVar4 != 1) {
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRetain(uVar1);
    puVar4 = &local_1f0;
    FUN_1000efb10(puVar4);
    param_2 = uVar3;
    param_3 = uVar1;
  }
  uVar3 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar3 = param_3 >> 0x38 & 0xf;
  }
  if (uVar3 != 0) {
    IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    uVar3 = param_2;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
    IVar2 = NSFileManager::fileExistsAtPath_(IVar2,"fileExistsAtPath:",uVar3);
    puVar4 = (undefined8 *)0x0;
    if ((IVar2 & 1) != 0) {
      FUN_1001a9e24(param_2,param_3);
      _swift_bridgeObjectRelease(param_3);
      if (param_2 != 0) {
        FUN_1001aa514(param_2);
      }
      return 1;
    }
  }
  FUN_1000efab8();
  puVar5 = &DAT_1009a2038;
  _swift_allocError(&DAT_1009a2038,puVar4,0,0);
  _swift_willThrow();
  _swift_bridgeObjectRelease(param_3);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_210 = puVar5;
  FUN_1003fb4ec(thunk_FUN_1000efaf8,auStack_220,0xd0000000000000a0,0x800000010089cf20,
                0xd000000000000020,0x800000010089d010,0x87,0);
  _swift_errorRelease(puVar5);
  return 0;
}

