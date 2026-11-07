// rea decompile_all
// name: FUN_100444fa8
// address: 0x100444fa8
// body: available
// range: 0x100444fa8-0x100444fef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100444fa8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined5 uStack_58;
  undefined3 local_53;
  undefined5 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined5 uStack_28;
  undefined3 local_23;
  undefined5 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined5)param_1[3];
  local_53 = (undefined3)*(undefined8 *)((long)param_1 + 0x1d);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x1d) >> 0x18);
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined5)param_2[3];
  local_23 = (undefined3)*(undefined8 *)((long)param_2 + 0x1d);
  uStack_20 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x1d) >> 0x18);
  FUN_100447d88(&local_70,&local_40);
  return uVar1 & 1;
}

