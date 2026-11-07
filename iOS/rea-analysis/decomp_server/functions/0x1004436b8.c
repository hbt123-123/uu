// rea decompile_all
// name: FUN_1004436b8
// address: 0x1004436b8
// body: available
// range: 0x1004436b8-0x10044370f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1004436b8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined5 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  local_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  local_70 = param_1[4];
  uStack_68 = (undefined5)param_1[5];
  uStack_63 = (undefined3)*(undefined8 *)((long)param_1 + 0x2d);
  uStack_60 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x2d) >> 0x18);
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  local_30 = param_2[4];
  uStack_28 = (undefined5)param_2[5];
  uStack_23 = (undefined3)*(undefined8 *)((long)param_2 + 0x2d);
  uStack_20 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x2d) >> 0x18);
  FUN_1004476ac(&local_90,&local_50);
  return uVar1 & 1;
}

