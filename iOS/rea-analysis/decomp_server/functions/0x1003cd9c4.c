// rea decompile_all
// name: FUN_1003cd9c4
// address: 0x1003cd9c4
// body: available
// range: 0x1003cd9c4-0x1003ce06f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

uint FUN_1003cd9c4(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  class_t *pcVar7;
  ID IVar8;
  undefined8 uVar9;
  ID IVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  void *aBlock;
  ulong uVar14;
  long extraout_x12;
  long unaff_x20;
  undefined *puVar15;
  ulong uVar16;
  undefined1 auStack_200 [8];
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  long local_1e0;
  long local_1d8;
  undefined1 *local_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  code *local_1b8;
  undefined *puStack_1b0;
  code *local_1a8;
  undefined *local_1a0;
  
  lVar6 = 0;
  local_1f8 = param_2;
  FUN_1003c5f68();
  local_1e0 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_1d0 = auStack_200 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  pcVar7 = &objc::class_t::SentryEvent;
  local_1d8 = extraout_x12;
  _objc_allocWithZone();
  IVar8 = _objc_msgSend((ID)pcVar7,"initWithLevel:",2);
  pcVar7 = &objc::class_t::SentryMessage;
  _objc_allocWithZone();
  uVar9 = 0x1000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x1000000000000017,0x80000001008b41a0);
  IVar10 = _objc_msgSend((ID)pcVar7,"initWithFormatted:",uVar9);
  _objc_msgSend(IVar8,"setMessage:",IVar10);
  puVar13 = &DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  _swift_allocObject();
  *(undefined8 *)(puVar13 + 0x18) = 4;
  *(undefined8 *)(puVar13 + 0x10) = 2;
  *(undefined8 *)(puVar13 + 0x20) = 0xd000000000000011;
  *(undefined8 *)(puVar13 + 0x28) = 0x80000001008b41c0;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar13 + 0x30) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(puVar13 + 0x38) = uVar9;
  _swift_bridgeObjectRetain();
  puVar15 = PTR___sSSN_1009957f8;
  puVar11 = puVar13;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar13,PTR___sSSN_1009957f8);
  _swift_bridgeObjectRelease(puVar13);
  _objc_msgSend(IVar8,"setFingerprint:",puVar11);
  puVar13 = &DAT_100a75ac0;
  FUN_100004bb4(&DAT_100a75ac0,&DAT_100809b50);
  _swift_initStackObject();
  uStack_1e8 = 6;
  local_1f0 = 3;
  *(undefined8 *)(puVar13 + 0x18) = 6;
  *(undefined8 *)(puVar13 + 0x10) = 3;
  *(undefined8 *)(puVar13 + 0x20) = 0x74736f6e67616964;
  *(undefined8 *)(puVar13 + 0x28) = 0xef657079745f6369;
  *(undefined8 *)(puVar13 + 0x30) = 0x695f6d6574737973;
  *(undefined8 *)(puVar13 + 0x38) = 0xea00000000007370;
  *(undefined8 *)(puVar13 + 0x40) = 0x69636e695f737069;
  *(undefined8 *)(puVar13 + 0x48) = 0xef64695f746e6564;
  uVar9 = param_1[1];
  *(undefined8 *)(puVar13 + 0x50) = *param_1;
  *(undefined8 *)(puVar13 + 0x58) = uVar9;
  *(undefined8 *)(puVar13 + 0x60) = 0x6f7373615f737069;
  *(undefined8 *)(puVar13 + 0x68) = 0xef6e6f6974616963;
  pcVar2 = "system-ips-report";
  puVar4 = &DAT_d000000000000018;
  if (param_3 != 0) {
    pcVar2 = "original_event_id";
    puVar4 = (undefined1 *)0xd000000000000015;
  }
  *(undefined1 **)(puVar13 + 0x70) = puVar4;
  *(ulong *)(puVar13 + 0x78) = (ulong)pcVar2 | 0x8000000000000000;
  _swift_bridgeObjectRetain();
  puVar12 = puVar13;
  FUN_1000cbc40(puVar13);
  _swift_setDeallocating(puVar13);
  puVar11 = &DAT_100a75ac8;
  FUN_100004bb4(&DAT_100a75ac8,&DAT_100813090);
  _swift_arrayDestroy(puVar13 + 0x20,3,puVar11);
  puVar5 = PTR___sSSSHsWP_100995808;
  puVar13 = puVar12;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar12,puVar15,puVar15,PTR___sSSSHsWP_100995808);
  _swift_bridgeObjectRelease(puVar12);
  _objc_msgSend(IVar8,"setTags:",puVar13);
  puVar13 = &DAT_100a7b970;
  FUN_100004bb4(&DAT_100a7b970,&DAT_100812a90);
  _swift_initStackObject();
  *(undefined8 *)(puVar13 + 0x18) = uStack_1e8;
  *(undefined8 *)(puVar13 + 0x10) = local_1f0;
  *(undefined1 **)(puVar13 + 0x20) = &DAT_d000000000000013;
  *(undefined8 *)(puVar13 + 0x28) = 0x80000001008b4200;
  uVar9 = local_1f0;
  __s10Foundation4DateV21timeIntervalSince1970Sdvg((long)*(int *)(lVar6 + 0x14));
  puVar11 = PTR___sSdN_1009958f0;
  *(undefined8 *)(puVar13 + 0x30) = uVar9;
  *(undefined **)(puVar13 + 0x48) = puVar11;
  *(undefined8 *)(puVar13 + 0x50) = 0x737265765f737069;
  *(undefined8 *)(puVar13 + 0x58) = 0xeb000000006e6f69;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x18));
  uVar9 = puVar1[1];
  *(undefined8 *)(puVar13 + 0x60) = *puVar1;
  *(undefined8 *)(puVar13 + 0x68) = uVar9;
  *(undefined **)(puVar13 + 0x78) = puVar15;
  *(undefined8 *)(puVar13 + 0x80) = 0x6c6975625f737069;
  *(undefined8 *)(puVar13 + 0x88) = 0xe900000000000064;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x1c));
  uVar9 = *puVar1;
  uVar3 = puVar1[1];
  *(undefined **)(puVar13 + 0xa8) = puVar15;
  *(undefined8 *)(puVar13 + 0x90) = uVar9;
  *(undefined8 *)(puVar13 + 0x98) = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  puVar12 = puVar13;
  FUN_1000cc648(puVar13);
  _swift_setDeallocating(puVar13);
  puVar11 = &DAT_100a775a0;
  FUN_100004bb4(&DAT_100a775a0,&DAT_10080c1c0);
  _swift_arrayDestroy(puVar13 + 0x20,3,puVar11);
  puVar13 = puVar12;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar12,puVar15,PTR___sypN_100995e88 + 8,puVar5);
  _swift_bridgeObjectRelease(puVar12);
  _objc_msgSend(IVar8,"setExtra:",puVar13);
  if (param_3 != 0) {
    _swift_bridgeObjectRetain(param_3);
    puVar13 = (undefined *)_objc_msgSend(IVar8,"tags");
    if (puVar13 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(param_3);
      _objc_msgSend(IVar8,"setTags:",0);
    }
    else {
      __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                (puVar13,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
      puVar15 = puVar13;
      _swift_isUniquelyReferenced_nonNull_native();
      param_5 = SUB84(puVar15,0);
      local_1c8 = puVar13;
      FUN_100061340(local_1f8,param_3,0xd000000000000011,0x80000001008b4220);
      puVar13 = local_1c8;
      if (local_1c8 == (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        puVar15 = local_1c8;
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                  (local_1c8,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
        _swift_bridgeObjectRelease(puVar13);
      }
      _objc_msgSend(IVar8,"setTags:",puVar15);
    }
  }
  puVar4 = local_1d0;
  FUN_100082394(param_1,local_1d0,FUN_1003c5f68);
  uVar14 = (ulong)*(byte *)(local_1e0 + 0x50);
  uVar16 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
  puVar13 = &DAT_1009b95c0;
  _swift_allocObject(&DAT_1009b95c0,uVar16 + local_1d8,uVar14 | 7);
  FUN_1000823d8(puVar4,puVar13 + uVar16,FUN_1003c5f68);
  local_1a8 = FUN_1003d10e0;
  local_1c8 = PTR___NSConcreteStackBlock_100995490;
  local_1c0 = 0x42000000;
  local_1b8 = thunk_FUN_1000a8c3c;
  puStack_1b0 = &DAT_1009b95d8;
  local_1a0 = puVar13;
  aBlock = __Block_copy(&local_1c8);
  _swift_release(local_1a0);
  IVar8 = SentrySDK::captureEvent_withScopeBlock_
                    ((ID)&objc::class_t::SentrySDK,"captureEvent:withScopeBlock:",IVar8,(ID)aBlock,
                     param_5);
  __Block_release(aBlock);
  uVar9 = 0;
  FUN_1007d6b40(0);
  FUN_1007d5f08();
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(IVar8,uVar9);
  return ((uint)IVar8 ^ 0xffffffff) & 1;
}

