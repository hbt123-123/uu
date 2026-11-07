// rea decompile_all
// name: FUN_1004cb480
// address: 0x1004cb480
// body: available
// range: 0x1004cb480-0x1004cb563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004cb480(undefined4 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = *unaff_x20;
  uVar8 = unaff_x20[1];
  uVar7 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar6 = unaff_x20[4];
  uVar1 = unaff_x20[0xc];
  uVar2 = unaff_x20[0xe];
  if (((uVar1 >> 8 == 0xffffffff) && ((uVar2 & 0x3000000000000000) == 0)) ||
     (((uint)(uVar2 >> 0x39) & 0x18 | (uint)(uVar1 >> 0x3d)) != 10)) {
    uVar3 = 0;
    bVar4 = 0;
    uVar8 = 0;
    uVar5 = 0;
    uVar6 = 0xc000000000000000;
    uVar7 = 0xe000000000000000;
  }
  else {
    bVar4 = (byte)((ulong)uVar3 >> 0x20) & 1;
    switchD_100481b9c::caseD_c9
              (uVar3,uVar8,uVar7,uVar5,uVar6,unaff_x20[5],unaff_x20[6],unaff_x20[7],unaff_x20[8],
               unaff_x20[9],unaff_x20[10],unaff_x20[0xb],uVar1,unaff_x20[0xd],uVar2);
  }
  *param_1 = (int)uVar3;
  *(byte *)(param_1 + 1) = bVar4;
  *(undefined8 *)(param_1 + 2) = uVar8;
  *(undefined8 *)(param_1 + 4) = uVar7;
  *(undefined8 *)(param_1 + 6) = uVar5;
  *(undefined8 *)(param_1 + 8) = uVar6;
  return;
}

