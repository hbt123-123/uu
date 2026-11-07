// rea decompile_all
// name: FUN_10035a9d8
// address: 0x10035a9d8
// body: available
// range: 0x10035a9d8-0x10035ab0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10035a9d8(undefined8 param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ID *pIVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID *pIVar7;
  undefined1 auVar8 [16];
  ID aIStack_60 [2];
  
  lVar1 = 0;
  FUN_1002782c4();
  pIVar7 = (ID *)((long)aIStack_60 -
                 (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  aIStack_60[1] = _objc_msgSend(param_2,"statusCode");
  pIVar2 = aIStack_60 + 1;
  __sSTsSQ7ElementRpzrlE8containsySbABF(pIVar2,param_3,param_4,PTR___sSiSQsWP_100995988);
  uVar3 = 0;
  if (((ulong)pIVar2 & 1) == 0) {
    IVar4 = _objc_msgSend(param_2,"statusCode");
    *pIVar7 = IVar4;
    _swift_storeEnumTagMultiPayload(pIVar7,lVar1,3);
    uVar5 = 0;
    FUN_100277ad0(0);
    uVar6 = uVar5;
    FUN_1002c272c();
    uVar3 = uVar5;
    _swift_allocError(uVar5,uVar6,0,0);
    FUN_100082394(pIVar7);
    _swift_storeEnumTagMultiPayload(uVar6,uVar5,9);
    FUN_1000d27dc(pIVar7,FUN_1002782c4);
  }
  auVar8._8_4_ = ((uint)pIVar2 ^ 0xffffffff) & 1;
  auVar8._0_8_ = uVar3;
  auVar8._12_4_ = 0;
  return auVar8;
}

