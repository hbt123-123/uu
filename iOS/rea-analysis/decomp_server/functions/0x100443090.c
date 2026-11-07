// rea decompile_all
// name: FUN_100443090
// address: 0x100443090
// body: available
// range: 0x100443090-0x100443127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100443090(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  
  uVar7 = *param_1;
  bVar6 = *(byte *)(param_1 + 1);
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = *(uint *)(param_1 + 4);
  uVar5 = *(uint *)((long)param_1 + 0xc);
  uVar1 = 0x100000000;
  if ((*(byte *)((long)param_1 + 0x24) & 1) == 0) {
    uVar1 = 0;
  }
  FUN_1000407fc(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],unaff_x20[5],
                (ulong)*(uint5 *)(unaff_x20 + 6));
  *unaff_x20 = uVar7;
  unaff_x20[1] = (ulong)bVar6 & 1 | (ulong)uVar5 << 0x20;
  unaff_x20[2] = uVar2;
  unaff_x20[3] = uVar3;
  unaff_x20[4] = uVar1 | uVar4;
  unaff_x20[5] = 0;
  *(undefined1 *)((long)unaff_x20 + 0x34) = 0x40;
  *(undefined4 *)(unaff_x20 + 6) = 0;
  return;
}

