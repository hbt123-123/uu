// rea decompile_all
// name: FUN_100241a54
// address: 0x100241a54
// body: available
// range: 0x100241a54-0x100241b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100241a54(ulong param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  
  lVar3 = _TtC6FCount3RC4::State;
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100241af4);
    (*pcVar4)();
  }
  uVar6 = *(ulong *)(unaff_x20 + _TtC6FCount3RC4::State);
  if (*(ulong *)(uVar6 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100241af8);
    (*pcVar4)();
  }
  if (*(ulong *)(uVar6 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100241afc);
    (*pcVar4)();
  }
  uVar1 = *(undefined1 *)(uVar6 + 0x20 + param_1);
  uVar2 = *(undefined1 *)(uVar6 + 0x20 + param_2);
  uVar5 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + lVar3) = uVar6;
  if ((uVar5 & 1) == 0) {
    FUN_100242634();
  }
  uVar5 = *(ulong *)(uVar6 + 0x10);
  if (param_1 < uVar5) {
    *(undefined1 *)(uVar6 + 0x20 + param_1) = uVar2;
    if (param_2 < uVar5) {
      *(undefined1 *)(uVar6 + 0x20 + param_2) = uVar1;
      *(ulong *)(unaff_x20 + lVar3) = uVar6;
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100241b14);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100241b10);
  (*pcVar4)();
}

