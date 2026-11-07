// rea decompile_all
// name: FUN_1002f8634
// address: 0x1002f8634
// body: available
// range: 0x1002f8634-0x1002f8763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f8634(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  puVar1 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  puVar4 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation13URLComponentsV3urlAA3URLVSgvg(puVar4);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar2 + -8);
  puVar3 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar2);
  if ((int)puVar3 == 1) {
    FUN_1002f836c(puVar4);
    lVar5 = 0;
    FUN_100277ad0();
    lVar2 = lVar5;
    FUN_1002c272c();
    _swift_allocError(lVar5,lVar2,0,0);
    *(long *)(lVar2 + 0x18) = param_2;
    *(undefined8 *)(lVar2 + 0x20) = param_3;
    FUN_1000efc08(lVar2);
    (**(code **)(*(long *)(param_2 + -8) + 0x10))();
    _swift_storeEnumTagMultiPayload(lVar2,lVar5,3);
    _swift_willThrow();
  }
  else {
    (**(code **)(lVar5 + 0x20))(param_1,puVar4,lVar2);
  }
  return;
}

