// rea decompile_all
// name: FUN_1003fed60
// address: 0x1003fed60
// body: available
// range: 0x1003fed60-0x1003fef9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003fed60(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ID IVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_70 [32];
  
  puVar5 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_70 + -extraout_x8;
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar2 = DAT_100a8e098;
  puVar9 = puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    FUN_1005cce64(0);
    _swift_release(lVar2);
  }
  if (DAT_100a89360 != -1) {
    _swift_once(&DAT_100a89360,FUN_1003fba90);
  }
  FUN_10021bec0(puVar5,&DAT_100a8e0a0);
  _swift_beginAccess();
  FUN_10007f314(puVar5,puVar10,&DAT_100a766c8,&DAT_10080b1d0);
  puVar7 = puVar10;
  (**(code **)(lVar11 + 0x30))(puVar10,1,lVar6);
  if ((int)puVar7 == 1) {
    FUN_100040bb4(puVar10,&DAT_100a766c8,&DAT_10080b1d0);
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    (**(code **)(lVar11 + 0x20))(puVar9,puVar10,lVar6);
    uVar4 = DAT_100a8e0c0;
    uVar3 = DAT_100a8e0b8;
    uVar1 = DAT_100a8e0b8 & 0xffffffffffff;
    if ((DAT_100a8e0c0 & 0x2000000000000000) != 0) {
      uVar1 = DAT_100a8e0c0 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      (**(code **)(lVar11 + 8))(puVar9,lVar6);
      puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      _swift_bridgeObjectRetain(DAT_100a8e0c0);
      IVar8 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
      puVar5 = puVar9;
      FUN_100401b34(puVar9,uVar3,uVar4,IVar8);
      _swift_bridgeObjectRelease(uVar4);
      (**(code **)(lVar11 + 8))(puVar9,lVar6);
    }
  }
  *param_1 = puVar5;
  return;
}

