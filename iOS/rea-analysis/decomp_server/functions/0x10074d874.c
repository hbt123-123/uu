// rea decompile_all
// name: FUN_10074d874
// address: 0x10074d874
// body: available
// range: 0x10074d874-0x10074d933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10074d874(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 *local_50;
  undefined1 local_48;
  undefined8 local_40;
  long lStack_38;
  undefined8 local_30;
  long lStack_28;
  
  puStack_58 = &local_40;
  local_50 = &local_30;
  lVar3 = param_7;
  if (param_3 != param_5) {
    lVar3 = 0;
    do {
      lVar1 = param_7 + lVar3;
      lVar2 = param_3 + lVar3;
      *(undefined4 *)(lVar1 + -0x30) = *(undefined4 *)(lVar2 + -0x30);
      *(undefined8 *)(lVar1 + -0x28) = *(undefined8 *)(lVar2 + -0x28);
      uVar5 = *(undefined8 *)(lVar2 + -0x18);
      uVar4 = *(undefined8 *)(lVar2 + -0x20);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar2 + -0x10);
      *(undefined8 *)(lVar1 + -0x18) = uVar5;
      *(undefined8 *)(lVar1 + -0x20) = uVar4;
      *(undefined8 *)(lVar2 + -0x18) = 0;
      *(undefined8 *)(lVar2 + -0x10) = 0;
      *(undefined8 *)(lVar2 + -0x20) = 0;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(lVar2 + -8);
      lVar3 = lVar3 + -0x30;
    } while (param_3 + lVar3 != param_5);
    lVar3 = param_7 + lVar3;
  }
  local_48 = 1;
  local_60 = param_1;
  local_40 = param_6;
  lStack_38 = param_7;
  local_30 = param_6;
  lStack_28 = lVar3;
  FUN_10074d934(&local_60);
  auVar6._8_8_ = lVar3;
  auVar6._0_8_ = param_6;
  return auVar6;
}

