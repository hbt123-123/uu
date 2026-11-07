// rea decompile_all
// name: FUN_1004191f8
// address: 0x1004191f8
// body: available
// range: 0x1004191f8-0x1004192cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004191f8(undefined4 *param_1)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = *unaff_x20;
  uVar9 = unaff_x20[1];
  uVar8 = unaff_x20[2];
  uVar6 = unaff_x20[3];
  uVar7 = unaff_x20[4];
  uVar2 = unaff_x20[8];
  bVar1 = *(byte *)(unaff_x20 + 9);
  if ((((uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) || (bVar1 != 0xff)) {
    uVar3 = 4;
    if ((bVar1 & 1) == 0) {
      uVar3 = 0;
    }
    if ((uVar3 | (uint)(uVar2 >> 0x3c) & 3) == 7) {
      uVar5 = (undefined4)((ulong)uVar4 >> 0x20);
      switchD_10017a950::caseD_83
                (uVar4,uVar9,uVar8,uVar6,uVar7,unaff_x20[5],unaff_x20[6],unaff_x20[7],uVar2,
                 bVar1 & 1);
      goto LAB_1004192a8;
    }
  }
  uVar4 = 0;
  uVar5 = 0;
  uVar9 = 0;
  uVar6 = 0;
  uVar7 = 0xc000000000000000;
  uVar8 = 0xe000000000000000;
LAB_1004192a8:
  *param_1 = (int)uVar4;
  param_1[1] = uVar5;
  *(undefined8 *)(param_1 + 2) = uVar9;
  *(undefined8 *)(param_1 + 4) = uVar8;
  *(undefined8 *)(param_1 + 6) = uVar6;
  *(undefined8 *)(param_1 + 8) = uVar7;
  return;
}

