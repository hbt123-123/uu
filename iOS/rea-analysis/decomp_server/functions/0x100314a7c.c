// rea decompile_all
// name: FUN_100314a7c
// address: 0x100314a7c
// body: available
// range: 0x100314a7c-0x100314b4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100314a7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  
  uVar2 = 0xff;
  local_70 = param_4;
  uStack_68 = param_5;
  local_60 = param_2;
  local_58 = param_1;
  FUN_100316f58(0xff,param_4,param_5);
  uVar3 = 0;
  __sSaMa(0,uVar2);
  puVar4 = PTR___sSayxGSTsMc_100995898;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_100995898,uVar3);
  __sSTsE7forEachyyy7ElementQzKXEKF(FUN_100316fa8,auStack_80,uVar3,puVar4);
  lVar5 = *(long *)(param_3 + 0x10);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(param_3 + 0x28);
    do {
      pcVar1 = (code *)puVar6[-1];
      uVar2 = *puVar6;
      local_50 = 1;
      local_58 = param_2;
      _swift_retain(uVar2);
      (*pcVar1)(&local_58);
      _swift_release(uVar2);
      puVar6 = puVar6 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

