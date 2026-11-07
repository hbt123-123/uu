// rea decompile_all
// name: FUN_100236f20
// address: 0x100236f20
// body: available
// range: 0x100236f20-0x100237117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100236f20(ID param_1,SEL param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  puVar3 = &DAT_100a7e450;
  pcVar8 = (code *)&DAT_100813ef0;
  FUN_100004bb4();
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_70 + -extraout_x8;
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100a7de10 != -1) {
    pcVar8 = FUN_100234aa0;
    _swift_once(&DAT_100a7de10);
  }
  lVar2 = DAT_100b36338;
  lVar5 = DAT_100b36338;
  __s10Foundation4UUIDVACycfC(lVar7);
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar9 + 8))(lVar7,lVar4);
  plVar1 = (long *)(lVar2 + _TtC6FCount6FCount::_session_id);
  lVar4 = plVar1[1];
  *plVar1 = lVar5;
  plVar1[1] = (long)pcVar8;
  _swift_bridgeObjectRelease(lVar4);
  lVar7 = DAT_100b36338;
  lVar9 = 0;
  __s10Foundation4DateVMa();
  pcVar8 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  (*pcVar8)(puVar6,1,1,lVar9);
  lVar4 = _TtC6FCount6FCount::foregroundDate;
  _swift_beginAccess(lVar7 + _TtC6FCount6FCount::foregroundDate,auStack_68,0x21,0);
  FUN_1002381f8(puVar6,lVar7 + lVar4);
  _swift_endAccess(auStack_68);
  lVar7 = DAT_100b36338;
  (*pcVar8)(puVar6,1,1,lVar9);
  lVar4 = _TtC6FCount6FCount::backgroundDate;
  _swift_beginAccess(lVar7 + _TtC6FCount6FCount::backgroundDate,auStack_68,0x21,0);
  FUN_1002381f8(puVar6,lVar7 + lVar4);
  _swift_endAccess(auStack_68);
  return;
}

