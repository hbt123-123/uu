// rea decompile_all
// name: FUN_1001fc204
// address: 0x1001fc204
// body: available
// range: 0x1001fc204-0x1001fc2cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1001fc204(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_110 [192];
  
  uVar3 = *param_3;
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar4 = *(undefined8 *)(DAT_100b360a8 + 0x90);
  uVar1 = *(undefined8 *)(param_3 + 2);
  uVar2 = *(undefined8 *)(param_3 + 4);
  FUN_1000408d0(param_2,auStack_110);
  FUN_1001e1b20(uVar3,uVar1,uVar2,uVar4,uVar3,param_2,param_1);
  FUN_1000914e4(param_2);
  return 0;
}

