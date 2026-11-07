// rea decompile_all
// name: FUN_100314958
// address: 0x100314958
// body: available
// range: 0x100314958-0x100314a23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100314958(undefined8 param_1,long *param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_58;
  undefined1 local_50;
  
  uVar2 = 0xff;
  local_58 = param_1;
  FUN_100316f58(0xff,*(undefined8 *)(*param_2 + 0x50),*(undefined8 *)(*param_2 + 0x58));
  uVar3 = 0;
  __sSaMa(0,uVar2);
  puVar4 = PTR___sSayxGSTsMc_100995898;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_100995898,uVar3);
  __sSTsE7forEachyyy7ElementQzKXEKF(FUN_100317070,param_2,uVar3,puVar4);
  lVar6 = *(long *)(param_3 + 0x10);
  if (lVar6 != 0) {
    puVar5 = (undefined8 *)(param_3 + 0x28);
    do {
      pcVar1 = (code *)puVar5[-1];
      uVar2 = *puVar5;
      local_58 = 0;
      local_50 = 2;
      _swift_retain(uVar2);
      (*pcVar1)(&local_58);
      _swift_release(uVar2);
      puVar5 = puVar5 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

