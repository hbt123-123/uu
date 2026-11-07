// rea decompile_all
// name: FUN_1003455c0
// address: 0x1003455c0
// body: available
// range: 0x1003455c0-0x10034572f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003455c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  
  puVar1 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  puVar7 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_5 == 0) {
    FUN_10007f314(param_4,puVar7,&DAT_100a83428,&DAT_100817bb0);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    lVar8 = *(long *)(lVar2 + -8);
    puVar3 = puVar7;
    (**(code **)(lVar8 + 0x30))(puVar7,1,lVar2);
    if ((int)puVar3 != 1) {
      (**(code **)(lVar8 + 0x20))(param_1,puVar7,lVar2);
      return;
    }
    FUN_100040bb4(puVar7,&DAT_100a83428,&DAT_100817bb0);
    uVar4 = 0;
    FUN_100277ad0(0);
    puVar5 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(uVar4,puVar5,0,0);
    uVar6 = 0;
    FUN_100278368(0);
    _swift_storeEnumTagMultiPayload(puVar5,uVar6,7);
    _swift_storeEnumTagMultiPayload(puVar5,uVar4,10);
  }
  _swift_willThrow();
  _swift_errorRetain(param_5);
  return;
}

