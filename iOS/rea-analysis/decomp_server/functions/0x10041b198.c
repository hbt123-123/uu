// rea decompile_all
// name: FUN_10041b198
// address: 0x10041b198
// body: available
// range: 0x10041b198-0x10041b24b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10041b198(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  
  uVar2 = unaff_x20[6];
  uVar3 = unaff_x20[8];
  if ((((unaff_x20[4] & uVar2 & uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) ||
     (((uint)(uVar3 >> 0x3b) & 6 | (uint)(uVar2 >> 0x3d) & 1) != 7)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *unaff_x20;
    FUN_10042d158(uVar1,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],unaff_x20[5],uVar2,
                  unaff_x20[7],uVar3);
  }
  return uVar1;
}

