// rea decompile_all
// name: FUN_100484944
// address: 0x100484944
// body: available
// range: 0x100484944-0x1004849ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100484944(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_4 + 0x28,auStack_68,0,0);
  lVar7 = *(long *)(param_4 + 0x30);
  bVar9 = lVar7 != 0;
  uVar1 = 0;
  if (bVar9) {
    uVar1 = *(undefined8 *)(param_4 + 0x28);
  }
  lVar2 = -0x2000000000000000;
  if (bVar9) {
    lVar2 = lVar7;
  }
  uVar3 = 0;
  if (bVar9) {
    uVar3 = *(undefined8 *)(param_4 + 0x38);
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  uVar8 = 0xe000000000000000;
  if (bVar9) {
    puVar4 = *(undefined **)(param_4 + 0x48);
    uVar8 = *(undefined8 *)(param_4 + 0x40);
  }
  uVar5 = 0;
  if (lVar7 != 0) {
    uVar5 = *(undefined8 *)(param_4 + 0x50);
  }
  uVar6 = 0xc000000000000000;
  if (lVar7 != 0) {
    uVar6 = *(undefined8 *)(param_4 + 0x58);
  }
  FUN_100492e64();
  *param_1 = uVar1;
  param_1[1] = lVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar8;
  param_1[4] = puVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  return;
}

