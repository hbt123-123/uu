// rea decompile_all
// name: FUN_1001bc888
// address: 0x1001bc888
// body: available
// range: 0x1001bc888-0x1001bc9eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001bc888(uint param_1)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar5 = _TtC14UURemoteServer16ClipboardHandler::ref;
  puVar8 = auStack_78;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::ref,puVar8,0,0);
  lVar5 = unaff_x20 + lVar5;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 != 0) {
    FUN_1000c7b64();
    uVar9 = *(ulong *)(lVar5 + 0x68);
    bVar2 = *(byte *)(lVar5 + 0x70);
    bVar3 = *(byte *)(lVar5 + 0x71);
    _swift_release();
    if ((bVar3 & 1) == 0) {
      if ((bVar2 & 1) == 0) {
        if (uVar9 != 2) {
          return;
        }
      }
      else if (uVar9 < 2) {
        return;
      }
      lVar6 = lVar5;
      if ((param_1 & 1) == 0) {
        __s10Foundation4UUIDVACycfC(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        __s10Foundation4UUIDV10uuidStringSSvg();
        (**(code **)(lVar10 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
        plVar1 = (long *)(unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::dragDropSessionID);
        lVar6 = plVar1[1];
        *plVar1 = lVar5;
        plVar1[1] = (long)puVar8;
        _swift_bridgeObjectRelease();
      }
      FUN_1001bc1d8();
      uVar7 = 0;
      FUN_100153bbc(0);
      lVar5 = lVar6;
      _swift_dynamicCastClass(lVar6,uVar7);
      if (lVar5 != 0) {
        FUN_100162874(param_1 & 1);
      }
      _swift_unknownObjectRelease(lVar6);
    }
  }
  return;
}

