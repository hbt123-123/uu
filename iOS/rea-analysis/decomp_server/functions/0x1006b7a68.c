// rea decompile_all
// name: FUN_1006b7a68
// address: 0x1006b7a68
// body: available
// range: 0x1006b7a68-0x1006b7abb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b7a68(undefined8 *param_1)

{
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  local_a0 = 0;
  uStack_28 = 0;
  local_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_94 = (undefined4)param_1[1];
  uStack_9c = (undefined4)*param_1;
  uStack_98 = (undefined4)((ulong)*param_1 >> 0x20);
  uStack_88 = *(undefined8 *)((long)param_1 + 0x14);
  local_90 = (undefined4)*(undefined8 *)((long)param_1 + 0xc);
  uStack_8c = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20);
  uStack_78 = 0x300000000;
  local_80 = 1;
  FUN_1006b7908(&local_a0);
  return;
}

