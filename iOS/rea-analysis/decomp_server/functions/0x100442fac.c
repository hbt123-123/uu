// rea decompile_all
// name: FUN_100442fac
// address: 0x100442fac
// body: available
// range: 0x100442fac-0x10044308f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100442fac(undefined8 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 *unaff_x20;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte bVar8;
  
  uVar3 = unaff_x20[3];
  uVar7 = unaff_x20[4];
  bVar1 = *(byte *)((long)unaff_x20 + 0x34);
  if (bVar1 >> 6 == 1 &&
      (((((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 || uVar7 >> 0x21 != 0x3fffffff) ||
       (ulong)unaff_x20[5] >> 0x21 != 0) || bVar1 >> 1 != 0)) {
    uVar6 = unaff_x20[1];
    uVar4 = unaff_x20[2];
    uVar5 = *unaff_x20;
    uVar2 = (undefined4)((ulong)uVar6 >> 0x20);
    bVar8 = (byte)(uVar7 >> 0x20) & 1;
    FUN_10017ac64(uVar5,uVar6,uVar4,uVar3,uVar7,unaff_x20[5],
                  (ulong)CONCAT14(bVar1,*(undefined4 *)(unaff_x20 + 6)));
  }
  else {
    uVar5 = 0;
    uVar2 = 0;
    uVar4 = 0;
    uVar7 = 0;
    uVar3 = 0xc000000000000000;
    uVar6 = 1;
    bVar8 = 1;
  }
  *param_1 = uVar5;
  *(byte *)(param_1 + 1) = (byte)uVar6 & 1;
  *(undefined4 *)((long)param_1 + 0xc) = uVar2;
  param_1[2] = uVar4;
  param_1[3] = uVar3;
  *(int *)(param_1 + 4) = (int)uVar7;
  *(byte *)((long)param_1 + 0x24) = bVar8;
  return;
}

