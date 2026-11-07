// rea decompile_all
// name: FUN_100442a3c
// address: 0x100442a3c
// body: available
// range: 0x100442a3c-0x100442b6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100442a3c(undefined4 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  
  uVar5 = unaff_x20[3];
  uVar9 = unaff_x20[4];
  uVar4 = unaff_x20[5];
  bVar7 = *(byte *)((long)unaff_x20 + 0x34);
  if (bVar7 >> 6 == 0 &&
      (((((uVar5 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 || uVar9 >> 0x21 != 0x3fffffff) ||
       uVar4 >> 0x21 != 0) || bVar7 >> 1 != 0)) {
    uVar6 = (ulong)CONCAT14(bVar7,*(undefined4 *)(unaff_x20 + 6));
    puVar10 = (undefined *)unaff_x20[1];
    uVar8 = unaff_x20[2];
    bVar2 = (byte)(uVar9 >> 0x20) & 1;
    uVar1 = *unaff_x20;
    bVar3 = (byte)(uVar4 >> 0x20) & 1;
    bVar7 = bVar7 & 1;
    FUN_10017ac64(uVar1,puVar10,uVar8,uVar5,uVar9,uVar4,uVar6);
  }
  else {
    uVar1 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar4 = 0;
    uVar6 = 0;
    bVar2 = 1;
    uVar5 = 0xc000000000000000;
    bVar3 = 1;
    bVar7 = 1;
    puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  *param_1 = (int)uVar1;
  *(undefined **)(param_1 + 2) = puVar10;
  *(undefined8 *)(param_1 + 4) = uVar8;
  *(ulong *)(param_1 + 6) = uVar5;
  param_1[8] = (int)uVar9;
  *(byte *)(param_1 + 9) = bVar2;
  param_1[10] = (int)uVar4;
  *(byte *)(param_1 + 0xb) = bVar3;
  param_1[0xc] = (int)uVar6;
  *(byte *)(param_1 + 0xd) = bVar7;
  return;
}

