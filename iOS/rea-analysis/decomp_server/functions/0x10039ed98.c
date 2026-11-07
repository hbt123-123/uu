// rea decompile_all
// name: FUN_10039ed98
// address: 0x10039ed98
// body: available
// range: 0x10039ed98-0x10039ee93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010039ee44) */

void FUN_10039ed98(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 auStack_60 [16];
  
  lVar1 = param_2;
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x18) + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            ((long)(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
             (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_10031d4ac(param_1,param_2,auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x38))(param_1,0,1);
  return;
}

