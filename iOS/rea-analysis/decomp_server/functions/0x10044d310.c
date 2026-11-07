// rea decompile_all
// name: FUN_10044d310
// address: 0x10044d310
// body: available
// range: 0x10044d310-0x10044d3c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10044d310(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((*(ulong *)(unaff_x20 + 0x58) & 0x3000000000000000) == 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    FUN_100461a34(uVar3,uVar4,uVar2,uVar5,uVar1,uVar6,*(undefined8 *)(unaff_x20 + 0x50),
                  *(ulong *)(unaff_x20 + 0x58),FUN_100008184);
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
    uVar1 = 0;
    uVar6 = 0xc000000000000000;
    uVar4 = 1;
    uVar5 = 1;
  }
  *param_1 = uVar3;
  *(byte *)(param_1 + 1) = (byte)uVar4 & 1;
  param_1[2] = uVar2;
  *(byte *)(param_1 + 3) = (byte)uVar5 & 1;
  param_1[4] = uVar1;
  param_1[5] = uVar6;
  return;
}

