// rea decompile_all
// name: FUN_100358af8
// address: 0x100358af8
// body: available
// range: 0x100358af8-0x100358bdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100358af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  lVar2 = 0;
  FUN_1002782c4();
  lVar1 = -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar1);
  __sSTsSL7ElementRpzrlE6sortedSayABGyF(param_5,param_6,PTR___sSSSLsWP_100995810);
  *puVar4 = param_5;
  *(undefined8 *)(&stack0xffffffffffffffa8 + lVar1) = param_3;
  *(undefined8 *)(&stack0xffffffffffffffb0 + lVar1) = param_4;
  _swift_storeEnumTagMultiPayload(puVar4,lVar2,2);
  FUN_1000823d8(puVar4,param_1,FUN_1002782c4);
  uVar3 = 0;
  FUN_100277ad0(0);
  _swift_storeEnumTagMultiPayload(param_1,uVar3,9);
  _swift_bridgeObjectRetain(param_4);
  return;
}

