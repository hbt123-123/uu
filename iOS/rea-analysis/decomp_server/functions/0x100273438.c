// rea decompile_all
// name: FUN_100273438
// address: 0x100273438
// body: available
// range: 0x100273438-0x100273613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100273438(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ID IVar4;
  ID *pIVar5;
  ulong uVar6;
  ID unaff_x20;
  long unaff_x21;
  ID local_90 [2];
  ID local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  ID local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar2 = (long)local_90 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_2 == 0) {
    pIVar5 = *(ID **)(unaff_x20 + 0x18);
    uVar6 = *(ulong *)(unaff_x20 + 0x20);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar2);
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(pIVar5,uVar6,lVar2);
  }
  else {
    FUN_100273260(&local_60,1);
    if (unaff_x21 != 0) {
      return;
    }
    uVar3 = 0;
    FUN_10004003c(0,&DAT_100a81870,&PTR__OBJC_CLASS___NSDictionary_100a65898);
    puVar1 = PTR___sypN_100995e88;
    pIVar5 = &local_80;
    _swift_dynamicCast(pIVar5,&local_60,PTR___sypN_100995e88 + 8,uVar3,6);
    IVar4 = local_80;
    if (((ulong)pIVar5 & 1) == 0) goto LAB_1002735bc;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    IVar4 = _objc_msgSend(IVar4,"valueForKeyPath:",param_1);
    if (IVar4 == 0) {
      uStack_78 = 0;
      local_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_80,IVar4);
      _swift_unknownObjectRelease(IVar4);
    }
    uStack_58 = uStack_78;
    local_60 = local_80;
    local_48 = lStack_68;
    uStack_50 = uStack_70;
    if (lStack_68 == 0) {
      pIVar5 = &local_60;
      FUN_100040bb4(pIVar5,&DAT_100a81320,&DAT_1008153f0);
      goto LAB_1002735bc;
    }
    pIVar5 = local_90;
    _swift_dynamicCast(pIVar5,&local_60,puVar1 + 8,PTR___sSSN_1009957f8,6);
    uVar6 = (ulong)pIVar5 & 1;
  }
  if (uVar6 != 0) {
    return;
  }
LAB_1002735bc:
  FUN_100262084();
  _swift_allocError(&DAT_1009a8e98,pIVar5,0,0);
  *pIVar5 = unaff_x20;
  pIVar5[1] = 0;
  *(undefined1 *)(pIVar5 + 2) = 2;
  _swift_willThrow();
  _swift_retain();
  return;
}

