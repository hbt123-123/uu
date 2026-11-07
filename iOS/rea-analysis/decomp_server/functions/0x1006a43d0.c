// rea decompile_all
// name: FUN_1006a43d0
// address: 0x1006a43d0
// body: available
// range: 0x1006a43d0-0x1006a44b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a43d0(undefined8 param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  
  uVar1 = DAT_100b2c628;
  if (DAT_100b2c620 == (void *)0x0) {
    pvVar2 = operator_new(0x680);
    FUN_10069f87c(pvVar2,param_1,uVar1);
    DAT_100b2c620 = pvVar2;
    *(undefined1 *)((long)pvVar2 + 0x1b0) = DAT_100b2c630;
    if (0x1517f < DAT_100b2c638) {
      *(long *)((long)pvVar2 + 0x250) = DAT_100b2c638;
    }
    DAT_100b2c618 = 1;
    ___xlogger_SetAppender_impl(FUN_1006a43a8);
    if ((DAT_100b2c640 & 1) == 0) {
      FUN_1006a777c();
    }
  }
  else {
    FUN_1006a0890(DAT_100b2c620,"appender has already been opened. _dir:%s _nameprefix:%s");
  }
  return;
}

