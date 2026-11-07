// rea decompile_all
// name: FUN_1005d1830
// address: 0x1005d1830
// body: available
// range: 0x1005d1830-0x1005d1bf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1005d1830(ID param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar3 = 0;
  FUN_1005d562c();
  _swift_allocObject();
  _swift_unknownObjectWeakInit(lVar3 + 0x10,0);
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x18) = lVar3;
  puVar4 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar5 = _objc_msgSend((ID)puVar4,"init");
  *(ID *)(unaff_x20 + 0x20) = IVar5;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + 0x28,0);
  *(ID *)(unaff_x20 + 0x10) = param_1;
  IVar5 = NSXPCInterface::interfaceWithProtocol_
                    ((ID)&_OBJC_CLASS___NSXPCInterface,"interfaceWithProtocol:",
                     &objc::protocol_t::_TtP5UUXPC11XPCProtocol_);
  _objc_msgSend(param_1,"setRemoteObjectInterface:",IVar5);
  _objc_msgSend(*(ID *)(unaff_x20 + 0x10),"setExportedObject:",*(undefined8 *)(unaff_x20 + 0x18));
  IVar5 = *(ID *)(unaff_x20 + 0x10);
  IVar6 = NSXPCInterface::interfaceWithProtocol_
                    ((ID)&_OBJC_CLASS___NSXPCInterface,"interfaceWithProtocol:",
                     &objc::protocol_t::_TtP5UUXPC11XPCProtocol_);
  _objc_msgSend(IVar5,"setExportedInterface:",IVar6);
  IVar5 = *(ID *)(unaff_x20 + 0x10);
  puVar4 = &DAT_1009d8c38;
  puVar7 = puVar4;
  _swift_allocObject(&DAT_1009d8c38,0x18,7);
  _swift_weakInit(puVar7 + 0x10);
  puVar9 = PTR___NSConcreteStackBlock_100995490;
  local_70 = FUN_1005d2720;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = thunk_FUN_1000acdb4;
  puStack_78 = &DAT_1009d8c50;
  local_68 = puVar7;
  pvVar8 = __Block_copy(&local_90);
  puVar7 = local_68;
  _swift_retain();
  _swift_release(puVar7);
  _objc_msgSend(IVar5,"setInterruptionHandler:",pvVar8);
  __Block_release(pvVar8);
  IVar5 = *(ID *)(unaff_x20 + 0x10);
  puVar7 = puVar4;
  _swift_allocObject(&DAT_1009d8c38,0x18,7);
  _swift_weakInit(puVar7 + 0x10);
  local_70 = FUN_1005d2728;
  local_90 = puVar9;
  local_88 = 0x42000000;
  local_80 = thunk_FUN_1000acdb4;
  puStack_78 = &DAT_1009d8c78;
  local_68 = puVar7;
  pvVar8 = __Block_copy(&local_90);
  _swift_release(local_68);
  _objc_msgSend(IVar5,"setInvalidationHandler:",pvVar8);
  __Block_release(pvVar8);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar3 + 0x10,&local_90,1,0);
  _swift_unknownObjectWeakAssign(lVar3 + 0x10,param_1);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  puVar9 = puVar4;
  _swift_allocObject(&DAT_1009d8c38,0x18,7);
  _swift_weakInit(puVar9 + 0x10);
  _swift_beginAccess(lVar3 + 0x18,auStack_a8,1,0);
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  *(code **)(lVar3 + 0x18) = FUN_1005d2730;
  *(undefined **)(lVar3 + 0x20) = puVar9;
  _swift_retain(lVar3);
  _swift_retain(puVar9);
  FUN_10007ed2c(uVar1,uVar2);
  _swift_release(lVar3);
  _swift_release(puVar9);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  _swift_allocObject(&DAT_1009d8c38,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  _swift_retain(lVar3);
  _swift_release();
  _swift_beginAccess(lVar3 + 0x28,auStack_c0,1,0);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  uVar2 = *(undefined8 *)(lVar3 + 0x30);
  *(code **)(lVar3 + 0x28) = FUN_1005d2750;
  *(undefined **)(lVar3 + 0x30) = puVar4;
  _swift_retain(puVar4);
  FUN_10007ed2c(uVar1,uVar2);
  _swift_release(lVar3);
  _swift_release(puVar4);
  return;
}

