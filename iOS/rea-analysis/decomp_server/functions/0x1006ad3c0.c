// rea decompile_all
// name: FUN_1006ad3c0
// address: 0x1006ad3c0
// body: available
// range: 0x1006ad3c0-0x1006ad467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1006ad3c0(long param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  pcVar1 = "/dev/urandom";
  _open("/dev/urandom",0x1000000);
  if ((int)pcVar1 == -1) {
    pcVar1 = "/dev/random";
    _open("/dev/random",0x1000000);
    if ((int)pcVar1 == -1) {
      return 0;
    }
  }
  if (param_2 != 0) {
    uVar4 = (ulong)param_2;
    do {
      pcVar2 = pcVar1;
      _read(pcVar1,param_1,uVar4);
      if ((long)pcVar2 < 1) {
        uVar3 = 0;
        goto LAB_1006ad444;
      }
      param_1 = param_1 + (long)pcVar2;
      uVar4 = uVar4 - (long)pcVar2;
    } while (uVar4 != 0);
  }
  uVar3 = 1;
LAB_1006ad444:
  _close(pcVar1);
  return uVar3;
}

