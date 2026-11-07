// rea decompile_all
// name: FUN_1000c7c50
// address: 0x1000c7c50
// body: available
// range: 0x1000c7c50-0x1000c7f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

long FUN_1000c7c50(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  undefined8 uVar5;
  ID IVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  puVar10 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___fileTransferHandler;
  lVar2 = *(long *)(unaff_x20 +
                   _TtC14UURemoteServer22StreamerConnectSession::
                   ___lazy_storage___fileTransferHandler);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1000c8710();
    lVar3 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(auStack_80 + -extraout_x8,1,1,lVar3);
    IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    uVar5 = 0;
    FUN_1000d8b20();
    _swift_allocObject();
    FUN_1000d81d8(IVar4,auStack_80 + -extraout_x8,0,uVar5);
    IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    lVar7 = 0;
    FUN_10017fcc4();
    _swift_allocObject();
    *(undefined8 *)(lVar7 + 0x20) = 0x8000000100885050;
    *(undefined8 *)(lVar7 + 0x28) = 0x2f3a;
    *(undefined8 *)(lVar7 + 0x30) = 0xe200000000000000;
    *(ID *)(lVar7 + 0x10) = IVar6;
    *(undefined8 *)(lVar7 + 0x18) = 0x1000000000000012;
    uVar5 = 0;
    FUN_100185e80();
    _swift_allocObject();
    FUN_100185c24();
    lVar3 = 0;
    FUN_10020cde8();
    _swift_allocObject();
    _swift_unknownObjectWeakInit(lVar3 + 0x10,0);
    _swift_beginAccess(lVar3 + 0x10,auStack_78,1,0);
    _swift_unknownObjectWeakAssign(lVar3 + 0x10);
    *(long *)(lVar3 + 0x18) = lVar2;
    *(ID *)(lVar3 + 0x20) = IVar4;
    *(long *)(lVar3 + 0x28) = lVar7;
    *(undefined8 *)(lVar3 + 0x30) = uVar5;
    uVar8 = 0;
    FUN_10020d4c0();
    _swift_allocObject();
    *(undefined8 *)(lVar3 + 0x38) = uVar8;
    lVar2 = 0;
    FUN_10020da34();
    _swift_allocObject();
    _swift_unknownObjectWeakInit(lVar2 + 0x10,0);
    _swift_unknownObjectWeakAssign(lVar2 + 0x10);
    *(long *)(lVar3 + 0x40) = lVar2;
    _swift_retain(uVar5);
    _swift_retain(uVar8);
    _swift_retain(lVar2);
    IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    uVar9 = 0;
    FUN_1000e4544(0);
    _swift_allocObject();
    FUN_1000e42a8(IVar4,uVar9);
    lVar7 = 0;
    FUN_10020fd84();
    _swift_allocObject();
    _swift_unknownObjectWeakInit(lVar7 + 0x10,0);
    puVar10 = &_OBJC_CLASS___NSLock;
    _objc_allocWithZone();
    IVar6 = _objc_msgSend((ID)puVar10,"init");
    *(ID *)(lVar7 + 0x38) = IVar6;
    puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_1000cc120();
    *(undefined **)(lVar7 + 0x40) = puVar11;
    FUN_1000cc2cc();
    *(undefined **)(lVar7 + 0x48) = puVar10;
    _swift_unknownObjectWeakAssign(lVar7 + 0x10);
    *(ID *)(lVar7 + 0x18) = IVar4;
    *(undefined8 *)(lVar7 + 0x20) = uVar5;
    *(undefined8 *)(lVar7 + 0x28) = uVar8;
    *(long *)(lVar7 + 0x30) = lVar2;
    *(long *)(lVar3 + 0x48) = lVar7;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    _swift_retain(lVar3);
    _swift_release(uVar5);
    lVar2 = 0;
  }
  _swift_retain(lVar2);
  return lVar3;
}

