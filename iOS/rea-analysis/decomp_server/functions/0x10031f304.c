// rea decompile_all
// name: FUN_10031f304
// address: 0x10031f304
// body: available
// range: 0x10031f304-0x10031f3b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031f304(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = &DAT_100a86030;
  FUN_100004bb4(&DAT_100a86030,&DAT_10081a7e8);
  lVar4 = *(long *)(puVar1 + -8);
  lVar3 = (long)&local_50 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_50 = param_1;
  uStack_48 = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar2 = &DAT_100a85c70;
  FUN_100004bb4(&DAT_100a85c70,&DAT_10081a2a0);
  __sScS12ContinuationV5yieldyAB11YieldResultOyx__GxnF(lVar3,&local_50,puVar2);
  (**(code **)(lVar4 + 8))(lVar3,puVar1);
  return;
}

