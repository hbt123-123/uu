// rea decompile_all
// name: FUN_1003b4c04
// address: 0x1003b4c04
// body: available
// range: 0x1003b4c04-0x1003b4c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b4c04(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined3 uStack_38;
  undefined5 uStack_35;
  undefined3 uStack_30;
  undefined8 uStack_2d;
  
  FUN_1003b8858(&local_60);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_58;
    *param_1 = local_60;
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[5] = CONCAT53(uStack_35,uStack_38);
    param_1[4] = local_40;
    *(undefined8 *)((long)param_1 + 0x33) = uStack_2d;
    *(ulong *)((long)param_1 + 0x2b) = CONCAT35(uStack_30,uStack_35);
  }
  return;
}

