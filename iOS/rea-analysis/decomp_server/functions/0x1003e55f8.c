// rea decompile_all
// name: FUN_1003e55f8
// address: 0x1003e55f8
// body: available
// range: 0x1003e55f8-0x1003e569f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e55f8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar4 = *param_2;
  _swift_beginAccess(param_2 + 2,auStack_58,0,0);
  lVar3 = param_2[2];
  uVar1 = 0;
  __sSaMa(0,*(undefined8 *)(lVar4 + 0x50));
  _swift_bridgeObjectRetain(lVar3);
  puVar2 = PTR___sSayxGs14_ArrayProtocolsMc_1009958c0;
  _swift_getWitnessTable(PTR___sSayxGs14_ArrayProtocolsMc_1009958c0,uVar1);
  __ss14_ArrayProtocolPsE6filterySay7ElementQzGSbAEKXEKF(param_3,param_4,uVar1,puVar2);
  *param_1 = param_3;
  return;
}

