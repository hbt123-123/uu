// rea decompile_all
// name: FUN_100498bb0
// address: 0x100498bb0
// body: available
// range: 0x100498bb0-0x100498c63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100498bb0(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[7];
  uVar2 = unaff_x20[9];
  if ((((ulong)unaff_x20[4] < 0xffffffff00000000 || uVar1 >> 0x20 != 0) ||
       (uVar2 & 0x3000000000000000) != 0) &&
     (((uint)(uVar2 >> 0x3b) & 6 | (uint)(uVar1 >> 0x3f)) == 5)) {
    uVar3 = *unaff_x20;
    FUN_10048270c(uVar3,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],unaff_x20[5],
                  unaff_x20[6],uVar1,unaff_x20[8],uVar2,FUN_100008184);
  }
  else {
    uVar3 = 0;
  }
  return (uint)uVar3 & 1;
}

