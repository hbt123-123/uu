// rea decompile_all
// name: FUN_1000b3454
// address: 0x1000b3454
// body: available
// range: 0x1000b3454-0x1000b34ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000b3454(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  uVar1 = 0x534e4d554c4f43;
  uVar4 = 0;
  FUN_1000b2d1c(0x534e4d554c4f43);
  uVar2 = 0x53454e494c;
  uVar5 = 0;
  FUN_1000b2d1c();
  uVar6 = 0;
  if ((uVar5 & 1) == 0) {
    uVar6 = uVar2;
  }
  if (((uVar4 & 1) != 0) || (uVar7 = uVar1, (uVar5 & 1) != 0)) {
    uVar3 = uVar2;
    FUN_1000b33b4();
    uVar7 = 0x50;
    if ((uVar6 & 1) == 0) {
      uVar7 = uVar3;
    }
    if ((uVar4 & 1) == 0) {
      uVar7 = uVar1;
    }
    uVar4 = 0x19;
    if ((param_4 & 1) == 0) {
      uVar4 = param_3;
    }
    uVar6 = uVar2;
    if ((uVar5 & 1) != 0) {
      uVar6 = uVar4;
    }
  }
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar7;
  return auVar8;
}

