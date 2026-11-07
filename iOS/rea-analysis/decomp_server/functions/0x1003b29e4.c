// rea decompile_all
// name: FUN_1003b29e4
// address: 0x1003b29e4
// body: available
// range: 0x1003b29e4-0x1003b2b4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003b29e4(long *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined *self;
  ID IVar4;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  _swift_beginAccess(&DAT_100a8bcf8,&local_70,0x20,0);
  lVar3 = param_2;
  _objc_getAssociatedObject(param_2,&DAT_100a8bcf8);
  _swift_endAccess(&local_70);
  if (lVar3 == 0) {
    uStack_68 = 0;
    local_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_70,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_48 = uStack_68;
  local_50 = local_70;
  local_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    FUN_1000c776c(&local_50);
  }
  else {
    uVar1 = 0;
    FUN_10039e7e0(0);
    plVar2 = &local_78;
    _swift_dynamicCast(plVar2,&local_50,PTR___sypN_100995e88 + 8,uVar1,6);
    if (((ulong)plVar2 & 1) != 0) goto LAB_1003b2b34;
  }
  lVar3 = 0;
  FUN_10039e7e0();
  _swift_allocObject();
  *(undefined **)(lVar3 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
  self = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar4 = _objc_msgSend((ID)self,"init");
  *(ID *)(lVar3 + 0x18) = IVar4;
  _swift_beginAccess(&DAT_100a8bcf8,&local_50,0x20,0);
  _swift_retain(lVar3);
  _objc_setAssociatedObject(param_2,&DAT_100a8bcf8,lVar3,1);
  _swift_endAccess(&local_50);
  _swift_release(lVar3);
  local_78 = lVar3;
LAB_1003b2b34:
  *param_1 = local_78;
  return;
}

