// rea decompile_all
// name: FUN_100640654
// address: 0x100640654
// body: available
// range: 0x100640654-0x100640717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100640654(ulong param_1)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0xa8);
  uVar5 = *(ulong *)(lVar4 + 0x10);
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006406fc);
    (*pcVar1)();
  }
  uVar3 = param_1 >> 0x18 & 0xff;
  if (*(ulong *)(*(long *)(lVar4 + 0x20) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100640700);
    (*pcVar1)();
  }
  if (uVar5 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100640704);
    (*pcVar1)();
  }
  uVar2 = (uint)param_1;
  uVar6 = (ulong)(uVar2 >> 0x10 & 0xff);
  if (*(ulong *)(*(long *)(lVar4 + 0x28) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100640708);
    (*pcVar1)();
  }
  if (uVar5 < 3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10064070c);
    (*pcVar1)();
  }
  uVar7 = (ulong)(uVar2 >> 8 & 0xff);
  if (*(ulong *)(*(long *)(lVar4 + 0x30) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100640710);
    (*pcVar1)();
  }
  if (uVar5 == 3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100640714);
    (*pcVar1)();
  }
  if ((ulong)(uVar2 & 0xff) < *(ulong *)(*(long *)(lVar4 + 0x38) + 0x10)) {
    return *(int *)(*(long *)(lVar4 + 0x38) + (ulong)(uVar2 & 0xff) * 4 + 0x20) +
           (*(uint *)(*(long *)(lVar4 + 0x30) + uVar7 * 4 + 0x20) ^
           *(int *)(*(long *)(lVar4 + 0x28) + uVar6 * 4 + 0x20) +
           *(int *)(*(long *)(lVar4 + 0x20) + uVar3 * 4 + 0x20));
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640718);
  (*pcVar1)();
}

