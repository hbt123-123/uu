// rea decompile_all
// name: FUN_1003e82c8
// address: 0x1003e82c8
// body: available
// range: 0x1003e82c8-0x1003e83a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1003e82c8(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  uint uVar5;
  undefined1 auVar6 [16];
  
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f) & 1) ==
      0) {
    uVar5 = 0;
  }
  else {
    uVar1 = 0;
    FUN_10039845c(0);
    uVar2 = uVar1;
    FUN_1003afbb4();
    do {
      uVar3 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8);
      __s14CoreFoundation9_CFObjectPAAE2eeoiySbx_xtFZ(uVar3,param_1,uVar1,uVar2);
      uVar5 = (uint)uVar3;
      if ((uVar3 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f)
             & 1) != 0);
  }
  auVar6._8_4_ = uVar5 & 1;
  auVar6._0_8_ = param_2;
  auVar6._12_4_ = 0;
  return auVar6;
}

