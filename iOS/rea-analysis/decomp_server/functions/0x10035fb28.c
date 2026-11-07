// rea decompile_all
// name: _TtC10Filepicker17FilePickerRequest::shouldRetryWithError:
// address: 0x10035fb28
// body: available
// range: 0x10035fb28-0x10035fba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

bool _TtC10Filepicker17FilePickerRequest::shouldRetryWithError_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = maxRetryCount;
  _swift_beginAccess(param_1 + maxRetryCount,auStack_48,0,0);
  lVar1 = retryCount;
  uVar4 = *(ulong *)(param_1 + lVar2);
  _swift_beginAccess(param_1 + retryCount,auStack_60,0,0);
  if (*(ulong *)(param_1 + lVar1) <= uVar4) {
    return (bool)(uVar4 != *(ulong *)(param_1 + lVar1));
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10035fba4);
  (*pcVar3)();
}

