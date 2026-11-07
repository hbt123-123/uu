// rea decompile_all
// name: FUN_1003aab8c
// address: 0x1003aab8c
// body: available
// range: 0x1003aab8c-0x1003aac53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003aab8c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  
  lVar5 = *param_1;
  _swift_beginAccess(param_1 + 3,auStack_58,0,0);
  lVar4 = param_1[3];
  local_70 = *(undefined8 *)(lVar5 + 0x50);
  uVar1 = 0xff;
  uStack_68 = param_2;
  local_60 = param_3;
  FUN_1003ab028(0xff);
  uVar2 = 0;
  __sSaMa(0,uVar1);
  _swift_bridgeObjectRetain(lVar4);
  puVar3 = PTR___sSayxGSTsMc_100995898;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_100995898,uVar2);
  __sSTsE7forEachyyy7ElementQzKXEKF(FUN_1003ab034,auStack_80,uVar2,puVar3);
  _swift_bridgeObjectRelease(lVar4);
  return;
}

