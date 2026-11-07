// rea decompile_all
// name: FUN_1000c0e14
// address: 0x1000c0e14
// body: available
// range: 0x1000c0e14-0x1000c0ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c0e14(long param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = _pthread_getspecific(0x68);
  _swift_once(&DAT_100121c88,FUN_1000c0ef4,0);
  if ((DAT_100121c90 & 1) == 0) {
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x18);
    if (DAT_100121ca0 != -1) {
      FUN_1000c1020();
    }
    iVar1 = (int)uVar3;
    if ((DAT_100121c98 == (code *)0x0) || ((*DAT_100121c98)(), iVar1 != 0)) {
      uVar3 = *(undefined8 *)((long)pvVar2 + 0x18);
      _voucher_adopt();
    }
    else {
      uVar3 = *(undefined8 *)((long)pvVar2 + 0x18);
    }
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    if (*(char *)((long)pvVar2 + 0x20) == '\x01') {
      *(undefined1 *)((long)pvVar2 + 0x20) = 0;
    }
  }
  return;
}

