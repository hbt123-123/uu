// rea decompile_all
// name: FUN_1003f16c4
// address: 0x1003f16c4
// body: available
// range: 0x1003f16c4-0x1003f175b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f16c4(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar1 + 0x40),param_1,param_1);
  (**(code **)(lVar1 + 0x10))(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  (**(code **)(lVar1 + 0x20))
            (*(undefined8 *)(*(long *)(param_2 + 0x40) + 0x28),
             &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  _swift_continuation_throwingResume(param_2);
  return;
}

