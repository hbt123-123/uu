// rea decompile_all
// name: FUN_100418b14
// address: 0x100418b14
// body: available
// range: 0x100418b14-0x100418bbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100418b14(void)

{
  undefined8 uVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[8];
  bVar2 = *(byte *)(unaff_x20 + 9);
  if ((((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) || (bVar2 != 0xff)) {
    uVar4 = 4;
    if ((bVar2 & 1) == 0) {
      uVar4 = 0;
    }
    if ((uVar4 | (uint)(uVar3 >> 0x3c) & 3) == 5) {
      switchD_10017a950::caseD_83
                (uVar1,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],unaff_x20[5],unaff_x20[6]
                 ,unaff_x20[7],uVar3,bVar2 & 1);
      return uVar1;
    }
  }
  return 0;
}

