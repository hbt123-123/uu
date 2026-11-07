// rea decompile_all
// name: FUN_1003c0c0c
// address: 0x1003c0c0c
// body: available
// range: 0x1003c0c0c-0x1003c0f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003c0f28 to 0x1007dea34 _objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003c0c0c(ID param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  class_t *pcVar6;
  ID IVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ID IVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  
  lVar10 = *(long *)(param_2 + 0x28);
  IVar7 = param_1;
  if (lVar10 != 0) {
    uVar11 = *(undefined8 *)(param_2 + 0x20);
    pcVar6 = &objc::class_t::SentryUser;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(lVar10);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar11,lVar10);
    _swift_bridgeObjectRelease(lVar10);
    IVar7 = _objc_msgSend((ID)pcVar6,"initWithUserId:",uVar11);
    _objc_msgSend(param_1,"setUser:",IVar7);
    IVar7 = 0;
  }
  FUN_1003bee60();
  IVar12 = *(ID *)(param_2 + 0x70);
  _objc_msgSend(IVar12,"lock");
  uVar11 = *(undefined8 *)(param_2 + 0x68);
  *(ID *)(param_2 + 0x68) = IVar7;
  _swift_bridgeObjectRetain(IVar7);
  _swift_bridgeObjectRelease(uVar11);
  _objc_msgSend(IVar12,"unlock");
  uVar13 = *(ulong *)(IVar7 + 0x10);
  if (uVar13 != 0) {
    uVar14 = 0;
    puVar15 = (undefined8 *)(IVar7 + 0x28);
    do {
      if (*(ulong *)(IVar7 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003c0f30);
        (*pcVar4)();
      }
      uVar14 = uVar14 + 1;
      uVar11 = puVar15[-1];
      uVar8 = *puVar15;
      pcVar6 = &objc::class_t::SentryAttachment;
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(uVar8);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar11,uVar8);
      IVar12 = _objc_msgSend((ID)pcVar6,"initWithPath:",uVar11);
      _objc_msgSend(param_1,"addAttachment:",IVar12);
      _swift_bridgeObjectRelease(uVar8);
      puVar15 = puVar15 + 2;
    } while (uVar13 != uVar14);
  }
  _swift_bridgeObjectRelease(IVar7);
  lVar10 = *(long *)(param_2 + 0x50);
  if (lVar10 != 0) {
    lVar16 = lVar10;
    _swift_bridgeObjectRetain(lVar10);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar10);
    _objc_msgSend(param_1,"setExtras:",lVar16);
  }
  lVar10 = *(long *)(param_2 + 0x58);
  if (lVar10 != 0) {
    uVar14 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar13 = 0xffffffffffffffff;
    if ((long)uVar14 < 0x40) {
      uVar13 = ~(-1L << (uVar14 & 0x3f));
    }
    uVar13 = uVar13 & *(ulong *)(lVar10 + 0x40);
    _swift_bridgeObjectRetain(lVar10);
    lVar16 = 0;
    while( true ) {
      for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
        uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = lVar16 << 10 | LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) << 4;
        puVar15 = (undefined8 *)(*(long *)(lVar10 + 0x30) + uVar9);
        puVar1 = (undefined8 *)(*(long *)(lVar10 + 0x38) + uVar9);
        uVar11 = *puVar15;
        uVar2 = puVar15[1];
        uVar8 = *puVar1;
        uVar3 = puVar1[1];
        _swift_bridgeObjectRetain(uVar2);
        _swift_bridgeObjectRetain(uVar3);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,uVar3);
        _swift_bridgeObjectRelease(uVar3);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar11,uVar2);
        _swift_bridgeObjectRelease(uVar2);
        _objc_msgSend(param_1,"setTagValue:forKey:",uVar8,uVar11);
      }
      bVar5 = SCARRY8(lVar16,1);
      lVar16 = lVar16 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003c0f34);
        (*pcVar4)();
      }
      if ((long)(uVar14 + 0x3f >> 6) <= lVar16) break;
      uVar13 = ((ulong *)(lVar10 + 0x40))[lVar16];
    }
    _swift_release(lVar10);
  }
  return param_1;
}

