// rea decompile_all
// name: FUN_100487a40
// address: 0x100487a40
// body: available
// range: 0x100487a40-0x100487b27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100487a40(undefined4 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar5 = unaff_x20[4];
  uVar1 = unaff_x20[6];
  if ((((uVar5 & uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) ||
     (((uint)(uVar1 >> 0x3b) & 6 | (uint)(uVar5 >> 0x3d) & 1) != 5)) {
    uVar2 = 0;
    uVar7 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar8 = 0xc000000000000000;
    uVar6 = 1;
    uVar5 = 1;
  }
  else {
    uVar2 = *unaff_x20;
    uVar7 = unaff_x20[1];
    uVar6 = unaff_x20[2];
    uVar3 = unaff_x20[3];
    uVar4 = unaff_x20[5];
    uVar8 = uVar1 & 0xcfffffffffffffff;
    FUN_1004816e0(uVar2,uVar7,uVar6,uVar3,uVar5,uVar4,uVar1,unaff_x20[7],unaff_x20[8],unaff_x20[9]);
  }
  *param_1 = (int)uVar2;
  *(undefined8 *)(param_1 + 2) = uVar7;
  *(byte *)(param_1 + 4) = (byte)uVar6 & 1;
  *(undefined8 *)(param_1 + 6) = uVar3;
  *(byte *)(param_1 + 8) = (byte)uVar5 & 1;
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(ulong *)(param_1 + 0xc) = uVar8;
  return;
}

