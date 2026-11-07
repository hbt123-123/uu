// rea decompile_all
// name: FUN_1004c9488
// address: 0x1004c9488
// body: available
// range: 0x1004c9488-0x1004c953b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1004c9488(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *unaff_x20;
  
  puVar1 = (undefined *)*unaff_x20;
  uVar2 = unaff_x20[0xc];
  uVar4 = unaff_x20[0xe];
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (((uVar2 >> 8 != 0xffffffff) || ((uVar4 & 0x3000000000000000) != 0)) &&
     (((uint)(uVar4 >> 0x39) & 0x18) == 0 && (uint)(uVar2 >> 0x3d) == 0)) {
    switchD_100481b9c::caseD_c9
              (puVar1,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],unaff_x20[5],unaff_x20[6],
               unaff_x20[7],unaff_x20[8],unaff_x20[9],unaff_x20[10],unaff_x20[0xb],uVar2,
               unaff_x20[0xd],uVar4);
    puVar3 = puVar1;
  }
  return puVar3;
}

