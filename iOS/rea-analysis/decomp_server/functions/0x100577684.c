// rea decompile_all
// name: FUN_100577684
// address: 0x100577684
// body: available
// range: 0x100577684-0x1005776ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100577684(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x48);
  local_50 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_38 = (undefined1)*(undefined8 *)(unaff_x20 + 0x58);
  uStack_2f = *(undefined8 *)(unaff_x20 + 0x61);
  local_37 = (undefined7)*(undefined8 *)(unaff_x20 + 0x59);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x59) >> 0x38);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x28);
  local_70 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_100040bb4(&local_70,&DAT_100aab4f8,&DAT_100838f20);
  uVar1 = param_1[4];
  uVar3 = param_1[7];
  uVar2 = param_1[6];
  *(undefined8 *)(unaff_x20 + 0x48) = param_1[5];
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar2;
  uVar1 = *(undefined8 *)((long)param_1 + 0x39);
  *(undefined8 *)(unaff_x20 + 0x61) = *(undefined8 *)((long)param_1 + 0x41);
  *(undefined8 *)(unaff_x20 + 0x59) = uVar1;
  uVar3 = *param_1;
  uVar2 = param_1[3];
  uVar1 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x28) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  return;
}

