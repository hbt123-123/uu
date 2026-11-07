// rea decompile_all
// name: FUN_1003e7bd0
// address: 0x1003e7bd0
// body: available
// range: 0x1003e7bd0-0x1003e7e5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_1003e7bd0(ID param_1,ulong param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ID self;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_78 [24];
  
  self = *(ID *)(unaff_x20 + 0x18);
  _objc_msgSend(self,"lock");
  puVar1 = &DAT_100a75450;
  FUN_100004bb4(&DAT_100a75450,&DAT_1008095e8);
  puVar5 = &DAT_100a89458;
  _swift_initStaticObject();
  FUN_1000960d4();
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0x20,0);
  lVar8 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar8 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar8);
    IVar2 = param_1;
    uVar6 = param_2;
    FUN_1001a2c70();
    if ((uVar6 & 1) != 0) {
      IVar2 = *(ID *)(*(long *)(lVar8 + 0x38) + IVar2 * 8);
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(lVar8);
      goto LAB_1003e7d20;
    }
    _swift_bridgeObjectRelease(lVar8);
  }
  _swift_endAccess(auStack_78);
  FUN_100008184(puVar1,puVar5);
  IVar2 = param_1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  puVar3 = puVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar1,puVar5);
  FUN_100006cdc(puVar1,puVar5);
  IVar2 = MMKV::mmkvWithID_cryptKey_mode_
                    ((ID)&objc::class_t::MMKV,"mmkvWithID:cryptKey:mode:",IVar2,(ID)puVar3,2);
LAB_1003e7d20:
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0x21,0);
  _swift_bridgeObjectRetain(param_2);
  if (IVar2 == 0) {
    FUN_1003e7f9c(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native(uVar4);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined8 *)(unaff_x20 + 0x10) = 0x8000000000000000;
    FUN_1003a6658(IVar2,param_1,param_2,uVar4);
    _swift_bridgeObjectRelease(param_2);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar7;
  }
  _swift_endAccess(auStack_78);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0x20,0);
  lVar8 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar8 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar8);
    FUN_1001a2c70();
    if ((param_2 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + param_1 * 8);
    }
    _swift_bridgeObjectRelease(lVar8);
  }
  _swift_endAccess(auStack_78);
  FUN_100006cdc(puVar1,puVar5);
  _objc_msgSend(self,"unlock");
  return uVar4;
}

