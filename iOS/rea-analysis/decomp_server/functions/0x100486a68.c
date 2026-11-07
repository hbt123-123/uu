// rea decompile_all
// name: FUN_100486a68
// address: 0x100486a68
// body: available
// range: 0x100486a68-0x100486b2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100486a68(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar1 = unaff_x20[4];
  uVar2 = unaff_x20[6];
  if ((((uVar1 & uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) ||
     (((uint)(uVar2 >> 0x3b) & 6 | (uint)(uVar1 >> 0x3d) & 1) != 1)) {
    uVar3 = 0;
    uVar6 = 0;
    uVar7 = 0xc000000000000000;
    uVar4 = 1;
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    puVar5 = (undefined *)*unaff_x20;
    uVar3 = unaff_x20[1];
    uVar4 = unaff_x20[2];
    uVar6 = unaff_x20[3];
    uVar7 = uVar1 & 0xdfffffffffffffff;
    FUN_1004816e0(puVar5,uVar3,uVar4,uVar6,uVar1,unaff_x20[5],uVar2,unaff_x20[7],unaff_x20[8],
                  unaff_x20[9]);
  }
  *param_1 = puVar5;
  param_1[1] = uVar3;
  *(byte *)(param_1 + 2) = (byte)uVar4 & 1;
  param_1[3] = uVar6;
  param_1[4] = uVar7;
  return;
}

