// rea decompile_all
// name: FUN_10036c5e8
// address: 0x10036c5e8
// body: available
// range: 0x10036c5e8-0x10036c69b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10036c5e8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    FUN_1000d27dc(param_1,param_4);
    lVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    lVar3 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    puVar4 = &DAT_100a88a88;
    FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
    iVar1 = *(int *)(puVar4 + 0x30);
    uVar5 = *(undefined8 *)(param_2 + iVar1);
    _swift_errorRetain(uVar5);
    *(undefined8 *)(param_1 + iVar1) = uVar5;
    _swift_storeEnumTagMultiPayload(param_1,param_3,lVar2);
  }
  return param_1;
}

