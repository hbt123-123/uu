// rea decompile_all
// name: FUN_10060536c
// address: 0x10060536c
// body: available
// range: 0x10060536c-0x100605473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10060536c(long param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  if (DAT_100aafa58 != -1) {
    _swift_once(&DAT_100aafa58,FUN_100605508);
  }
  puVar2 = auStack_48;
  _swift_beginAccess(&DAT_100aafee8,puVar2,0x20,0);
  lVar3 = DAT_100aafee8;
  if ((*(long *)(DAT_100aafee8 + 0x10) == 0) ||
     (lVar4 = param_1, FUN_1003618e4(), ((ulong)puVar2 & 1) == 0)) {
    _swift_endAccess(auStack_48);
  }
  else {
    lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + lVar4 * 8);
    _swift_endAccess(auStack_48);
    lVar3 = *(long *)(lVar4 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100605470);
      (*pcVar1)();
    }
    _swift_retain(lVar4);
    _FSEventStreamStop(lVar3);
    if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100605474);
      (*pcVar1)();
    }
    _FSEventStreamInvalidate();
    _swift_beginAccess(&DAT_100aafee8,auStack_48,0x21,0);
    FUN_1006052b0(0,param_1);
    _swift_endAccess(auStack_48);
    _swift_release(lVar4);
  }
  return;
}

