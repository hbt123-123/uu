// rea decompile_all
// name: FUN_100483968
// address: 0x100483968
// body: available
// range: 0x100483968-0x1004839df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100483968(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  long unaff_x20;
  
  lVar7 = *(long *)(unaff_x20 + 0x28);
  bVar8 = lVar7 != 0;
  uVar1 = 0;
  if (bVar8) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  }
  lVar2 = -0x2000000000000000;
  if (bVar8) {
    lVar2 = lVar7;
  }
  uVar3 = 0;
  if (bVar8) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  uVar4 = 0xe000000000000000;
  if (bVar8) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  }
  uVar5 = 0;
  if (bVar8) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
  }
  uVar6 = 0xc000000000000000;
  if (lVar7 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  }
  FUN_100492dac();
  *param_1 = uVar1;
  param_1[1] = lVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  return;
}

