// rea decompile_all
// name: FUN_10044d78c
// address: 0x10044d78c
// body: available
// range: 0x10044d78c-0x10044d80b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10044d78c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1[4];
  uVar3 = param_1[5];
  uVar2 = param_1[6];
  uVar4 = param_1[7];
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x28);
  local_80 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x48);
  local_60 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x50);
  FUN_100040bb4(&local_80,&DAT_100a9ff68,&DAT_10082b0d0);
  uVar5 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x28) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x20) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  *(ulong *)(unaff_x20 + 0x48) = uVar3 & 0xcfffffffffffffff;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar2;
  *(ulong *)(unaff_x20 + 0x58) = uVar4 & 0xcfffffffffffffff | 0x1000000000000000;
  return;
}

