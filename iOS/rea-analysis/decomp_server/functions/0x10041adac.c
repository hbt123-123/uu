// rea decompile_all
// name: FUN_10041adac
// address: 0x10041adac
// body: available
// range: 0x10041adac-0x10041ae83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041adac(undefined4 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = unaff_x20[4];
  uVar1 = unaff_x20[6];
  uVar2 = unaff_x20[8];
  if ((((uVar3 & uVar1 & uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) ||
     (((uint)(uVar2 >> 0x3b) & 6 | (uint)(uVar1 >> 0x3d) & 1) != 6)) {
    uVar8 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar3 = 0xc000000000000000;
    uVar7 = 1;
  }
  else {
    uVar8 = *unaff_x20;
    uVar5 = unaff_x20[1];
    uVar7 = unaff_x20[2];
    uVar6 = unaff_x20[3];
    uVar4 = (undefined4)((ulong)uVar8 >> 0x20);
    FUN_10042d158(uVar8,uVar5,uVar7,uVar6,uVar3,unaff_x20[5],uVar1,unaff_x20[7],uVar2);
  }
  *param_1 = (int)uVar8;
  param_1[1] = uVar4;
  *(undefined8 *)(param_1 + 2) = uVar5;
  *(byte *)(param_1 + 4) = (byte)uVar7 & 1;
  *(undefined8 *)(param_1 + 6) = uVar6;
  *(ulong *)(param_1 + 8) = uVar3;
  return;
}

