// rea decompile_all
// name: FUN_1007cbcc4
// address: 0x1007cbcc4
// body: available
// range: 0x1007cbcc4-0x1007cbd13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007cbcc4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  lVar1 = *param_2;
  lVar2 = *param_5;
  _swift_beginAccess((undefined4 *)(lVar1 + lVar2),auStack_48,1,0);
  *(undefined4 *)(lVar1 + lVar2) = uVar3;
  return;
}

