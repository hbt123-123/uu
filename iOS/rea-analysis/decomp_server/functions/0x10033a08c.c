// rea decompile_all
// name: FUN_10033a08c
// address: 0x10033a08c
// body: available
// range: 0x10033a08c-0x10033a3cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010033a2a4) */
/* WARNING: Removing unreachable block (ram,0x00010033a2c8) */
/* WARNING: Removing unreachable block (ram,0x00010033a3c8) */
/* WARNING: Removing unreachable block (ram,0x00010033a2d4) */
/* WARNING: Removing unreachable block (ram,0x00010033a220) */
/* WARNING: Removing unreachable block (ram,0x00010033a230) */
/* WARNING: Removing unreachable block (ram,0x00010033a23c) */
/* WARNING: Removing unreachable block (ram,0x00010033a21c) */
/* WARNING: Removing unreachable block (ram,0x00010033a240) */
/* WARNING: Removing unreachable block (ram,0x00010033a3c4) */
/* WARNING: Removing unreachable block (ram,0x00010033a24c) */
/* WARNING: Removing unreachable block (ram,0x00010033a250) */
/* WARNING: Removing unreachable block (ram,0x00010033a254) */
/* WARNING: Removing unreachable block (ram,0x00010033a2b8) */
/* WARNING: Removing unreachable block (ram,0x00010033a2c4) */
/* WARNING: Removing unreachable block (ram,0x00010033a2d8) */
/* WARNING: Removing unreachable block (ram,0x00010033a2dc) */
/* WARNING: Removing unreachable block (ram,0x00010033a2a8) */

undefined1  [16] FUN_10033a08c(long param_1)

{
  void *pvVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
  ID *pIVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ID self;
  undefined1 auVar11 [16];
  long *local_70;
  long *plStack_68;
  
  self = *(ID *)(param_1 + 0x18);
  _objc_msgSend(self,"open");
  plStack_68 = (long *)0xc000000000000000;
  local_70 = (long *)0x0;
  IVar2 = _objc_msgSend(self,"hasBytesAvailable");
  plVar7 = (long *)PTR___ss5UInt8VN_100995d40;
  if ((int)IVar2 != 0) {
    do {
      lVar3 = 0x400;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(0x400,plVar7);
      *(undefined8 *)(lVar3 + 0x10) = 0x400;
      pvVar1 = (void *)(lVar3 + 0x20);
      _bzero(pvVar1,0x400);
      IVar2 = _objc_msgSend(self,"read:maxLength:",pvVar1,0x400);
      IVar4 = _objc_msgSend(self,"streamError");
      if (IVar4 != 0) {
        _swift_bridgeObjectRelease(lVar3);
        local_70 = (long *)0x0;
        FUN_100277ad0(0);
        pIVar5 = &DAT_100a824a8;
        FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
        _swift_allocError(local_70,pIVar5,0,0);
        *pIVar5 = IVar4;
        uVar10 = 0;
        FUN_100278198(0);
        _swift_storeEnumTagMultiPayload(pIVar5,uVar10,0xc);
        _swift_storeEnumTagMultiPayload(pIVar5,local_70,4);
        goto LAB_10033a37c;
      }
      if ((long)IVar2 < 1) {
        _swift_bridgeObjectRelease(lVar3);
        break;
      }
      __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(pvVar1,(long)pvVar1 + IVar2);
      _swift_bridgeObjectRelease(lVar3);
      IVar2 = _objc_msgSend(self,"hasBytesAvailable");
    } while ((IVar2 & 1) != 0);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    FUN_100008184(0,0xc000000000000000);
    FUN_100006cdc(0,0xc000000000000000);
    _objc_msgSend(self,"close");
    plVar7 = plStack_68;
  }
  else {
    local_70 = (long *)0x0;
    FUN_100277ad0();
    puVar6 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    plVar7 = local_70;
    _swift_allocError(local_70,puVar6,0,0);
    plVar8 = plVar7;
    FUN_10033b23c();
    puVar9 = &DAT_1009aa3a0;
    _swift_allocError(&DAT_1009aa3a0,plVar8,0,0);
    *plVar8 = lVar3;
    plVar8[1] = 0;
    *puVar6 = puVar9;
    uVar10 = 0;
    FUN_100278198(0);
    _swift_storeEnumTagMultiPayload(puVar6,uVar10,0xc);
    _swift_storeEnumTagMultiPayload(puVar6,local_70,4);
LAB_10033a37c:
    _swift_willThrow();
    FUN_100006cdc(0,0xc000000000000000);
    _objc_msgSend(self,"close");
  }
  auVar11._8_8_ = plVar7;
  auVar11._0_8_ = local_70;
  return auVar11;
}

