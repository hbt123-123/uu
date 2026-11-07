// rea decompile_all
// name: FUN_1007b82dc
// address: 0x1007b82dc
// body: available
// range: 0x1007b82dc-0x1007b8497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1007b82dc(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  class_t *self;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x20;
  undefined *puVar12;
  
  puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar10 = *(long *)(unaff_x20 + _TtC6Sentry14SentryFeedback::attachments);
  if ((lVar10 != 0) && (*(long *)(lVar10 + 0x10) != 0)) {
    uVar1 = *(undefined8 *)(lVar10 + 0x20);
    uVar3 = *(undefined8 *)(lVar10 + 0x28);
    self = &objc::class_t::SentryAttachment;
    _objc_allocWithZone();
    FUN_100008184(uVar1,uVar3);
    uVar4 = uVar1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar3);
    uVar5 = 0x68736e6565726373;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x68736e6565726373,0xee00676e702e746f);
    uVar6 = 0x746163696c707061;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x746163696c707061,0xef676e702f6e6f69);
    IVar7 = _objc_msgSend((ID)self,"initWithData:filename:contentType:",uVar4,uVar5,uVar6);
    if (((ulong)puVar9 & 0xc000000000000000) == 0) {
      puVar12 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _swift_bridgeObjectRetain(puVar9);
      puVar12 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
      if (((ulong)puVar9 & 0x8000000000000000) != 0) {
        puVar12 = puVar9;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg(puVar12);
      _swift_bridgeObjectRelease(puVar9);
    }
    puVar8 = (undefined *)0x0;
    FUN_1007d1af8(0,puVar12 + 1,1,PTR___swiftEmptyArrayStorage_100995ea0);
    uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar11 + 0x10);
    puVar9 = puVar8;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar2) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
      FUN_1007d1af8(puVar9,uVar2 + 1,1,puVar8);
      uVar11 = (ulong)puVar9 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar11 + 0x10) = uVar2 + 1;
    *(ID *)(uVar11 + uVar2 * 8 + 0x20) = IVar7;
    FUN_100006cdc(uVar1,uVar3);
  }
  return puVar9;
}

