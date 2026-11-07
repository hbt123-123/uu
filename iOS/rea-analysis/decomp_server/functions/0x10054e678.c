// rea decompile_all
// name: FUN_10054e678
// address: 0x10054e678
// body: available
// range: 0x10054e678-0x10054e723 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054e678(void)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar4 = *(long *)(unaff_x20 + 0x58);
  if (((0 < lVar4) &&
      (pcVar1 = *(char **)(unaff_x20 + 0x28), pcVar1 != *(char **)(unaff_x20 + 0x30))) &&
     ((*pcVar1 == ';' || (*pcVar1 == ',')))) {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_100560bb8();
  }
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x70);
  local_50 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x90);
  local_30 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar3 = *(ulong *)(unaff_x20 + 0x98);
  FUN_10055dc44(&local_50,uVar3,*(undefined8 *)(unaff_x20 + 0xa0),*(undefined2 *)(unaff_x20 + 0x60))
  ;
  if ((unaff_x21 == 0) && ((uVar3 & 1) == 0)) {
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10054e724);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + 0x58) = lVar4 + 1;
  }
  return;
}

