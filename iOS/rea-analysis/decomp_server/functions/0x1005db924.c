// rea decompile_all
// name: FUN_1005db924
// address: 0x1005db924
// body: available
// range: 0x1005db924-0x1005db97b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005db924(undefined1 *param_1,undefined1 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined7 uStack_48;
  undefined1 local_41;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined7 uStack_38;
  undefined1 local_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined7 uStack_28;
  undefined1 local_21;
  undefined7 uStack_20;
  undefined1 uStack_19;
  undefined7 uStack_18;
  undefined1 local_11;
  undefined7 uStack_10;
  undefined1 uStack_9;
  
  uStack_29 = (undefined1)param_3[3];
  uStack_28 = (undefined7)((ulong)param_3[3] >> 8);
  local_31 = (undefined1)param_3[2];
  uStack_30 = (undefined7)((ulong)param_3[2] >> 8);
  uStack_39 = (undefined1)param_3[1];
  uStack_38 = (undefined7)((ulong)param_3[1] >> 8);
  local_41 = (undefined1)*param_3;
  uStack_40 = (undefined7)((ulong)*param_3 >> 8);
  uVar1 = param_3[7];
  uStack_19 = (undefined1)param_3[5];
  uStack_18 = (undefined7)((ulong)param_3[5] >> 8);
  local_21 = (undefined1)param_3[4];
  uStack_20 = (undefined7)((ulong)param_3[4] >> 8);
  uStack_9 = (undefined1)uVar1;
  local_11 = (undefined1)param_3[6];
  uStack_10 = (undefined7)((ulong)param_3[6] >> 8);
  *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_29,uStack_30);
  *(ulong *)(param_1 + 0x11) = CONCAT17(local_31,uStack_38);
  *(ulong *)(param_1 + 0x29) = CONCAT17(uStack_19,uStack_20);
  *(ulong *)(param_1 + 0x21) = CONCAT17(local_21,uStack_28);
  *(ulong *)(param_1 + 0x39) = CONCAT17(uStack_9,uStack_10);
  *(ulong *)(param_1 + 0x31) = CONCAT17(local_11,uStack_18);
  *param_1 = param_2;
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_39,uStack_40);
  *(ulong *)(param_1 + 1) = CONCAT17(local_41,uStack_48);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = param_4;
  *(undefined8 *)(param_1 + 0x50) = param_5;
  *(undefined8 *)(param_1 + 0x58) = param_6;
  *(undefined8 *)(param_1 + 0x60) = param_7;
  *(undefined8 *)(param_1 + 0x68) = param_8;
  return;
}

