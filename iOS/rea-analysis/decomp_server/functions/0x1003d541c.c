// rea decompile_all
// name: FUN_1003d541c
// address: 0x1003d541c
// body: available
// range: 0x1003d541c-0x1003d5677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003d541c(void)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ID unaff_x20;
  uint local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = 0x6e6565726353534e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e6565726353534e,0xee007265626d754e);
  IVar3 = _objc_msgSend(unaff_x20,"deviceDescription");
  uVar4 = 0;
  FUN_100006014();
  uVar5 = uVar4;
  FUN_1003d5678();
  puVar1 = PTR___sypN_100995e88;
  uVar9 = uVar4;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (IVar3,uVar4,PTR___sypN_100995e88 + 8,uVar5);
  if (*(long *)(IVar3 + 0x10) == 0) {
LAB_1003d5534:
    uStack_68 = 0;
    local_70 = 0;
    local_58 = 0;
    uStack_60 = 0;
    _swift_bridgeObjectRelease(IVar3);
LAB_1003d5544:
    FUN_1000c776c(&local_70);
  }
  else {
    _swift_bridgeObjectRetain(IVar3);
    lVar6 = lVar2;
    thunk_FUN_1001a2e90(lVar2);
    if ((uVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(IVar3);
      goto LAB_1003d5534;
    }
    FUN_10003e8bc(*(long *)(IVar3 + 0x38) + lVar6 * 0x20,&local_70);
    _swift_bridgeObjectRelease_n(IVar3,2);
    if (local_58 == 0) goto LAB_1003d5544;
    puVar7 = &local_78;
    _swift_dynamicCast(puVar7,&local_70,puVar1 + 8,PTR___ss6UInt32VN_100995dc0,6);
    if ((int)puVar7 != 0) {
      return (ulong)local_78;
    }
  }
  IVar3 = _objc_msgSend(unaff_x20,"deviceDescription");
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (IVar3,uVar4,puVar1 + 8,uVar5);
  if (*(long *)(IVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(IVar3);
    thunk_FUN_1001a2e90(lVar2);
    if ((uVar4 & 1) != 0) {
      FUN_10003e8bc(*(long *)(IVar3 + 0x38) + lVar2 * 0x20,&local_70);
      _swift_bridgeObjectRelease(IVar3);
      goto LAB_1003d55c8;
    }
    _swift_bridgeObjectRelease(IVar3);
  }
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  uStack_60 = 0;
LAB_1003d55c8:
  _swift_bridgeObjectRelease(IVar3);
  if (local_58 == 0) {
    FUN_1000c776c(&local_70);
  }
  else {
    uVar8 = 0;
    FUN_10004003c(0,&DAT_100a77030,&PTR__OBJC_CLASS___NSNumber_100a65780);
    puVar7 = &local_78;
    _swift_dynamicCast(puVar7,&local_70,puVar1 + 8,uVar8,6);
    if (((ulong)puVar7 & 1) != 0) {
      IVar3 = _objc_msgSend(CONCAT44(uStack_74,local_78),"unsignedIntValue");
      return IVar3;
    }
  }
  return 0;
}

