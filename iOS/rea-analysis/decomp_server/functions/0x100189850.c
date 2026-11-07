// rea decompile_all
// name: FUN_100189850
// address: 0x100189850
// body: available
// range: 0x100189850-0x100189b97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100189850(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ID self;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char *pcVar7;
  long extraout_x8;
  ID IVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long local_b0;
  undefined8 local_a8;
  code *local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  local_88 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_88 + 0x40));
  lVar9 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    lVar10 = *(long *)(param_2 + 0x10);
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (lVar10 != 0) {
      local_80 = PTR___swiftEmptyArrayStorage_100995ea0;
      local_b0 = param_1;
      local_a8 = param_4;
      local_a0 = param_3;
      FUN_100070118(0,lVar10,0);
      local_90 = *(undefined8 *)PTR__NSPasteboardTypeFileURL_100995438;
      param_2 = param_2 + ((ulong)*(byte *)(local_88 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(local_88 + 0x50) ^ 0xffffffffffffffff));
      local_98 = *(long *)(local_88 + 0x48);
      pcVar11 = *(code **)(local_88 + 0x10);
      do {
        puVar4 = local_80;
        (*pcVar11)(lVar9,param_2,lVar2);
        puVar3 = &_OBJC_CLASS___NSPasteboardItem;
        _objc_allocWithZone();
        pcVar7 = "init";
        self = _objc_msgSend((ID)puVar3,"init");
        IVar8 = self;
        __s10Foundation3URLV14absoluteStringSSvg();
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(pcVar7);
        _objc_msgSend(self,"setString:forType:",IVar8,local_90);
        (**(code **)(local_88 + 8))(lVar9,lVar2);
        uVar1 = *(ulong *)(puVar4 + 0x10);
        local_80 = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
          FUN_100070118(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(local_80 + 0x10) = uVar1 + 1;
        *(ID *)(local_80 + uVar1 * 8 + 0x20) = self;
        param_2 = param_2 + local_98;
        lVar10 = lVar10 + -1;
        param_3 = local_a0;
        puVar4 = local_80;
        param_1 = local_b0;
      } while (lVar10 != 0);
    }
    _objc_msgSend(*(ID *)(param_1 + 0x20),"clearContents");
    IVar8 = *(ID *)(param_1 + 0x20);
    if ((ulong)puVar4 >> 0x3e == 0) {
      _swift_bridgeObjectRetain(puVar4);
      __ss28__ContiguousArrayStorageBaseC17staticElementTypeypXpvgTj();
      puVar3 = puVar4;
    }
    else {
      puVar3 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
      if ((long)puVar4 < 0) {
        puVar3 = puVar4;
      }
      _swift_bridgeObjectRetain(puVar4);
      puVar6 = &DAT_100a7bee8;
      FUN_100004bb4(&DAT_100a7bee8,&DAT_100810160);
      __ss17_bridgeCocoaArrayySayxGyXllF(puVar3,puVar6);
      _swift_bridgeObjectRelease(puVar4);
    }
    _swift_bridgeObjectRelease(puVar4);
    puVar4 = &DAT_100a7bee8;
    FUN_100004bb4(&DAT_100a7bee8,&DAT_100810160);
    puVar6 = puVar3;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar3,puVar4);
    _swift_bridgeObjectRelease(puVar3);
    IVar8 = _objc_msgSend(IVar8,"writeObjects:",puVar6);
    _swift_release(param_1);
    if ((IVar8 & 1) != 0) {
      uVar5 = 1;
      goto joined_r0x000100189b20;
    }
  }
  FUN_100401b14(0);
  FUN_1003fb4ec(FUN_100189b98,0,0xd0000000000000a2,0x8000000100893bb0,0xd000000000000020,
                0x80000001008985c0,0x55,0);
  uVar5 = 0;
joined_r0x000100189b20:
  if (param_3 != (code *)0x0) {
    (*param_3)(uVar5);
  }
  return;
}

