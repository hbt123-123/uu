// rea decompile_all
// name: FUN_1004981ac
// address: 0x1004981ac
// body: available
// range: 0x1004981ac-0x100498267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1004981ac(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar2 = unaff_x20[7];
  uVar3 = unaff_x20[9];
  if (((unaff_x20[4] < 0xffffffff00000000 || uVar2 >> 0x20 != 0) ||
       (uVar3 & 0x3000000000000000) != 0) &&
     (((uint)(uVar3 >> 0x3b) & 6 | (uint)(uVar2 >> 0x3f)) == 2)) {
    uVar1 = *unaff_x20;
    FUN_10048270c(uVar1,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],unaff_x20[5],
                  unaff_x20[6],uVar2,unaff_x20[8],uVar3,FUN_100008184);
    uVar1 = uVar1 & 0x101010101;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

