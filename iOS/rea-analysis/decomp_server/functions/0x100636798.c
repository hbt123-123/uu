// rea decompile_all
// name: FUN_100636798
// address: 0x100636798
// body: available
// range: 0x100636798-0x10063687b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100636844 to 0x1007df514 _swift_unknownObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010063685c) */

void FUN_100636798(long param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x38);
  if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063684c);
    (*pcVar1)();
  }
  if (uVar4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100636850);
    (*pcVar1)();
  }
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100636854);
    (*pcVar1)();
  }
  if (0xff < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100636858);
    (*pcVar1)();
  }
  FUN_10063687c(param_1,uVar4,*(undefined1 *)(unaff_x20 + 0x40),param_2,param_3 & 1);
  lVar2 = param_1;
  (**(code **)(unaff_x20 + 0x18))();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063685c);
    (*pcVar1)();
  }
  lVar5 = *(long *)(lVar2 + 0x10);
  _swift_bridgeObjectRelease(param_1);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  *(long *)(unaff_x20 + 0x60) = lVar2;
  *(long *)(unaff_x20 + 0x68) = lVar2 + 0x20;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(ulong *)(unaff_x20 + 0x78) = lVar5 << 1 | 1;
  _swift_unknownObjectRelease(uVar3);
  return;
}

