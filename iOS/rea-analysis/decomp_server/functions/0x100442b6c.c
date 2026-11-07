// rea decompile_all
// name: FUN_100442b6c
// address: 0x100442b6c
// body: available
// range: 0x100442b6c-0x100442c13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100442b6c(undefined8 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = param_1[1];
  uVar5 = *param_1;
  uVar4 = param_1[2];
  uVar3 = param_1[5];
  uVar1 = *(undefined4 *)(param_1 + 6);
  bVar2 = *(byte *)((long)param_1 + 0x34);
  FUN_1000407fc(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],unaff_x20[5],
                (ulong)*(uint5 *)(unaff_x20 + 6));
  unaff_x20[1] = uVar7;
  *unaff_x20 = uVar5;
  unaff_x20[2] = uVar4;
  uVar6 = param_1[3];
  unaff_x20[4] = (ulong)((uint5)param_1[4] & 0x1ffffffff);
  unaff_x20[3] = uVar6 & 0xcfffffffffffffff;
  unaff_x20[5] = uVar3 & 0x1ffffffff;
  *(byte *)((long)unaff_x20 + 0x34) = bVar2 & 1;
  *(undefined4 *)(unaff_x20 + 6) = uVar1;
  return;
}

