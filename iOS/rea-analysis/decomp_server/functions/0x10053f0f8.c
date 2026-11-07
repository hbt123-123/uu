// rea decompile_all
// name: FUN_10053f0f8
// address: 0x10053f0f8
// body: available
// range: 0x10053f0f8-0x10053f14f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053f0f8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined8 uStack_5e;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined2 uStack_28;
  undefined6 uStack_26;
  undefined2 uStack_20;
  undefined8 uStack_1e;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  local_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  local_30 = param_1[4];
  uStack_28 = (undefined2)param_1[5];
  uStack_1e = *(undefined8 *)((long)param_1 + 0x32);
  uStack_26 = (undefined6)*(undefined8 *)((long)param_1 + 0x2a);
  uStack_20 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x2a) >> 0x30);
  uStack_88 = unaff_x20[1];
  local_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  local_70 = unaff_x20[4];
  uStack_68 = (undefined2)unaff_x20[5];
  uStack_5e = *(undefined8 *)((long)unaff_x20 + 0x32);
  uStack_66 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x2a);
  uStack_60 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x2a) >> 0x30);
  FUN_1005a47e8(&local_90,&local_50);
  return uVar1 & 1;
}

