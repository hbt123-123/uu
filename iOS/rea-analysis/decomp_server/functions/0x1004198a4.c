// rea decompile_all
// name: FUN_1004198a4
// address: 0x1004198a4
// body: available
// range: 0x1004198a4-0x100419933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004198a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar3 = unaff_x20[6];
  uVar4 = unaff_x20[8];
  if ((((unaff_x20[4] & uVar3 & uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) ||
     (((uint)(uVar4 >> 0x3b) & 6) != 0 || ((uint)(uVar3 >> 0x3d) & 1) != 0)) {
    uVar1 = 0;
    uVar2 = 0xc000000000000000;
  }
  else {
    uVar1 = *unaff_x20;
    uVar2 = unaff_x20[1];
    FUN_10042d158(uVar1,uVar2,unaff_x20[2],unaff_x20[3],unaff_x20[4],unaff_x20[5],uVar3,unaff_x20[7]
                  ,uVar4);
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar1;
  return auVar5;
}

