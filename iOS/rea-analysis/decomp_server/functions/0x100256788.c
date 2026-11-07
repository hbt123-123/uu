// rea decompile_all
// name: FUN_100256788
// address: 0x100256788
// body: available
// range: 0x100256788-0x10025695b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100256788(void)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  puVar3 = &DAT_100a80410;
  pcVar8 = (code *)&DAT_1008149c8;
  FUN_100004bb4();
  puVar6 = auStack_70 + -(*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar9 = *(long *)(lVar4 + -8);
  lVar7 = (long)puVar6 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (DAT_100a7fea0 != -1) {
    pcVar8 = FUN_10025674c;
    _swift_once(&DAT_100a7fea0);
  }
  lVar2 = DAT_100b36400;
  lVar5 = DAT_100b36400;
  _swift_retain();
  __s10Foundation4UUIDVACycfC(lVar7);
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar9 + 8))(lVar7,lVar4);
  plVar1 = (long *)(lVar2 + _TtC14FlerkenSDKCore7Flerken::_session_id);
  lVar4 = plVar1[1];
  *plVar1 = lVar5;
  plVar1[1] = (long)pcVar8;
  _swift_release(lVar2);
  _swift_bridgeObjectRelease(lVar4);
  lVar7 = DAT_100b36400;
  lVar9 = 0;
  __s10Foundation4DateVMa();
  pcVar8 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  (*pcVar8)(puVar6,1,1,lVar9);
  lVar4 = _TtC14FlerkenSDKCore7Flerken::foregroundDate;
  _swift_beginAccess(lVar7 + _TtC14FlerkenSDKCore7Flerken::foregroundDate,auStack_68,0x21,0);
  _swift_retain(lVar7);
  FUN_10025695c(puVar6,lVar7 + lVar4);
  _swift_endAccess(auStack_68);
  _swift_release(lVar7);
  lVar7 = DAT_100b36400;
  (*pcVar8)(puVar6,1,1,lVar9);
  lVar4 = _TtC14FlerkenSDKCore7Flerken::backgroundDate;
  _swift_beginAccess(lVar7 + _TtC14FlerkenSDKCore7Flerken::backgroundDate,auStack_68,0x21,0);
  _swift_retain(lVar7);
  FUN_10025695c(puVar6,lVar7 + lVar4);
  _swift_endAccess(auStack_68);
  _swift_release(lVar7);
  return;
}

