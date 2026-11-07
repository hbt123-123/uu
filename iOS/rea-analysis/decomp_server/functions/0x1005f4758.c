// rea decompile_all
// name: FUN_1005f4758
// address: 0x1005f4758
// body: available
// range: 0x1005f4758-0x1005f479b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005f4758(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long unaff_x21;
  
  uVar2 = (undefined1)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  FUN_1005f8e74(uVar1,param_5,param_6,param_7,param_8);
  if (unaff_x21 == 0) {
    *param_1 = uVar1;
    *(undefined1 *)(param_1 + 1) = uVar2;
    *(undefined8 *)(param_1 + 2) = param_5;
  }
  return;
}

