// rea decompile_all
// name: FUN_1005e0540
// address: 0x1005e0540
// body: available
// range: 0x1005e0540-0x1005e058f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005e0540(undefined1 *param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined7 uStack_40;
  undefined1 local_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  undefined1 local_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  undefined7 uStack_20;
  undefined1 local_19;
  undefined7 uStack_18;
  undefined1 uStack_11;
  
  uStack_31 = (undefined1)param_4[1];
  uStack_30 = (undefined7)((ulong)param_4[1] >> 8);
  local_39 = (undefined1)*param_4;
  uStack_38 = (undefined7)((ulong)*param_4 >> 8);
  uStack_21 = (undefined1)param_4[3];
  uStack_20 = (undefined7)((ulong)param_4[3] >> 8);
  local_29 = (undefined1)param_4[2];
  uStack_28 = (undefined7)((ulong)param_4[2] >> 8);
  uVar2 = param_4[5];
  uStack_11 = (undefined1)uVar2;
  local_19 = (undefined1)param_4[4];
  uStack_18 = (undefined7)((ulong)param_4[4] >> 8);
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_31,uStack_38);
  *(ulong *)(param_1 + 1) = CONCAT17(local_39,uStack_40);
  uVar1 = param_4[6];
  *param_1 = param_3;
  *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_21,uStack_28);
  *(ulong *)(param_1 + 0x11) = CONCAT17(local_29,uStack_30);
  *(ulong *)(param_1 + 0x29) = CONCAT17(uStack_11,uStack_18);
  *(ulong *)(param_1 + 0x21) = CONCAT17(local_19,uStack_20);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  param_1[0x48] = param_5;
  return;
}

