// rea decompile_all
// name: FUN_1005826f4
// address: 0x1005826f4
// body: available
// range: 0x1005826f4-0x10058279b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005826f4(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  undefined1 uVar7;
  long in_x3;
  undefined1 uVar8;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(in_x3 + 0x50,auStack_68,0,0);
  bVar6 = *(long *)(in_x3 + 0x70) != 1;
  uVar2 = 0;
  if (bVar6) {
    uVar2 = *(undefined8 *)(in_x3 + 0x50);
  }
  uVar3 = 0xc000000000000000;
  if (bVar6) {
    uVar3 = *(undefined8 *)(in_x3 + 0x58);
  }
  uVar8 = 0xc;
  uVar7 = uVar8;
  if (bVar6) {
    uVar7 = (undefined1)*(undefined8 *)(in_x3 + 0x60);
  }
  if (bVar6) {
    uVar8 = (undefined1)((ulong)*(undefined8 *)(in_x3 + 0x60) >> 8);
  }
  uVar4 = 0;
  if (bVar6) {
    uVar4 = *(undefined8 *)(in_x3 + 0x68);
  }
  lVar5 = 0;
  if (bVar6) {
    lVar5 = *(long *)(in_x3 + 0x70);
  }
  uVar1 = 0xc;
  if (bVar6) {
    uVar1 = *(undefined1 *)(in_x3 + 0x78);
  }
  FUN_1005a8504();
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar7;
  *(undefined1 *)((long)param_1 + 0x11) = uVar8;
  param_1[3] = uVar4;
  param_1[4] = lVar5;
  *(undefined1 *)(param_1 + 5) = uVar1;
  return;
}

