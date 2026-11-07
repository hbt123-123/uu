// rea decompile_all
// name: FUN_10040eb10
// address: 0x10040eb10
// body: available
// range: 0x10040eb10-0x10040ebab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040eb10(byte *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  
  bVar8 = (param_2 & 1) == 0;
  lVar1 = 0x30;
  if (bVar8) {
    lVar1 = 8;
  }
  lVar2 = 0x38;
  if (bVar8) {
    lVar2 = 0x10;
  }
  lVar3 = 0x40;
  if (bVar8) {
    lVar3 = 0x18;
  }
  lVar4 = 0x48;
  if (bVar8) {
    lVar4 = 0x20;
  }
  lVar5 = 0x50;
  if (bVar8) {
    lVar5 = 0x28;
  }
  bVar6 = *(byte *)(unaff_x20 + lVar1);
  uVar11 = *(undefined8 *)(unaff_x20 + lVar2);
  uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
  bVar7 = *(byte *)(unaff_x20 + lVar4);
  uVar10 = *(undefined8 *)(unaff_x20 + lVar5);
  _swift_bridgeObjectRetain();
  *param_1 = bVar6 & 1;
  *(undefined8 *)(param_1 + 8) = uVar11;
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  param_1[0x18] = bVar7 & 1;
  *(undefined8 *)(param_1 + 0x20) = uVar10;
  return;
}

