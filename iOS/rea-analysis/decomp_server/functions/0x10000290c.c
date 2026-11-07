// rea decompile_all
// name: FUN_10000290c
// address: 0x10000290c
// body: available
// range: 0x10000290c-0x100002a47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100002a40 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100002a44 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_10000290c(undefined8 param_1)

{
  ID IVar1;
  undefined4 local_138;
  int iStack_134;
  int local_130;
  int iStack_12c;
  int local_128;
  undefined8 local_120;
  double dStack_118;
  undefined1 local_110;
  int local_104;
  undefined8 local_100;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  float local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_104 = -1;
  _CGSGetCurrentDisplayMode(param_1,&local_104);
  if (local_104 < 0) {
    FUN_100002a48(&cf_DisplayModeTrace_copycurrentfaileddisplayID__umodeNumber__d);
    IVar1 = 0;
  }
  else {
    local_30 = 0.0;
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    _CGSGetDisplayModeDescriptionOfLength(param_1,local_104,&local_100,0xd4);
    dStack_118 = (double)local_30;
    if (local_30 <= 0.0) {
      dStack_118 = 1.0;
    }
    iStack_12c = (int)(long)(dStack_118 * (double)(int)uStack_f8);
    if (iStack_12c < 2) {
      iStack_12c = 1;
    }
    local_128 = (int)(long)(dStack_118 * (double)uStack_f8._4_4_);
    if (local_128 < 2) {
      local_128 = 1;
    }
    local_120 = NEON_ucvtf(uStack_48 >> 0x30);
    local_138 = (undefined4)local_100;
    iStack_134 = (int)uStack_f8;
    local_130 = uStack_f8._4_4_;
    local_110 = 1;
    IVar1 = NSValue::valueWithBytes_objCType_((ID)&_OBJC_CLASS___NSValue,&local_138,"{?=iiiiiddB}");
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_28) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

