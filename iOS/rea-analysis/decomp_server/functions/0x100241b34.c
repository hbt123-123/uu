// rea decompile_all
// name: FUN_100241b34
// address: 0x100241b34
// body: available
// range: 0x100241b34-0x100241bf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_100241b34(void)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  
  lVar4 = _TtC6FCount3RC4::I;
  bVar1 = *(char *)(unaff_x20 + _TtC6FCount3RC4::I) + 1;
  *(byte *)(unaff_x20 + _TtC6FCount3RC4::I) = bVar1;
  lVar2 = _TtC6FCount3RC4::State;
  lVar5 = _TtC6FCount3RC4::J;
  uVar7 = (ulong)bVar1;
  if (*(ulong *)(*(long *)(unaff_x20 + _TtC6FCount3RC4::State) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100241bec);
    (*pcVar6)();
  }
  cVar3 = *(char *)(*(long *)(unaff_x20 + _TtC6FCount3RC4::State) + uVar7 + 0x20) +
          *(char *)(unaff_x20 + _TtC6FCount3RC4::J);
  *(char *)(unaff_x20 + _TtC6FCount3RC4::J) = cVar3;
  FUN_100241a54(uVar7,cVar3);
  uVar7 = *(ulong *)(*(long *)(unaff_x20 + lVar2) + 0x10);
  if (uVar7 <= *(byte *)(unaff_x20 + lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100241bf0);
    (*pcVar6)();
  }
  if (uVar7 <= *(byte *)(unaff_x20 + lVar5)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100241bf4);
    (*pcVar6)();
  }
  lVar2 = *(long *)(unaff_x20 + lVar2) + 0x20;
  uVar8 = (ulong)((uint)*(byte *)(lVar2 + (ulong)*(byte *)(unaff_x20 + lVar5)) +
                 (uint)*(byte *)(lVar2 + (ulong)*(byte *)(unaff_x20 + lVar4))) & 0xff;
  if (uVar8 < uVar7) {
    return *(undefined1 *)(lVar2 + uVar8);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100241bf8);
  (*pcVar6)();
}

